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
    if(islower(*s) && *s>0)lowercase=true;//首字母小写
    while(*s)
    {
        if (*s>='a' && *s<='z')lowernum++;
        if(*s=='[')notes=true;//有注释
        sum++;
        s++;
    }
    if(!lowernum)uppercase=true;//字幕全部大写
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
    multiline=false;
    uppercase=false;
    lowercase=false;
    notes=false;
    QFile *fp=new QFile(filename); //打开选定文件
    fp->open(QIODevice::ReadOnly|QIODevice::Text); //以只读文本文件方式打开
    fp->seek(0);
    QTextStream txtinput(fp);
    while(!txtinput.atEnd()) //将字幕分成若干组，每组四行。
    {
        //第一行 —— 检测是不是数字
        srtstruct.seqnum=txtinput.readLine();//读第一行内容
        QByteArray seq=srtstruct.seqnum.toLatin1();//QString转char*
        char *s=seq.data();
        while(*s)
        {
            if(*s>'9'||*s<'0')return 1;//不是纯数字，文件本身有错误，直接返回
            s++;
        }
        //第二行 —— 检测时间区间是否合法
        srtstruct.timeline = txtinput.readLine();//读第二行内容
        if(srtstruct.timeline.length()!=29)return 1; //长度不对，不是有效的时间轴，文件错误
        if(!ispattern(srtstruct.timeline))return 1;//时间轴格式不对，文件错误

        //第三行 —— 检测字幕具体内容
         srtstruct.script = txtinput.readLine(); //读第三行内容
        if(!srtstruct.script.length())
        {
           //txtinput.readLine();
           continue; //没有内容，字幕块为空
        }
        else
        {
            seq=srtstruct.script.toLocal8Bit(); //转换为char*
            s=seq.data();
            calclower(s); //统计字母
        }

        //第四行 —— 检测字幕是否分行
         srtstruct.extraline = txtinput.readLine();
         if(srtstruct.extraline.length()) //第四行有内容则判定字幕分行
         {
            multiline=true;
            seq=srtstruct.extraline.toLatin1();
            s=seq.data();
            calclower(s);
            txtinput.readLine();
         }
    }
    fp->close();
    return 16*multiline+8*uppercase+4*notes+2*lowercase;
}
