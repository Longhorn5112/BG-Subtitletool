#include "widget.h"
#include "srtcheck.h"
#include "assmerge.h"
#include "srtrepair.h"
#include "ui_widget.h"
#include <QMouseEvent>
#include <Windows.h>
#include <qdebug.h>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , m_bDrag(false)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->correctsrt->setEnabled(false);
    ui->cnonly->setEnabled(false);
    ui->cnontop->setEnabled(false);
    ui->enontop->setEnabled(false);
    ui->beginmerge->setEnabled(false);
    ui->importcn->setEnabled(false);
    ui->cnass->setReadOnly(true);
    ui->cnass->setCursor(Qt::ForbiddenCursor);
    ui->enass->setReadOnly(true);
    ui->enass->setCursor(Qt::ForbiddenCursor);
    this->setWindowFlags(Qt::FramelessWindowHint);
}

int times = 10000;
int assopt = -1;

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_close_clicked()
{
    exit(0);
}


void MainWindow::on_mini_clicked()
{
    showMinimized();
}


void MainWindow::on_maxi_clicked()
{
    times--;
    QString str = QString::number(times);
    if(times<=9990 && times>0)
    {
        QString msg=QString::fromLocal8Bit("<font size='5'>我在程序里放了我的女装照片，再点击%1次就可以看了哦！</font>").arg(times);
        QMessageBox box(QMessageBox::Information,QString::fromLocal8Bit("诶呀 被你发现了"),msg);
        box.setStandardButtons(QMessageBox::Ok);
        box.setButtonText(QMessageBox::Ok,QString::fromLocal8Bit("好！"));
        box.exec();
    }
    else if(times>0)
    {
        QMessageBox box(QMessageBox::Critical,QString("RegSvr32——应用程序错误"),QString("模块gdi32.dll已加载，但找不到入口点DLLRegisterServer。\n\n请确保gdi32.dll为有效的DLL或OCX文件，然后重试。"));
        box.setStandardButtons(QMessageBox::Ok);
        box.setButtonText(QMessageBox::Ok,QString("确定"));
        box.exec();
    }
    if(!times)
    {
        QMessageBox box(QMessageBox::Information,QString::fromLocal8Bit("???"),QString::fromLocal8Bit("年轻人不讲武德！"));
        box.setStandardButtons(QMessageBox::Ok);
        box.setButtonText(QMessageBox::Ok,QString::fromLocal8Bit("？"));
        box.exec();
        exit(0);
    }
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_bDrag = true;
        //获得鼠标的初始位置
        mouseStartPoint = event->globalPos();
        //mouseStartPoint = event->pos();
        //获得窗口的初始位置
        windowTopLeftPoint = this->frameGeometry().topLeft();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if(m_bDrag)
    {
        //获得鼠标移动的距离
        QPoint distance = event->globalPos() - mouseStartPoint;
        //QPoint distance = event->pos() - mouseStartPoint;
        //改变窗口的位置
        this->move(windowTopLeftPoint + distance);
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_bDrag = false;
    }
}


void MainWindow::lightson(int stat)
{
    if(!stat)
    {
        ui->passlight->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(9, 247,104,255)");
        ui->correctsrt->setEnabled(false);
        ui->cnonly->setEnabled(true);
        ui->cnontop->setEnabled(true);
        ui->enontop->setEnabled(true);
        ui->importcn->setEnabled(true);
        ui->beginmerge->setEnabled(false);
        return;
    }
    else
    {
        ui->passlight->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(9, 247,104,0)");
        ui->cnonly->setEnabled(false);
        ui->cnontop->setEnabled(false);
        ui->enontop->setEnabled(false);
        ui->beginmerge->setEnabled(false);
        ui->importcn->setEnabled(false);
    }
    if(stat>=16)
    {
        ui->twoline->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(255, 0,0,255)");
        stat-=16;
    }
    else ui->twoline->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(255, 0,0,0)");
    if(stat >=8)
    {
        ui->uppercaselight->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(255, 0,0,255)");
        stat-=8;
    }
    else ui->uppercaselight->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(255, 0,0,0)");
    if(stat >=4)
    {
        ui->noteslight->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(255, 0,0,255)");
        stat-=4;
    }
    else ui->noteslight->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(255, 0,0,0)");
    if(stat >=2)
    {
        ui->lowerlight->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(255, 0,0,255)");
        stat-=2;
    }
    else ui->lowerlight->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(255, 0,0,0)");
    if(stat==1)
    {
        ui->file_errlight->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(255, 0,0,255)");
        ui->correctsrt->setEnabled(false);
    }
    else
    {
        ui->file_errlight->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(255, 0,0,0)");
        ui->correctsrt->setEnabled(true);
    }
}
void MainWindow::asslightson(int cnline,int enline)
{
    if(cnline == enline &&cnline>0)
    {
        ui->notsame->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(255, 0,0,0)");
        ui->same->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(9, 247,104,255)");
        ui->beginmerge->setEnabled(true);
    }
    else if(cnline>0)
    {
        ui->notsame->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(255, 0,0,255)");
        ui->same->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(9, 247,104,0)");
        ui->beginmerge->setEnabled(false);
    }
    else
    {
        ui->notsame->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(255, 0,0,0)");
        ui->same->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(9, 247,104,0)");
        ui->beginmerge->setEnabled(false);
    }
}

void MainWindow::asslightson_time(int cnline, int timeline)
{
    if(cnline == timeline &&cnline>0)
    {
        ui->notsame_2->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(255, 0,0,0)");
        ui->same_2->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(9, 247,104,255)");
        ui->beginmerge->setEnabled(true);
    }
    else if(cnline>0)
    {
        ui->notsame_2->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(255, 0,0,255)");
        ui->same_2->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(9, 247,104,0)");
        ui->beginmerge->setEnabled(false);
    }
    else
    {
        ui->notsame_2->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(255, 0,0,0)");
        ui->same_2->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:10px;background:rgb(9, 247,104,0)");
        ui->beginmerge->setEnabled(false);
    }
}

void MainWindow::on_OpenFile_clicked()
{
    lightson(-1);
    QString file_name = QFileDialog::getOpenFileName(this,
            QString::fromLocal8Bit("打开一个字幕文件"),
            "/",
            QString::fromLocal8Bit("srt字幕文件 (*.srt)"),
            0);
        if (!file_name.isNull())
        {
           ui->filename->setText(file_name);
           srtcheck thissrt;
           int status=thissrt.check(file_name);
           lightson(status);
        }
        else  ui->correctsrt->setEnabled(false);
}

void MainWindow::on_correctsrt_clicked()
{
    QString file_name = QFileDialog::getSaveFileName(this,
            QString::fromLocal8Bit("保存纠正后的文件"),
            "/",
            QString::fromLocal8Bit("srt字幕文件 (*.srt)"),
            0);
    if (!file_name.isNull())
    {
       if(file_name == ui->filename->toPlainText())
       {
           QMessageBox box(QMessageBox::Critical,QString::fromLocal8Bit("错误"),QString::fromLocal8Bit("<font size='5'>当前版本暂不支持直接覆盖。</font>"));
           box.setStandardButtons(QMessageBox::Ok);
           box.setButtonText(QMessageBox::Ok,QString::fromLocal8Bit("确定"));
           box.exec();
           return;
       }
       srtrepair thissrt;
       thissrt.outputsrt(ui->filename->toPlainText(),file_name);
       ui->filename->setText(file_name);
       lightson(-1);
       srtcheck this_srt;
       int status=this_srt.check(file_name);
       lightson(status);
    }
}

void MainWindow::on_cnonly_clicked()
{
    assopt=-1;
    asslightson(-2,-1);
    asslightson_time(-2,-1);
    ui->cnlinesled->display(0);
    ui->enlinesled->display(0);
    ui->cnlines_2->display(0);
    ui->timelineled->display(0);
    QString file_name = QFileDialog::getOpenFileName(this,
            QString::fromLocal8Bit("打开一个纯中文翻译文件"),
            "/",
            QString::fromLocal8Bit("翻译文本文档 (*.txt)"),
            0);
    ui->transfile->setText(file_name);
    assmerge thisass;
    int cnlines;
    int enlines;
    if (!file_name.isNull())
    {
        assopt=0;
        cnlines=thisass.getcnlines(file_name,0);
        qDebug() << cnlines;
        ui->cnlinesled->display(cnlines);
        enlines=thisass.getcnlines(ui->filename->toPlainText(),3);
        qDebug() << enlines;
        ui->enlinesled->display(enlines);
        asslightson(cnlines,enlines);
    }
}

void MainWindow::on_cnontop_clicked()
{
    assopt=-1;
    asslightson(-2,-1);
    asslightson_time(-2,-1);
    ui->cnlinesled->display(0);
    ui->enlinesled->display(0);
    ui->cnlines_2->display(0);
    ui->timelineled->display(0);
    QString file_name = QFileDialog::getOpenFileName(this,
            QString::fromLocal8Bit("打开一个纯中文翻译文件"),
            "/",
            QString::fromLocal8Bit("翻译文本文档 (*.txt)"),
            0);
    ui->transfile->setText(file_name);
    assmerge thisass;
    int cnlines;
    int enlines;
    if (!file_name.isNull())
    {
        assopt=1;
        cnlines=thisass.getcnlines(file_name,1);
        qDebug() << cnlines;
        ui->cnlinesled->display(cnlines);
        enlines=thisass.getcnlines(ui->filename->toPlainText(),3);
        qDebug() << enlines;
        ui->enlinesled->display(enlines);
        asslightson(cnlines,enlines);
    }

}

void MainWindow::on_enontop_clicked()
{
    assopt=-1;
    asslightson(-2,-1);
    asslightson_time(-2,-1);
    ui->cnlinesled->display(0);
    ui->enlinesled->display(0);
    ui->cnlines_2->display(0);
    ui->timelineled->display(0);
    QString file_name = QFileDialog::getOpenFileName(this,
            QString::fromLocal8Bit("打开一个纯中文翻译文件"),
            "/",
            QString::fromLocal8Bit("翻译文本文档 (*.txt)"),
            0);
    ui->transfile->setText(file_name);
    assmerge thisass;
    int cnlines;
    int enlines;
    if (!file_name.isNull())
    {
        assopt=2;
        cnlines=thisass.getcnlines(file_name,2);
        qDebug() << cnlines;
        ui->cnlinesled->display(cnlines);
        enlines=thisass.getcnlines(ui->filename->toPlainText(),3);
        qDebug() << enlines;
        ui->enlinesled->display(enlines);
        asslightson(cnlines,enlines);
    }
}

void MainWindow::on_neither_clicked()
{
    QMessageBox box(QMessageBox::Question,QString::fromLocal8Bit("？？？"),QString::fromLocal8Bit("<font size='100'>？？？？？</font>"));
    box.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    box.setButtonText(QMessageBox::Yes,QString::fromLocal8Bit("？？"));
    box.setButtonText(QMessageBox::No,QString::fromLocal8Bit("？？"));
    box.exec();
    return;
}

void MainWindow::on_beginmerge_clicked()
{
    QString file_name = QFileDialog::getSaveFileName(this,
            QString::fromLocal8Bit("保存为ass文件"),
            "/",
            QString::fromLocal8Bit("ass字幕文件 (*.ass)"),
            0);
    if(!file_name.isNull())
    {
        QString srtfile=ui->filename->toPlainText();
        QString transfile=ui->transfile->toPlainText();
        QString cnass=ui->cnass->toPlainText();
        QString enass=ui->enass->toPlainText();
        assmerge thisass;
        thisass.outputass(srtfile,transfile,file_name,cnass,enass,assopt);
        QMessageBox box(QMessageBox::Information,QString::fromLocal8Bit("提示"),QString::fromLocal8Bit("<font size='5'>合成完了，出没出问题，咱们不知道，咱也不敢问，反正程序跑完了……</font>"));
        box.setStandardButtons(QMessageBox::Ok);
        box.setButtonText(QMessageBox::Ok,QString::fromLocal8Bit("よし"));
        box.exec();
    }
}

void MainWindow::on_importcn_clicked()
{
    assopt=-1;
    asslightson(-2,-1);
    asslightson_time(-2,-1);
    ui->cnlinesled->display(0);
    ui->enlinesled->display(0);
    ui->cnlines_2->display(0);
    ui->timelineled->display(0);
    QString file_name = QFileDialog::getOpenFileName(this,
            QString::fromLocal8Bit("打开一个纯中文翻译文件"),
            "/",
            QString::fromLocal8Bit("翻译文本文档 (*.txt)"),
            0);
    ui->transfile->setText(file_name);
    assmerge thisass;
    int cnlines;
    int timeline;
    if (!file_name.isNull())
    {
        assopt=3;
        cnlines=thisass.getcnlines(file_name,0);
        qDebug() << cnlines;
        ui->cnlines_2->display(cnlines);
        timeline=thisass.getcnlines(ui->filename->toPlainText(),4);
        qDebug() << timeline;
        ui->timelineled->display(timeline);
        asslightson_time(cnlines,timeline);
    }
}

void MainWindow::on_changecode_clicked()
{
    ui->cnass->setReadOnly(false);
    ui->enass->setReadOnly(false);
    ui->cnass->setCursor(QCursor(Qt::IBeamCursor));
    ui->enass->setCursor(QCursor(Qt::IBeamCursor));
    ui->cnass->update();
}
