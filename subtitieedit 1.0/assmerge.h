#ifndef ASSMERGE_H
#define ASSMERGE_H
#include "widget.h"

class assmerge: public MainWindow
{
public:
    int getcnlines(QString file, int option);
    //file：中文翻译txt文件

    int outputass(QString infile1,QString infile2, QString outfile,QString cncode, QString encode, int option);
    //infile1：检测合格的srt字幕
    //infile2: 翻译好的txt文件
    //outfile：输出的ass字幕
    //option:0--外挂srt字幕+纯中文翻译
    //       1--外挂srt字幕+中文在上双语
    //       2--外挂srt字幕+中文在下双语
    //       3--空srt字幕+纯中文翻译
};

#endif // ASSMERGE_H
