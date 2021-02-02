#pragma once
#include <QString>
#include "widget.h"

class srtcheck: public MainWindow
{
private:
    struct srtcontent       //标准srt字幕格式
    {
        QString seqnum;         //第一行 字幕序号
        QString timeline;   //第二行 字幕区间
        QString script;     //第三行 字幕内容(可以为空）
        QString extraline;  //（备用）多出的一行（可以为空）
    }srtstruct;

private:
    int checkstatus(QString filename);//检查字幕中
    void calclower(char *s);
    void setlights();
    bool formaterr; //字幕分行了 权重：16

public:
    static int check(QString Name);
};
