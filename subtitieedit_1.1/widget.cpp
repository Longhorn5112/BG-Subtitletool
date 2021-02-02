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
    ui->ignore->setEnabled(false);
    ui->beginmerge->setEnabled(false);
    ui->importcn->setEnabled(false);
    this->setWindowFlags(Qt::FramelessWindowHint);
}

int times = 10000;

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
    if(stat == 0) //字幕文件格式正确，绿灯亮，可导入中文翻译
    {
        ui->passlight->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:13px;background:rgb(9, 247,104,255)");
        ui->correctsrt->setEnabled(false);
        ui->ignore->setEnabled(false);
        ui->importcn->setEnabled(true);
        ui->beginmerge->setEnabled(false);
        return;
    }
    if(stat == -1) //初始化，所有灯全灭
    {
        ui->passlight->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:13px;background:rgb(9, 247,104,0)");
        ui->fileerr->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:13px;background:rgb(255,0,0,0)");
        ui->formaterr->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:13px;background:rgb(255,0,0,0)");
        ui->beginmerge->setEnabled(false);
        ui->importcn->setEnabled(false);
        return;
    }
    switch (stat) //字幕文件有问题，亮对应的灯
    {
        case 1 : //文件错误，所有按钮不可用
        {
            ui->fileerr->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:13px;background:rgb(255,0,0,255)");
            return;
        }
        case 2 : //格式问题，纠正和忽略按钮可用
        {
            ui->formaterr->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:13px;background:rgb(255,0,0,255)");
            ui->correctsrt->setEnabled(true);
            ui->ignore->setEnabled(true);
            return;
        }
        default:
        {
            QMessageBox box(QMessageBox::Question,QString::fromLocal8Bit("？？？"),QString::fromLocal8Bit("<font size='5'>？？？怎么触发的</font>"));
            box.setStandardButtons(QMessageBox::Ok);
            box.setButtonText(QMessageBox::Ok,QString::fromLocal8Bit("？？？"));
            box.exec();
        }
    }

}
void MainWindow::asslightson(int cnline,int enline)
{
    if(cnline == enline &&cnline>0)
    {
        ui->notsame->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:13px;background:rgb(255, 0,0,0)");
        ui->same->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:13px;background:rgb(9, 247,104,255)");
        ui->beginmerge->setEnabled(true);
    }
    else if(cnline>0)
    {
        ui->notsame->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:13px;background:rgb(255, 0,0,255)");
        ui->same->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:13px;background:rgb(9, 247,104,0)");
        ui->beginmerge->setEnabled(false);
    }
    else
    {
        ui->notsame->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:13px;background:rgb(255, 0,0,0)");
        ui->same->setStyleSheet("border:solid;border-width:2px;border-color:rgb(44,43,41);border-radius:13px;background:rgb(9, 247,104,0)");
        ui->beginmerge->setEnabled(false);
    }
}

void MainWindow::on_OpenFile_clicked()
{
    lightson(-1);
    ui->correctsrt->setEnabled(false);
    ui->ignore->setEnabled(false);
    QString file_name = QFileDialog::getOpenFileName(this,
            QString::fromLocal8Bit("打开一个字幕文件"),
            "/",
            QString::fromLocal8Bit("srt字幕文件 (*.srt)"),
            0);
        if (!file_name.isNull())
        {
           srtcheck thissrt;
           ui->originsrt->setText(file_name);
           int status=thissrt.check(file_name);
           qDebug()<< status;
           lightson(status);
        }
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
       if(file_name == ui->originsrt->toPlainText())
       {
           QMessageBox box(QMessageBox::Critical,QString::fromLocal8Bit("错误"),QString::fromLocal8Bit("<font size='5'>当前版本暂不支持直接覆盖。</font>"));
           box.setStandardButtons(QMessageBox::Ok);
           box.setButtonText(QMessageBox::Ok,QString::fromLocal8Bit("确定"));
           box.exec();
           return;
       }
       srtrepair thissrt;
       thissrt.outputsrt(ui->originsrt->toPlainText(),file_name);
       ui->originsrt->setText(file_name);
       lightson(-1);
       srtcheck this_srt;
       int status=this_srt.check(file_name);
       lightson(status);
    }
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
        QString transfile=ui->transfile->toPlainText();
        QString cnass=ui->cnass->toPlainText();
        QString enass=ui->enass->toPlainText();
        assmerge thisass;
        thisass.outputass(ui->originsrt->toPlainText(),transfile,file_name,cnass,enass);
        QMessageBox box(QMessageBox::Information,QString::fromLocal8Bit("提示"),QString::fromLocal8Bit("<font size='5'>合成完了，出没出问题，咱们不知道，咱也不敢问，反正程序跑完了……</font>"));
        box.setStandardButtons(QMessageBox::Ok);
        box.setButtonText(QMessageBox::Ok,QString::fromLocal8Bit("よし"));
        box.exec();
    }
}

void MainWindow::on_importcn_clicked()
{
    asslightson(-2,-1);
    ui->cnlinesled->display(0);
    ui->enlinesled->display(0);
    QString file_name = QFileDialog::getOpenFileName(this,
            QString::fromLocal8Bit("打开一个翻译文件"),
            "/",
            QString::fromLocal8Bit("翻译文本文档 (*.txt)"),
            0);
    ui->transfile->setText(file_name);
    assmerge thisass;
    int cnlines;
    int timeline;
    if (!file_name.isNull())
    {
        cnlines=thisass.getcnlines(file_name,0);
        qDebug() << cnlines;
        ui->cnlinesled->display(cnlines);
        timeline=thisass.getcnlines(ui->originsrt->toPlainText(),3);
        qDebug() << timeline;
        ui->enlinesled->display(timeline);
        asslightson(cnlines,timeline);
    }
}

void MainWindow::on_ignore_clicked()
{
    QMessageBox box(QMessageBox::Warning,QString::fromLocal8Bit("提示"),QString::fromLocal8Bit("不行，爷改主意了。"));
    box.setStandardButtons(QMessageBox::Ok);
    box.setButtonText(QMessageBox::Ok,QString::fromLocal8Bit("哦"));
    box.exec();
    //ui->importcn->setEnabled(true);
}
