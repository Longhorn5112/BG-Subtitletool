#include "widget.h"
#include "aboutdialog.h"
#include <QFile>
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    AboutDialog about;
    about.setWindowFlag(Qt::FramelessWindowHint);
    w.show();
    about.show();
    return a.exec();
}
