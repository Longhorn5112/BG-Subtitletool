#include "widget.h"
#include "aboutdialog.h"
#include <QFile>
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMessageBox box(QMessageBox::Critical,QString::fromLocal8Bit("错误"),QString::fromLocal8Bit("<font size='5'>找不到主题文件wiki.bgtheme，程序的显示可能会出现问题。</font>"));
    box.setStandardButtons(QMessageBox::Ok);
    box.setButtonText(QMessageBox::Ok,QString::fromLocal8Bit("确定"));
    box.exec();
    MainWindow w;
    AboutDialog about;
    about.setWindowFlag(Qt::FramelessWindowHint);
    w.show();
    about.show();
    return a.exec();
}
