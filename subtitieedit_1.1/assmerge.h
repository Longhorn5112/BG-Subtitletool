#ifndef ASSMERGE_H
#define ASSMERGE_H
#include "widget.h"

class assmerge: public MainWindow
{
public:
    int getcnlines(QString file, int option);
    //file：中文翻译txt文件

    int outputass(QString infile1,QString infile2, QString outfile,QString cncode, QString encode);
    //infile1：检测合格的srt字幕
    //infile2: 翻译好的txt文件
    //outfile：输出的ass字幕
};

#endif // ASSMERGE_H
