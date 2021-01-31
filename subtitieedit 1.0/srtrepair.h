#ifndef SRTREPAIR_H
#define SRTREPAIR_H
#include "widget.h"

class srtrepair: public MainWindow
{
private:
    bool uppercase;
    bool lowercase;
    bool notes;
    bool multiline;

private:
    void init();
    QString cutnotes(QByteArray script);

public:
    void outputsrt(QString src,QString des);
};

#endif // SRTREPAIR_H
