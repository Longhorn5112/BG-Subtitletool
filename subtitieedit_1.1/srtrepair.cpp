#include "srtrepair.h"
#include <qfile.h>
#include <qtextstream.h>
#include <qdebug.h>

void srtrepair::init()
{
    uppercase=false;
    lowercase=false;
    notes=false;
    multiline=false;
}

QString srtrepair::cutnotes(QByteArray script)
{
    //AAABBB[CCC]DDD
    QString result;
    QString srt=QString(script);
    if(srt.contains("["))
    {
        QStringList List = srt.split("[");//AAABBB CCC]DDD
        result += List[0];
    }
    else
    {
        //qDebug()<< srt;
        return srt;
    }
    if(srt.contains("]"))
    {
        QStringList List = srt.split("]");//AAABBB CCC]DDD
        result += List[1];
    }
    qDebug()<< result;
    return result;
}


void srtrepair::outputsrt(QString src, QString des)
{
    QFile *fpin=new QFile(src);     //源文件
    QFile *fpout=new QFile(des);    //目标文件
    fpin->open(QIODevice::ReadOnly|QIODevice::Text); //打开源文件
    fpout->open(QIODevice::WriteOnly|QIODevice::Text); //打开目标文件
    QTextStream txtin(fpin); //读取源文件内容
    QTextStream txtout(fpout);
    fpin->seek(0);
    int line = 1;
    while(!txtin.atEnd())
    {
        QString seq=txtin.readLine();//序列号
        QString timeline = txtin.readLine();//时间轴
        QString script = txtin.readLine(); //台词
        QString extra = txtin.readLine();//第三行有台词，读第四行
        if(extra.length())
        {
            script += " " + extra;//第四行也有台词 拼接
            txtin.readLine();//读第五行的空行
        }
        QStringList list = script.split(" ");
        QByteArray s0=script.toLatin1();
        char *s= s0.data();
        if(islower(*s))*s-=32; //修复首字母大写
        script = cutnotes(s0);//去除注释
        if(!script.length()) continue; //如果整行都是注释，就什么也不输出
        if(script[script.length()-1]==',' || script[script.length()-1]=='.') //句尾不保留逗号句号
            if(script[script.length()-2] != '.')script = script.left(script.size()-1);//但要注意句尾是省略号的情况
        qDebug()<< script;
        if(script.length())//如果整行都是注释，什么也不输出
        {
            txtout << line << endl;
            txtout << timeline << endl;
            txtout << script << endl << endl;
            line++;
        }
    }
    fpin->close();
    fpout->close();
}
