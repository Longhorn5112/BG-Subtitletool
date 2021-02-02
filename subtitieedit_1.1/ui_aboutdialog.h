/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QLabel *Title;
    QColumnView *columnView;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_9;
    QPushButton *close;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QFrame *line;
    QLabel *label_7;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(400, 320);
        Title = new QLabel(AboutDialog);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(0, 0, 401, 36));
        Title->setContextMenuPolicy(Qt::CustomContextMenu);
        Title->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 77, 255), stop:0.5 rgba(0, 85, 255, 255), stop:1 rgba(235, 235, 235, 255));\n"
"border: ridge;\n"
"border-width:3px;\n"
"border-color:rgb(156,155,151);"));
        columnView = new QColumnView(AboutDialog);
        columnView->setObjectName(QString::fromUtf8("columnView"));
        columnView->setGeometry(QRect(0, 35, 401, 285));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        columnView->setFont(font);
        columnView->setStyleSheet(QString::fromUtf8("border: ridge;\n"
"border-width:3px;\n"
"border-color:rgb(94,93,91);\n"
"background:rgb(179,216,247);\n"
""));
        columnView->setFrameShape(QFrame::NoFrame);
        columnView->setFrameShadow(QFrame::Raised);
        columnView->setLineWidth(10);
        columnView->setMidLineWidth(10);
        columnView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        columnView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        columnView->setAutoScroll(true);
        label_3 = new QLabel(AboutDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(35, 7, 71, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\345\234\206\347\256\200\344\275\223"));
        font1.setPointSize(14);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_5 = new QLabel(AboutDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 250, 111, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        label_5->setFont(font2);
        label_9 = new QLabel(AboutDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(6, 6, 24, 24));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/C:/Users/Longhorn/Pictures/Camera Roll/10041.png")));
        label_9->setScaledContents(true);
        close = new QPushButton(AboutDialog);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(360, 6, 29, 25));
        close->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"        border: outset;\n"
"		border-width:2px;\n"
"		border-color:rgb(244,243,241);\n"
" 		border-radius:0px;\n"
"}\n"
"QPushButton:enabled {\n"
"        background: rgb(234, 230, 228);\n"
"        color: white;\n"
"}\n"
"\n"
"QPushButton:enabled:pressed{\n"
"        background: rgb(184, 180, 178);\n"
"		border-color:rgb(12,13,15);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/C:/Users/Longhorn/Desktop/QUI-Creator-master/other/qss/psblack/branch_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon);
        close->setIconSize(QSize(42, 42));
        label = new QLabel(AboutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 40, 271, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(26);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label_4 = new QLabel(AboutDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 120, 371, 141));
        label_4->setFont(font2);
        label_4->setWordWrap(true);
        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 100, 201, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(11);
        label_2->setFont(font4);
        line = new QFrame(AboutDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(389, 0, 20, 321));
        line->setStyleSheet(QString::fromUtf8("color:rgb(94,93,91);"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(5);
        line->setMidLineWidth(0);
        line->setFrameShape(QFrame::VLine);
        label_7 = new QLabel(AboutDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(230, 275, 161, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Comic Sans MS"));
        font5.setPointSize(14);
        label_7->setFont(font5);
        label_7->setScaledContents(true);
        columnView->raise();
        Title->raise();
        label_3->raise();
        label_5->raise();
        label_9->raise();
        close->raise();
        label->raise();
        label_4->raise();
        label_2->raise();
        line->raise();
        label_7->raise();

        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        Title->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Title->setText(QString());
        label_3->setText(QCoreApplication::translate("AboutDialog", "\345\205\263\344\272\216", nullptr));
        label_5->setText(QCoreApplication::translate("AboutDialog", "\350\277\230\346\230\257\345\244\252\350\217\234\344\272\206\345\221\200\343\200\202", nullptr));
        label_9->setText(QString());
        close->setText(QString());
        label->setText(QCoreApplication::translate("AboutDialog", "\345\255\227\345\271\225\345\244\204\347\220\206\350\275\257\344\273\266", nullptr));
        label_4->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p>\347\211\210\346\234\254\350\257\264\346\230\216\357\274\232<br/>\302\240\302\240\302\240\302\240\302\240\302\240\350\277\231\346\230\257\345\255\227\345\271\225\345\244\204\347\220\206\350\275\257\344\273\266\347\232\204\347\254\254\344\272\214\344\270\252\347\211\210\346\234\254\357\274\214\345\210\235\346\255\245\347\256\200\345\214\226\347\225\214\351\235\242\357\274\214\345\220\210\345\271\266\344\272\206\345\207\275\346\225\260\344\270\255\347\232\204\344\270\200\344\272\233\346\223\215\344\275\234\357\274\214\347\233\256\345\211\215\345\217\257\344\273\245\345\256\236\347\216\260\347\256\200\345\215\225\347\232\204\346\240\274\345\274\217\351\227\256\351\242\230\346\243\200\346\265\213\344\270\216\344\277\256\345\244\215\343\200\202\346\225\264\344\275\223\351\200\273\350\276\221\345\217\257\350\203\275\350\277\230\346\230\257\345\276\210\344\271\261\357\274\214\347\250\213\345\272\217\345\244\247\346\234\211\346\224\271\350\277\233\347\232\204\347\251\272\351\227\264\343\200\202</"
                        "p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("AboutDialog", "\347\211\210\346\234\254\357\274\2321.1-847 21-2-02", nullptr));
        label_7->setText(QCoreApplication::translate("AboutDialog", "Billy Goodman", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
