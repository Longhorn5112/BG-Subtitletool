#include "srtcheck.h"
#include <qfile.h>
#include <qtextstream.h>
#include <qregexp.h>
#include <ctype.h>
#include <qdebug.h>

void srtcheck::calclower(char *s)
{
    int lowernum=0;//小写字母个数
    int sum=0;//字符总数
    if(islower(*s) && *s>0)formaterr=true;//首字母小写
    while(*s)
    {
        if (*s>='a' && *s<='z')lowernum++;
        if(*s=='[')formaterr=true;//有注释
        sum++;
        s++;
    }
    if(!lowernum)
    {
        qDebug() << "Uppercase";
        //formaterr=true;//字幕全部大写
    }

    return;
}

bool ispattern(QString cmpline) //正则匹配确定时间轴是否符合格式
{
    QRegExp stdline("\\d\\d:\\d\\d:\\d\\d,\\d\\d\\d --> \\d\\d:\\d\\d:\\d\\d,\\d\\d\\d");//srt字幕的时间轴表达式
    return stdline.exactMatch(cmpline);
}

int srtcheck::check(QString Name)
{
    srtcheck thissrt;
    int stat = thissrt.checkstatus(Name);
    return stat;
}

int srtcheck::checkstatus(QString filename)
{
    int line = 1;
    formaterr=false;
    QFile *fp=new QFile(filename); //打开选定文件
    fp->open(QIODevice::ReadOnly|QIODevice::Text); //以只读文本文件方式打开
    fp->seek(0);
    QTextStream txtinput(fp);
    while(!txtinput.atEnd()) //将字幕分成若干组，每组四行。
    {
        srtstruct.seqnum=txtinput.readLine();//读第一行内容
        srtstruct.timeline = txtinput.readLine();//读第二行内容
        srtstruct.script = txtinput.readLine(); //读第三行内容
        if(!srtstruct.seqnum.contains(QRegExp("^\\d+$")))
        {
            qDebug()<<"error at line " << line;
            return 1; //第一行一定是纯数字，否则文件错误
        }
        line++;
        if(srtstruct.timeline.length()!=29)
        {
            qDebug()<<"error at line " << line;
            return 1; //时间轴长度不对，不是有效的时间轴，文件错误
        }
        if(!ispattern(srtstruct.timeline))
        {
            qDebug()<<"error at line " << line;
            return 1; //时间轴格式不对，文件错误
        }
        line++;
        if(srtstruct.script.length())   //这一行有东西
        {
            srtstruct.extraline = txtinput.readLine();  //读第四行内容
            if(!srtstruct.script.contains(QRegExp("[\\x4e00-\\x9fa5]+")))//不含中文，则转去判断大小写
            {
                QByteArray seq=srtstruct.script.toLocal8Bit(); //转换为char*
                char *s=seq.data();
                calclower(s); //统计字母
            }
        }
        line++;
         if(srtstruct.extraline.length()) //第四行有内容则判定字幕分行
         {
            formaterr=true;
            QByteArray seq=srtstruct.extraline.toLatin1();
            char *s=seq.data();
            calclower(s);
            txtinput.readLine(); //第四行有东西 第五行才是空行
            line++;
         }
    }
    fp->close();
    return 2*formaterr;
}
