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
    bool multiline; //字幕分行了 权重：16
    bool uppercase; //字幕全大写了 权重：8
    bool notes;     //字幕有无关内容 权重：4
    bool lowercase; //首字母小写了？权重：2
    bool fileerror; //你确定文件没问题？ 权重：1

public:
    static int check(QString Name);
};
