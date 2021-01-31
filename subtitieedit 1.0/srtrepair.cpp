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
        qDebug()<< srt;
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
    while(!txtin.atEnd())
    {
        //第一行--序列号，直接写入
        QString seq=txtin.readLine();
        txtout << seq << endl;

        //第二行--时间轴，直接写入
        seq = txtin.readLine();
        txtout << seq << endl;

        //第三行--台词，先检查，再修复，再写入，如果第四行还有内容，则拼接
        seq = txtin.readLine();
        QString temp = txtin.readLine();
        QByteArray s0=seq.toLatin1();
        char *s= s0.data();
        while(*s)
        {
            if(isupper(*s)&& *s!='I')*s+=32;
            s++;
        }
        s=s0.data();
        if(islower(*s))*s-=32; //修复首字母大写
        seq = cutnotes(s0);
        if(seq != NULL) txtout << seq;
        else
        {
            txtout << endl;
            continue;
        }
        //第四行
        if(temp != NULL)
        {

            s0=temp.toLatin1();
            char *s= s0.data();
            while(*s)
            {
                if(isupper(*s)&& *s!='I')*s+=32;
                s++;
            }
            txtout <<" ";
            seq = cutnotes(s0);
            if(seq != NULL)txtout << seq << endl;
            txtin.readLine();//第五行才是空格
        }
        else txtout << endl;
        txtout << endl;
    }
    fpin->close();
    fpout->close();
}
