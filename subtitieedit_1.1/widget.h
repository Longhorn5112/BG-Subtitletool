#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "dialog.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class QMouseEvent;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Ui::MainWindow *ui;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void lightson(int status);
    void MainWindow::asslightson(int cnline,int enline);

private slots:
    void on_close_clicked();
    void on_mini_clicked();
    void on_maxi_clicked();
    void on_OpenFile_clicked();
    void on_correctsrt_clicked();
    void on_beginmerge_clicked();
    void on_importcn_clicked();

    void on_ignore_clicked();

private:
    bool        m_bDrag;
    QPoint      mouseStartPoint;
    QPoint      windowTopLeftPoint;

public:
    QString srtfile;
    QString cnfile;
};
#endif // MAINWINDOW_H
