/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_4;
    QLabel *label;
    QColumnView *columnView;
    QLabel *label_5;
    QLabel *Title;
    QPushButton *mini;
    QPushButton *maxi;
    QPushButton *close;
    QLabel *label_3;
    QLabel *label_9;
    QFrame *line;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_2;
    QTextBrowser *originsrt;
    QPushButton *OpenFile;
    QGroupBox *groupBox;
    QLabel *fileerr;
    QLabel *label_14;
    QPushButton *correctsrt;
    QLabel *passlight;
    QLabel *label_23;
    QLabel *label_24;
    QPushButton *ignore;
    QLabel *formaterr;
    QFrame *line_2;
    QLabel *label_11;
    QFrame *line_3;
    QLabel *label_16;
    QTextEdit *cnass;
    QLabel *label_21;
    QTextBrowser *enass;
    QLabel *label_22;
    QLabel *label_15;
    QTextBrowser *transfile;
    QPushButton *importcn;
    QGroupBox *groupBox_2;
    QLabel *label_17;
    QLCDNumber *cnlinesled;
    QLabel *label_18;
    QLCDNumber *enlinesled;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *beginmerge;
    QLabel *notsame;
    QLabel *same;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 580);
        MainWindow->setMinimumSize(QSize(800, 580));
        MainWindow->setMaximumSize(QSize(800, 580));
        MainWindow->setSizeIncrement(QSize(750, 500));
        MainWindow->setStyleSheet(QString::fromUtf8("/**********\345\255\220\347\225\214\351\235\242\350\203\214\346\231\257**********/\n"
"QWidget#customWidget {\n"
"        background: rgb(173, 202, 232);\n"
"}\n"
" \n"
"/**********\345\255\220\347\225\214\351\235\242\344\270\255\345\244\256\350\203\214\346\231\257**********/\n"
"QWidget#centerWidget {\n"
"        background: rgb(232, 241, 252);\n"
"}\n"
" \n"
"/**********\344\270\273\347\225\214\351\235\242\346\240\267\345\274\217**********/\n"
"QWidget#mainWindow {\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        background: rgb(232, 241, 252);\n"
"}\n"
" \n"
"QWidget#messageWidget {\n"
"        background: rgba(173, 202, 232, 50%);\n"
"}\n"
" \n"
"QWidget#loadingWidget {\n"
"        border: none;\n"
"        border-radius: 5px;\n"
"        background: rgb(187, 212, 238);\n"
"}\n"
" \n"
"QWidget#remoteWidget {\n"
"        border-top-right-radius: 10px;\n"
"        border-bottom-right-radius: 10px;\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        border-left: none;\n"
"        backgr"
                        "ound: transparent;\n"
"}\n"
" \n"
"StyledWidget {\n"
"        qproperty-normalColor: rgb(65, 65, 65);\n"
"        qproperty-disableColor: rgb(180, 180, 180);\n"
"        qproperty-highlightColor: rgb(0, 160, 230);\n"
"        qproperty-errorColor: red;\n"
"}\n"
" \n"
"QProgressIndicator {\n"
"        qproperty-color: rgb(2, 65, 132);\n"
"}\n"
" \n"
"/**********\346\217\220\347\244\272**********/\n"
"QToolTip{\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        background: white;\n"
"        color: rgb(51, 51, 51);\n"
"}\n"
" \n"
"/**********\350\217\234\345\215\225\346\240\217**********/\n"
"QMenuBar {\n"
"        background: rgb(187, 212, 238);\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        border-left: none;\n"
"        border-right: none;\n"
"}\n"
"QMenuBar::item {\n"
"        border: 1px solid transparent;\n"
"        padding: 5px 10px 5px 10px;\n"
"        background: transparent;\n"
"}\n"
"QMenuBar::item:enabled {\n"
"        color: rgb(2, 65, 132);\n"
"}\n"
"QMenuBar::item:!enab"
                        "led {\n"
"        color: rgb(155, 155, 155);\n"
"}\n"
"QMenuBar::item:enabled:selected {\n"
"        border-top-color: rgb(111, 156, 207);\n"
"        border-bottom-color: rgb(111, 156, 207);\n"
"        background: rgb(198, 224, 252);\n"
"}\n"
" \n"
"/**********\350\217\234\345\215\225**********/\n"
"QMenu {\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        background: rgb(232, 241, 250);\n"
"}\n"
"QMenu::item {\n"
"        height: 22px;\n"
"        padding: 0px 25px 0px 20px;\n"
"}\n"
"QMenu::item:enabled {\n"
"        color: rgb(84, 84, 84);\n"
"}\n"
"QMenu::item:!enabled {\n"
"        color: rgb(155, 155, 155);\n"
"}\n"
"QMenu::item:enabled:selected {\n"
"        color: rgb(2, 65, 132);\n"
"        background: rgba(255, 255, 255, 200);\n"
"}\n"
"QMenu::separator {\n"
"        height: 1px;\n"
"        background: rgb(111, 156, 207);\n"
"}\n"
"QMenu::indicator {\n"
"        width: 13px;\n"
"        height: 13px;\n"
"}\n"
"QMenu::icon {\n"
"        padding-left: 2px;\n"
"        padding-right: 2px"
                        ";\n"
"}\n"
" \n"
"/**********\347\212\266\346\200\201\346\240\217**********/\n"
"QStatusBar {\n"
"        background: rgb(187, 212, 238);\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        border-left: none;\n"
"        border-right: none;\n"
"        border-bottom: none;\n"
"}\n"
"QStatusBar::item {\n"
"    border: none;\n"
"    border-right: 1px solid rgb(111, 156, 207);\n"
"}\n"
" \n"
"/**********\345\210\206\347\273\204\346\241\206**********/\n"
"QGroupBox {\n"
"        font-size: 15px;\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        border-radius: 4px;\n"
"        margin-top: 10px;\n"
"}\n"
"QGroupBox::title {\n"
"        color: rgb(56, 99, 154);\n"
"        top: -12px;\n"
"        left: 10px;\n"
"}\n"
" \n"
"/**********\351\241\265\347\255\276\351\241\271**********/\n"
"QTabWidget::pane {\n"
"        border: none;\n"
"        border-top: 3px solid rgb(0, 78, 161);\n"
"        background: rgb(187, 212, 238);\n"
"}\n"
"QTabWidget::tab-bar {\n"
"        border: none;\n"
"}\n"
"QTabB"
                        "ar::tab {\n"
"        border: none;\n"
"        border-top-left-radius: 4px;\n"
"        border-top-right-radius: 4px;\n"
"        color: white;\n"
"        background: rgb(120, 170, 220);\n"
"        height: 28px;\n"
"        min-width: 85px;\n"
"        margin-right: 5px;\n"
"        padding-left: 5px;\n"
"        padding-right: 5px;\n"
"}\n"
"QTabBar::tab:hover {\n"
"        background: rgb(0, 78, 161);\n"
"}\n"
"QTabBar::tab:selected {\n"
"        color: white;\n"
"        background: rgb(0, 78, 161);\n"
"}\n"
" \n"
"QTabWidget#tabWidget::pane {\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        background: rgb(232, 241, 252);\n"
"        margin-top: -1px;\n"
"}\n"
" \n"
"QTabBar#tabBar::tab {\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        border-bottom: none;\n"
"        color: rgb(70, 71, 73);\n"
"        background: transparent;\n"
"}\n"
"QTabBar#tabBar::tab:hover {\n"
"        color: rgb(2, 65, 132);\n"
"}\n"
"QTabBar#tabBar::tab:selected {\n"
"        color: rgb(2, 65, 132);\n"
""
                        "        background: rgb(232, 241, 252);\n"
"}\n"
" \n"
"/**********\350\241\250\345\244\264**********/\n"
"QHeaderView{\n"
"        border: none;\n"
"        border-bottom: 3px solid rgb(0, 78, 161);\n"
"        background: transparent;\n"
"        min-height: 30px;\n"
"}\n"
"QHeaderView::section:horizontal {\n"
"        border: none;\n"
"        color: rgb(2, 65, 132);\n"
"        background: transparent;\n"
"        padding-left: 5px;\n"
"}\n"
"QHeaderView::section:horizontal:hover {\n"
"        color: white;\n"
"        background: rgb(0, 78, 161);\n"
"}\n"
"QHeaderView::section:horizontal:pressed {\n"
"        color: white;\n"
"        background: rgb(6, 94, 187);\n"
"}\n"
"QHeaderView::up-arrow {\n"
"        width: 13px;\n"
"        height: 11px;\n"
"        padding-right: 5px;\n"
"        image: url(:/White/topArrow);\n"
"        subcontrol-position: center right;\n"
"}\n"
"QHeaderView::up-arrow:hover, QHeaderView::up-arrow:pressed {\n"
"        image: url(:/White/topArrowHover);\n"
"}\n"
"QHeaderView::d"
                        "own-arrow {\n"
"        width: 13px;\n"
"        height: 11px;\n"
"        padding-right: 5px;\n"
"        image: url(:/White/bottomArrow);\n"
"        subcontrol-position: center right;\n"
"}\n"
"QHeaderView::down-arrow:hover, QHeaderView::down-arrow:pressed {\n"
"        image: url(:/White/bottomArrowHover);\n"
"}\n"
" \n"
"/**********\350\241\250\346\240\274**********/\n"
"QTableView {\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        background: rgb(224, 238, 255);\n"
"        gridline-color: rgb(111, 156, 207);\n"
"}\n"
"QTableView::item {\n"
"        padding-left: 5px;\n"
"        padding-right: 5px;\n"
"        border: none;\n"
"        background: white;\n"
"        border-right: 1px solid rgb(111, 156, 207);\n"
"        border-bottom: 1px solid rgb(111, 156, 207);\n"
"}\n"
"QTableView::item:selected {\n"
"        background: rgba(255, 255, 255, 100);\n"
"}\n"
"QTableView::item:selected:!active {\n"
"        color: rgb(65, 65, 65);\n"
"}\n"
"QTableView::indicator {\n"
"        width: 20px;\n"
""
                        "        height: 20px;\n"
"}\n"
"QTableView::indicator:enabled:unchecked {\n"
"        image: url(:/White/checkBox);\n"
"}\n"
"QTableView::indicator:enabled:unchecked:hover {\n"
"        image: url(:/White/checkBoxHover);\n"
"}\n"
"QTableView::indicator:enabled:unchecked:pressed {\n"
"        image: url(:/White/checkBoxPressed);\n"
"}\n"
"QTableView::indicator:enabled:checked {\n"
"        image: url(:/White/checkBoxChecked);\n"
"}\n"
"QTableView::indicator:enabled:checked:hover {\n"
"        image: url(:/White/checkBoxCheckedHover);\n"
"}\n"
"QTableView::indicator:enabled:checked:pressed {\n"
"        image: url(:/White/checkBoxCheckedPressed);\n"
"}\n"
"QTableView::indicator:enabled:indeterminate {\n"
"        image: url(:/White/checkBoxIndeterminate);\n"
"}\n"
"QTableView::indicator:enabled:indeterminate:hover {\n"
"        image: url(:/White/checkBoxIndeterminateHover);\n"
"}\n"
"QTableView::indicator:enabled:indeterminate:pressed {\n"
"        image: url(:/White/checkBoxIndeterminatePressed);\n"
"}\n"
" \n"
""
                        "/**********\346\273\232\345\212\250\346\235\241-\346\260\264\345\271\263**********/\n"
"QScrollBar:horizontal {\n"
"        height: 20px;\n"
"        background: transparent;\n"
"        margin-top: 3px;\n"
"        margin-bottom: 3px;\n"
"}\n"
"QScrollBar::handle:horizontal {\n"
"        height: 20px;\n"
"        min-width: 30px;\n"
"        background: rgb(170, 200, 230);\n"
"        margin-left: 15px;\n"
"        margin-right: 15px;\n"
"}\n"
"QScrollBar::handle:horizontal:hover {\n"
"        background: rgb(165, 195, 225);\n"
"}\n"
"QScrollBar::sub-line:horizontal {\n"
"        width: 15px;\n"
"        background: transparent;\n"
"        image: url(:/White/arrowLeft);\n"
"        subcontrol-position: left;\n"
"}\n"
"QScrollBar::add-line:horizontal {\n"
"        width: 15px;\n"
"        background: transparent;\n"
"        image: url(:/White/arrowRight);\n"
"        subcontrol-position: right;\n"
"}\n"
"QScrollBar::sub-line:horizontal:hover {\n"
"        background: rgb(170, 200, 230);\n"
"}\n"
"QScrollBar:"
                        ":add-line:horizontal:hover {\n"
"        background: rgb(170, 200, 230);\n"
"}\n"
"QScrollBar::add-page:horizontal,QScrollBar::sub-page:horizontal {\n"
"        background: transparent;\n"
"}\n"
" \n"
"/**********\346\273\232\345\212\250\346\235\241-\345\236\202\347\233\264**********/\n"
"QScrollBar:vertical {\n"
"        width: 20px;\n"
"        background: transparent;\n"
"        margin-left: 3px;\n"
"        margin-right: 3px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"        width: 20px;\n"
"        min-height: 30px;\n"
"        background: rgb(170, 200, 230);\n"
"        margin-top: 15px;\n"
"        margin-bottom: 15px;\n"
"}\n"
"QScrollBar::handle:vertical:hover {\n"
"        background: rgb(165, 195, 225);\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"        height: 15px;\n"
"        background: transparent;\n"
"        image: url(:/White/topArrow);\n"
"        subcontrol-position: top;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"        height: 15px;\n"
"        background: transparent;\n"
"    "
                        "    image: url(:/White/bottomArrow);\n"
"        subcontrol-position: bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover {\n"
"        background: rgb(170, 200, 230);\n"
"}\n"
"QScrollBar::add-line:vertical:hover {\n"
"        background: rgb(170, 200, 230);\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"        background: transparent;\n"
"}\n"
" \n"
"QScrollBar#verticalScrollBar:vertical {\n"
"        margin-top: 30px;\n"
"}\n"
" \n"
"/**********\344\270\213\346\213\211\345\210\227\350\241\250**********/\n"
"QComboBox {\n"
"        height: 25px;\n"
"        border-radius: 4px;\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        background: white;\n"
"}\n"
"QComboBox:enabled {\n"
"        color: rgb(84, 84, 84);\n"
"}\n"
"QComboBox:!enabled {\n"
"        color: rgb(80, 80, 80);\n"
"}\n"
"QComboBox:enabled:hover, QComboBox:enabled:focus {\n"
"        color: rgb(51, 51, 51);\n"
"}\n"
"QComboBox::drop-down {\n"
"        width: 20px;\n"
"        border: none;\n"
"       "
                        " background: transparent;\n"
"}\n"
"QComboBox::drop-down:hover {\n"
"        background: rgba(255, 255, 255, 30);\n"
"}\n"
"QComboBox::down-arrow {\n"
"        image: url(:/White/arrowBottom);\n"
"}\n"
"QComboBox::down-arrow:on {\n"
"        /**top: 1px;**/\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        background: white;\n"
"        outline: none;\n"
"}\n"
"QComboBox QAbstractItemView::item {\n"
"        height: 25px;\n"
"        color: rgb(73, 73, 73);\n"
"}\n"
"QComboBox QAbstractItemView::item:selected {\n"
"        background: rgb(232, 241, 250);\n"
"        color: rgb(2, 65, 132);\n"
"}\n"
" \n"
"/**********\350\277\233\345\272\246\346\235\241**********/\n"
"QProgressBar{\n"
"        border: none;\n"
"        text-align: center;\n"
"        color: white;\n"
"        background: rgb(173, 202, 232);\n"
"}\n"
"QProgressBar::chunk {\n"
"        background: rgb(16, 135, 209);\n"
"}\n"
" \n"
"QProgressBar#progressBar {\n"
"        border: none;\n"
"       "
                        " text-align: center;\n"
"        color: white;\n"
"        background-color: transparent;\n"
"        background-image: url(\":/White/progressBar\");\n"
"        background-repeat: repeat-x;\n"
"}\n"
"QProgressBar#progressBar::chunk {\n"
"        border: none;\n"
"        background-color: transparent;\n"
"        background-image: url(\":/White/progressBarChunk\");\n"
"        background-repeat: repeat-x;\n"
"}\n"
" \n"
"/**********\345\244\215\351\200\211\346\241\206**********/\n"
"QCheckBox{\n"
"        spacing: 5px;\n"
"}\n"
"QCheckBox:enabled:checked{\n"
"        color: rgb(2, 65, 132);\n"
"}\n"
"QCheckBox:enabled:!checked{\n"
"        color: rgb(70, 71, 73);\n"
"}\n"
"QCheckBox:enabled:hover{\n"
"        color: rgb(0, 78, 161);\n"
"}\n"
"QCheckBox:!enabled{\n"
"        color: rgb(80, 80, 80);\n"
"}\n"
"QCheckBox::indicator {\n"
"        width: 20px;\n"
"        height: 20px;\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"        image: url(:/White/checkBox);\n"
"}\n"
"QCheckBox::indicator:unchecked:hover"
                        " {\n"
"        image: url(:/White/checkBoxHover);\n"
"}\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"        image: url(:/White/checkBoxPressed);\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"        image: url(:/White/checkBoxChecked);\n"
"}\n"
"QCheckBox::indicator:checked:hover {\n"
"        image: url(:/White/checkBoxCheckedHover);\n"
"}\n"
"QCheckBox::indicator:checked:pressed {\n"
"        image: url(:/White/checkBoxCheckedPressed);\n"
"}\n"
"QCheckBox::indicator:indeterminate {\n"
"        image: url(:/White/checkBoxIndeterminate);\n"
"}\n"
"QCheckBox::indicator:indeterminate:hover {\n"
"        image: url(:/White/checkBoxIndeterminateHover);\n"
"}\n"
"QCheckBox::indicator:indeterminate:pressed {\n"
"        image: url(:/White/checkBoxIndeterminatePressed);\n"
"}\n"
" \n"
"/**********\345\215\225\351\200\211\346\241\206**********/\n"
"QRadioButton{\n"
"        spacing: 5px;\n"
"}\n"
"QRadioButton:enabled:checked{\n"
"        color: rgb(2, 65, 132);\n"
"}\n"
"QRadioButton:enabled:!checked{\n"
"       "
                        " color: rgb(70, 71, 73);\n"
"}\n"
"QRadioButton:enabled:hover{\n"
"        color: rgb(0, 78, 161);\n"
"}\n"
"QRadioButton:!enabled{\n"
"        color: rgb(80, 80, 80);\n"
"}\n"
"QRadioButton::indicator {\n"
"        width: 20px;\n"
"        height: 20px;\n"
"}\n"
"QRadioButton::indicator:unchecked {\n"
"        image: url(:/White/radioButton);\n"
"}\n"
"QRadioButton::indicator:unchecked:hover {\n"
"        image: url(:/White/radioButtonHover);\n"
"}\n"
"QRadioButton::indicator:unchecked:pressed {\n"
"        image: url(:/White/radioButtonPressed);\n"
"}\n"
"QRadioButton::indicator:checked {\n"
"        image: url(:/White/radioButtonChecked);\n"
"}\n"
"QRadioButton::indicator:checked:hover {\n"
"        image: url(:/White/radioButtonCheckedHover);\n"
"}\n"
"QRadioButton::indicator:checked:pressed {\n"
"        image: url(:/White/radioButtonCheckedPressed);\n"
"}\n"
" \n"
"/**********\350\276\223\345\205\245\346\241\206**********/\n"
"QLineEdit {\n"
"        border-radius: 4px;\n"
"        height: 25px;\n"
"    "
                        "    border: 1px solid rgb(111, 156, 207);\n"
"        background: white;\n"
"}\n"
"QLineEdit:enabled {\n"
"        color: rgb(84, 84, 84);\n"
"}\n"
"QLineEdit:enabled:hover, QLineEdit:enabled:focus {\n"
"        color: rgb(51, 51, 51);\n"
"}\n"
"QLineEdit:!enabled {\n"
"        color: rgb(80, 80, 80);\n"
"}\n"
" \n"
"/**********\346\226\207\346\234\254\347\274\226\350\276\221\346\241\206**********/\n"
"QTextEdit {\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        color: rgb(70, 71, 73);\n"
"        background: rgb(187, 212, 238);\n"
"}\n"
" \n"
"/**********\346\273\232\345\212\250\345\214\272\345\237\237**********/\n"
"QScrollArea {\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        background: rgb(187, 212, 238);\n"
"}\n"
" \n"
"/**********\346\273\232\345\212\250\345\214\272\345\237\237**********/\n"
"QWidget#transparentWidget {\n"
"        background: transparent;\n"
"}\n"
" \n"
"/**********\345\276\256\350\260\203\345\231\250**********/\n"
"QSpinBox {\n"
"        border-radius: 4px;\n"
""
                        "        height: 24px;\n"
"        min-width: 40px;\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        background: white;\n"
"}\n"
"QSpinBox:enabled {\n"
"        color: rgb(60, 60, 60);\n"
"}\n"
"QSpinBox:enabled:hover, QSpinBox:enabled:focus {\n"
"        color: rgb(51, 51, 51);\n"
"}\n"
"QSpinBox:!enabled {\n"
"        color: rgb(210, 210, 210);\n"
"        background: transparent;\n"
"}\n"
"QSpinBox::up-button {\n"
"        border-left: 1px solid rgb(111, 156, 207);\n"
"        width: 18px;\n"
"        height: 12px;\n"
"        border-top-right-radius: 4px;\n"
"        image: url(:/White/upButton);\n"
"}\n"
"QSpinBox::up-button:!enabled {\n"
"        background: transparent;\n"
"}\n"
"QSpinBox::up-button:enabled:hover {\n"
"        background: rgb(255, 255, 255, 30);\n"
"}\n"
"QSpinBox::down-button {\n"
"        border-left: 1px solid rgb(111, 156, 207);\n"
"        width: 18px;\n"
"        height: 12px;\n"
"        border-bottom-right-radius: 4px;\n"
"        image: url(:/White/downButton);\n"
""
                        "}\n"
"QSpinBox::down-button:!enabled {\n"
"        background: transparent;\n"
"}\n"
"QSpinBox::down-button:hover {\n"
"        background: rgb(255, 255, 255, 30);\n"
"}\n"
" \n"
"/**********\346\240\207\347\255\276**********/\n"
"QLabel#grayLabel {\n"
"        color: rgb(70, 71, 73);\n"
"}\n"
" \n"
"QLabel#highlightLabel {\n"
"        color: rgb(2, 65, 132);\n"
"}\n"
" \n"
"QLabel#redLabel {\n"
"        color: red;\n"
"}\n"
" \n"
"QLabel#grayYaHeiLabel {\n"
"        color: rgb(175, 175, 175);\n"
"        font-size: 16px;\n"
"}\n"
" \n"
"QLabel#blueLabel {\n"
"        color: rgb(0, 160, 230);\n"
"}\n"
" \n"
"QLabel#listLabel {\n"
"        color: rgb(51, 51, 51);\n"
"}\n"
" \n"
"QLabel#lineBlueLabel {\n"
"        background: rgb(0, 78, 161);\n"
"}\n"
" \n"
"QLabel#graySeperateLabel {\n"
"        background: rgb(200, 220, 230);\n"
"}\n"
" \n"
"QLabel#seperateLabel {\n"
"        background: rgb(112, 153, 194);\n"
"}\n"
" \n"
"QLabel#radiusBlueLabel {\n"
"        border-radius: 15px;\n"
"        color: white;\n"
""
                        "        font-size: 16px;\n"
"        background: rgb(0, 78, 161);\n"
"}\n"
" \n"
"QLabel#skinLabel[colorProperty=\"normal\"] {\n"
"        color: rgb(56, 99, 154);\n"
"}\n"
"QLabel#skinLabel[colorProperty=\"highlight\"] {\n"
"        color: rgb(0, 160, 230);\n"
"}\n"
" \n"
"QLabel#informationLabel {\n"
"        qproperty-pixmap: url(:/White/information);\n"
"}\n"
" \n"
"QLabel#errorLabel {\n"
"        qproperty-pixmap: url(:/White/error);\n"
"}\n"
" \n"
"QLabel#successLabel {\n"
"        qproperty-pixmap: url(:/White/success);\n"
"}\n"
" \n"
"QLabel#questionLabel {\n"
"        qproperty-pixmap: url(:/White/question);\n"
"}\n"
" \n"
"QLabel#warningLabel {\n"
"        qproperty-pixmap: url(:/White/warning);\n"
"}\n"
" \n"
"QLabel#groupLabel {\n"
"        color: rgb(56, 99, 154);\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        font-size: 15px;\n"
"        border-top-color: transparent;\n"
"        border-right-color: transparent;\n"
"        border-left-color: transparent;\n"
"}\n"
" \n"
"/*********"
                        "*\346\214\211\351\222\256**********/\n"
"QToolButton#nsccButton {\n"
"        border: none;\n"
"        color: rgb(2, 65, 132);\n"
"        background: transparent;\n"
"        padding: 10px;\n"
"        qproperty-icon: url(:/White/nscc);\n"
"        qproperty-iconSize: 32px 32px;\n"
"        qproperty-toolButtonStyle: ToolButtonTextUnderIcon;\n"
"}\n"
"QToolButton#nsccButton:hover {\n"
"        background: rgb(187, 212, 238);\n"
"}\n"
" \n"
"QToolButton#transferButton {\n"
"        border: none;\n"
"        color: rgb(2, 65, 132);\n"
"        background: transparent;\n"
"        padding: 10px;\n"
"        qproperty-icon: url(:/White/transfer);\n"
"        qproperty-iconSize: 32px 32px;\n"
"        qproperty-toolButtonStyle: ToolButtonTextUnderIcon;\n"
"}\n"
"QToolButton#transferButton:hover {\n"
"        background: rgb(187, 212, 238);\n"
"}\n"
" \n"
"/**********\346\214\211\351\222\256**********/\n"
"QPushButton{\n"
"        border-radius: 4px;\n"
"        border: none;\n"
"        width: 75px;\n"
"        h"
                        "eight: 25px;\n"
"}\n"
"/*QPushButton:enabled {\n"
"        background: rgb(120, 170, 220);\n"
"        color: white;\n"
"}*/\n"
"QPushButton:!enabled {\n"
"        background: rgb(180, 180, 180);\n"
"        color: white;\n"
"}\n"
"QPushButton:enabled:hover{\n"
"        background: rgb(100, 160, 220);\n"
"}\n"
"QPushButton:enabled:pressed{\n"
"        background: rgb(0, 78, 161);\n"
"}\n"
" \n"
"QPushButton#blueButton {\n"
"        color: white;\n"
"}\n"
"QPushButton#blueButton:enabled {\n"
"        background: rgb(0, 78, 161);\n"
"        color: white;\n"
"}\n"
"QPushButton:!enabled {\n"
"        background: rgb(180, 180, 180);\n"
"        color: white;\n"
"}\n"
"QPushButton#blueButton:enabled:hover {\n"
"        background: rgb(2, 65, 132);\n"
"}\n"
"QPushButton#blueButton:enabled:pressed {\n"
"        background: rgb(6, 94, 187);\n"
"}\n"
" \n"
"QPushButton#selectButton {\n"
"        border: none;\n"
"        border-radius: none;\n"
"        border-left: 1px solid rgb(111, 156, 207);\n"
"        background:"
                        " transparent;\n"
"        image: url(:/White/scan);\n"
"        color: rgb(51, 51, 51);\n"
"}\n"
"QPushButton#selectButton:enabled:hover{\n"
"        background: rgb(187, 212, 238);\n"
"}\n"
"QPushButton#selectButton:enabled:pressed{\n"
"        background: rgb(120, 170, 220);\n"
"}\n"
" \n"
"QPushButton#linkButton {\n"
"        background: transparent;\n"
"        color: rgb(0, 160, 230);\n"
"        text-align:left;\n"
"}\n"
"QPushButton#linkButton:hover {\n"
"        color: rgb(20, 185, 255);\n"
"        text-decoration: underline;\n"
"}\n"
"QPushButton#linkButton:pressed {\n"
"        color: rgb(0, 160, 230);\n"
"}\n"
" \n"
"QPushButton#transparentButton {\n"
"        background: transparent;\n"
"}\n"
" \n"
"/*****************\346\240\207\351\242\230\346\240\217\346\214\211\351\222\256*******************/\n"
"QPushButton#minimizeButton {\n"
"        border-radius: none;\n"
"        border-bottom-left-radius: 4px;\n"
"        border-bottom-right-radius: 4px;\n"
"        background: rgb(120, 170, 220);\n"
" "
                        "       image: url(:/White/minimizeHover);\n"
"}\n"
"QPushButton#minimizeButton:hover {\n"
"        image: url(:/White/minimize);\n"
"}\n"
"QPushButton#minimizeButton:pressed {\n"
"        image: url(:/White/minimizePressed);\n"
"}\n"
" \n"
"QPushButton#maximizeButton[maximizeProperty=\"maximize\"] {\n"
"        border-radius: none;\n"
"        border-bottom-left-radius: 4px;\n"
"        border-bottom-right-radius: 4px;\n"
"        background: rgb(120, 170, 220);\n"
"        image: url(:/White/maximizeHover);\n"
"}\n"
"QPushButton#maximizeButton[maximizeProperty=\"maximize\"]:hover {\n"
"        image: url(:/White/maximize);\n"
"}\n"
"QPushButton#maximizeButton[maximizeProperty=\"maximize\"]:pressed {\n"
"        image: url(:/White/maximizePressed);\n"
"}\n"
" \n"
"QPushButton#maximizeButton[maximizeProperty=\"restore\"] {\n"
"        border-radius: none;\n"
"        border-bottom-left-radius: 4px;\n"
"        border-bottom-right-radius: 4px;\n"
"        background: rgb(120, 170, 220);\n"
"        image: url(:/"
                        "White/restoreHover);\n"
"}\n"
"QPushButton#maximizeButton[maximizeProperty=\"restore\"]:hover {\n"
"        image: url(:/White/restore);\n"
"}\n"
"QPushButton#maximizeButton[maximizeProperty=\"restore\"]:pressed {\n"
"        image: url(:/White/restorePressed);\n"
"}\n"
" \n"
"QPushButton#closeButton {\n"
"        border-radius: none;\n"
"        border-bottom-left-radius: 4px;\n"
"        border-bottom-right-radius: 4px;\n"
"        background: rgb(120, 170, 220);\n"
"        image: url(:/White/closeHover);\n"
"}\n"
"QPushButton#closeButton:hover {\n"
"        image: url(:/White/close);\n"
"}\n"
"QPushButton#closeButton:pressed {\n"
"        image: url(:/White/closePressed);\n"
"}\n"
" \n"
"QPushButton#skinButton {\n"
"        border-radius: none;\n"
"        border-bottom-left-radius: 4px;\n"
"        border-bottom-right-radius: 4px;\n"
"        background: rgb(120, 170, 220);\n"
"        image: url(:/White/skinHover);\n"
"}\n"
"QPushButton#skinButton:hover {\n"
"        image: url(:/White/skin);\n"
"}\n"
"Q"
                        "PushButton#skinButton:pressed {\n"
"        image: url(:/White/skinPressed);\n"
"}\n"
" \n"
"QPushButton#feedbackButton {\n"
"        border-radius: none;\n"
"        border-bottom-left-radius: 4px;\n"
"        border-bottom-right-radius: 4px;\n"
"        background: rgb(120, 170, 220);\n"
"        image: url(:/White/feedbackHover);\n"
"}\n"
"QPushButton#feedbackButton:hover {\n"
"        image: url(:/White/feedback);\n"
"}\n"
"QPushButton#feedbackButton:pressed {\n"
"        image: url(:/White/feedbackPressed);\n"
"}\n"
" \n"
"QPushButton#closeTipButton {\n"
"        border-radius: none;\n"
"        border-image: url(:/White/close);\n"
"        background: transparent;\n"
"}\n"
"QPushButton#closeTipButton:hover {\n"
"        border-image: url(:/White/closeHover);\n"
"}\n"
"QPushButton#closeTipButton:pressed {\n"
"        border-image: url(:/White/closePressed);\n"
"}\n"
" \n"
"QPushButton#changeSkinButton{\n"
"        border-radius: 4px;\n"
"        border: 2px solid rgb(111, 156, 207);\n"
"        background"
                        ": rgb(204, 227, 252);\n"
"}\n"
"QPushButton#changeSkinButton:hover{\n"
"        border-color: rgb(60, 150, 200);\n"
"}\n"
"QPushButton#changeSkinButton:pressed, QPushButton#changeSkinButton:checked{\n"
"        border-color: rgb(0, 160, 230);\n"
"}\n"
" \n"
"QPushButton#transferButton {\n"
"        padding-left: 5px;\n"
"        padding-right: 5px;\n"
"        color: white;\n"
"        background: rgb(0, 78, 161);\n"
"}\n"
"QPushButton#transferButton:hover {\n"
"        background: rgb(2, 65, 132);\n"
"}\n"
"QPushButton#transferButton:pressed {\n"
"        background: rgb(6, 94, 187);\n"
"}\n"
"QPushButton#transferButton[iconProperty=\"left\"] {\n"
"        qproperty-icon: url(:/White/left);\n"
"}\n"
"QPushButton#transferButton[iconProperty=\"right\"] {\n"
"        qproperty-icon: url(:/White/right);\n"
"}\n"
" \n"
"QPushButton#openButton {\n"
"        border-radius: none;\n"
"        image: url(:/White/open);\n"
"        background: transparent;\n"
"}\n"
"QPushButton#openButton:hover {\n"
"        image: url("
                        ":/White/openHover);\n"
"}\n"
"QPushButton#openButton:pressed {\n"
"        image: url(:/White/openPressed);\n"
"}\n"
" \n"
"QPushButton#deleteButton {\n"
"        border-radius: none;\n"
"        image: url(:/White/delete);\n"
"        background: transparent;\n"
"}\n"
"QPushButton#deleteButton:hover {\n"
"        image: url(:/White/deleteHover);\n"
"}\n"
"QPushButton#deleteButton:pressed {\n"
"        image: url(:/White/deletePressed);\n"
"}\n"
" \n"
"QPushButton#menuButton {\n"
"        text-align: left center;\n"
"        padding-left: 3px;\n"
"        color: rgb(84, 84, 84);\n"
"        border: 1px solid rgb(111, 156, 207);\n"
"        background: white;\n"
"}\n"
"QPushButton#menuButton::menu-indicator{\n"
"        subcontrol-position: right center;\n"
"        subcontrol-origin: padding;\n"
"        image: url(:/White/arrowBottom);\n"
"        padding-right: 3px;\n"
"}"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 40, 801, 101));
        label_4->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0.45, y1:0, x2:1, y2:0, stop:0 rgba(41, 86,129, 255), stop:1 rgba(81, 126, 169, 125));\n"
"border: ridge;\n"
"border-width:3px;\n"
"border-color:rgb(94,93,91);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 80, 80));
        label->setPixmap(QPixmap(QString::fromUtf8(":/logo.png")));
        label->setScaledContents(true);
        columnView = new QColumnView(centralwidget);
        columnView->setObjectName(QString::fromUtf8("columnView"));
        columnView->setGeometry(QRect(0, 130, 801, 451));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        columnView->setFont(font);
        columnView->setStyleSheet(QString::fromUtf8("border: ridge;\n"
"border-width:4px;\n"
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
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(370, 40, 431, 101));
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/header.png")));
        label_5->setScaledContents(true);
        Title = new QLabel(centralwidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(0, 0, 801, 41));
        Title->setContextMenuPolicy(Qt::CustomContextMenu);
        Title->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 77, 255), stop:0.5 rgba(0, 85, 255, 255), stop:1 rgba(235, 235, 235, 255));\n"
"border: ridge;\n"
"border-width:3px;\n"
"border-color:rgb(156,155,151);"));
        mini = new QPushButton(centralwidget);
        mini->setObjectName(QString::fromUtf8("mini"));
        mini->setGeometry(QRect(680, 5, 34, 30));
        mini->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        icon.addFile(QString::fromUtf8(":/C:/Users/Longhorn/Desktop/QUI-Creator-master/other/qss/psblack/branch_close.png"), QSize(), QIcon::Normal, QIcon::Off);
        mini->setIcon(icon);
        mini->setIconSize(QSize(42, 42));
        mini->setCheckable(false);
        mini->setAutoRepeat(false);
        maxi = new QPushButton(centralwidget);
        maxi->setObjectName(QString::fromUtf8("maxi"));
        maxi->setGeometry(QRect(717, 5, 34, 30));
        maxi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/C:/Users/Longhorn/Desktop/QUI-Creator-master/other/qss/psblack/checkbox_unchecked_disable.png"), QSize(), QIcon::Normal, QIcon::Off);
        maxi->setIcon(icon1);
        maxi->setIconSize(QSize(14, 14));
        close = new QPushButton(centralwidget);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(760, 5, 34, 30));
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/C:/Users/Longhorn/Desktop/QUI-Creator-master/other/qss/psblack/branch_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon2);
        close->setIconSize(QSize(42, 42));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 5, 381, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(8, 7, 27, 27));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/C:/Users/Longhorn/Pictures/Camera Roll/10041.png")));
        label_9->setScaledContents(true);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(790, 0, 20, 581));
        line->setStyleSheet(QString::fromUtf8("color:rgb(94,93,91);"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(8);
        line->setMidLineWidth(0);
        line->setFrameShape(QFrame::VLine);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(95, 50, 281, 45));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setWeight(75);
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255,255)\n"
""));
        label_7->setScaledContents(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(95, 97, 271, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255,255)"));
        label_8->setScaledContents(true);
        label_8->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 150, 251, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(14);
        label_2->setFont(font4);
        originsrt = new QTextBrowser(centralwidget);
        originsrt->setObjectName(QString::fromUtf8("originsrt"));
        originsrt->setGeometry(QRect(270, 150, 391, 40));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(11);
        originsrt->setFont(font5);
        originsrt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        originsrt->setLineWrapMode(QTextEdit::WidgetWidth);
        OpenFile = new QPushButton(centralwidget);
        OpenFile->setObjectName(QString::fromUtf8("OpenFile"));
        OpenFile->setGeometry(QRect(680, 150, 101, 41));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font6.setPointSize(13);
        font6.setBold(true);
        font6.setWeight(75);
        OpenFile->setFont(font6);
        OpenFile->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"        border: solid;\n"
"		border-width:2px;\n"
"		border-color:rgb(84,127,201);\n"
"}\n"
"\n"
"QPushButton:enabled:hover\n"
"{\n"
"        background: rgb(104, 167, 218);\n"
"        color: white;\n"
"}\n"
"\n"
"QPushButton:enabled \n"
"{\n"
"        background: rgb(144, 197, 248);\n"
"        color: white;\n"
"}\n"
"\n"
"QPushButton:enabled:pressed{\n"
"        background: rgb(124, 147, 255);\n"
"		border-color:rgb(104,147,231);\n"
"}"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 190, 761, 61));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        groupBox->setFont(font7);
        fileerr = new QLabel(groupBox);
        fileerr->setObjectName(QString::fromUtf8("fileerr"));
        fileerr->setGeometry(QRect(30, 23, 27, 27));
        fileerr->setStyleSheet(QString::fromUtf8("border:solid;\n"
"border-width:2px;\n"
"border-color:rgb(44,43,41);\n"
"border-radius:13px;\n"
"background:rgb(255, 0, 0,0)"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(70, 20, 91, 31));
        label_14->setFont(font1);
        correctsrt = new QPushButton(groupBox);
        correctsrt->setObjectName(QString::fromUtf8("correctsrt"));
        correctsrt->setGeometry(QRect(570, 15, 76, 41));
        correctsrt->setFont(font6);
        correctsrt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"        border: solid;\n"
"		border-width:2px;\n"
"		border-color:rgb(84,127,201);\n"
"}\n"
"\n"
"QPushButton:enabled:hover\n"
"{\n"
"        background: rgb(104, 167, 218);\n"
"        color: white;\n"
"}\n"
"\n"
"QPushButton:enabled \n"
"{\n"
"        background: rgb(144, 197, 248);\n"
"        color: white;\n"
"}\n"
"\n"
"QPushButton:enabled:pressed{\n"
"        background: rgb(124, 147, 255);\n"
"		border-color:rgb(104,147,231);\n"
"}"));
        passlight = new QLabel(groupBox);
        passlight->setObjectName(QString::fromUtf8("passlight"));
        passlight->setGeometry(QRect(400, 23, 26, 26));
        passlight->setStyleSheet(QString::fromUtf8("border:solid;\n"
"border-width:2px;\n"
"border-color:rgb(44,43,41);\n"
"border-radius:13px;\n"
"background:rgb(9, 247,104,0)"));
        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(440, 20, 81, 31));
        label_23->setFont(font1);
        label_24 = new QLabel(groupBox);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(250, 20, 121, 31));
        label_24->setFont(font1);
        ignore = new QPushButton(groupBox);
        ignore->setObjectName(QString::fromUtf8("ignore"));
        ignore->setGeometry(QRect(660, 15, 76, 41));
        ignore->setFont(font6);
        ignore->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"        border: solid;\n"
"		border-width:2px;\n"
"		border-color:rgb(84,127,201);\n"
"}\n"
"\n"
"QPushButton:enabled:hover\n"
"{\n"
"        background: rgb(104, 167, 218);\n"
"        color: white;\n"
"}\n"
"\n"
"QPushButton:enabled \n"
"{\n"
"        background: rgb(144, 197, 248);\n"
"        color: white;\n"
"}\n"
"\n"
"QPushButton:enabled:pressed{\n"
"        background: rgb(124, 147, 255);\n"
"		border-color:rgb(104,147,231);\n"
"}"));
        formaterr = new QLabel(groupBox);
        formaterr->setObjectName(QString::fromUtf8("formaterr"));
        formaterr->setGeometry(QRect(210, 23, 27, 27));
        formaterr->setStyleSheet(QString::fromUtf8("border:solid;\n"
"border-width:2px;\n"
"border-color:rgb(44,43,41);\n"
"border-radius:13px;\n"
"background:rgb(255, 0, 0,0)"));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 270, 271, 20));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(3);
        line_2->setMidLineWidth(2);
        line_2->setFrameShape(QFrame::HLine);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(305, 260, 211, 41));
        label_11->setFont(font3);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(520, 270, 261, 20));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(3);
        line_3->setMidLineWidth(2);
        line_3->setFrameShape(QFrame::HLine);
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(20, 440, 161, 31));
        label_16->setFont(font4);
        cnass = new QTextEdit(centralwidget);
        cnass->setObjectName(QString::fromUtf8("cnass"));
        cnass->setGeometry(QRect(180, 440, 601, 36));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cnass->sizePolicy().hasHeightForWidth());
        cnass->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(70, 71, 73, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(187, 212, 238, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(70, 71, 73, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(70, 71, 73, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(70, 71, 73, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        cnass->setPalette(palette);
        QFont font8;
        font8.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font8.setPointSize(10);
        cnass->setFont(font8);
        cnass->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        cnass->setContextMenuPolicy(Qt::NoContextMenu);
        cnass->setAcceptDrops(false);
        cnass->setLayoutDirection(Qt::LeftToRight);
        cnass->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        cnass->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        cnass->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        cnass->setLineWrapMode(QTextEdit::WidgetWidth);
        cnass->setReadOnly(false);
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(20, 490, 161, 31));
        label_21->setFont(font4);
        enass = new QTextBrowser(centralwidget);
        enass->setObjectName(QString::fromUtf8("enass"));
        enass->setGeometry(QRect(180, 490, 601, 36));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush5(QColor(70, 71, 73, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush6(QColor(70, 71, 73, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush7(QColor(70, 71, 73, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        enass->setPalette(palette1);
        QFont font9;
        font9.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font9.setPointSize(9);
        enass->setFont(font9);
        enass->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(90, 540, 601, 31));
        QFont font10;
        font10.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font10.setPointSize(12);
        font10.setBold(true);
        font10.setWeight(75);
        label_22->setFont(font10);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 310, 251, 31));
        label_15->setFont(font4);
        transfile = new QTextBrowser(centralwidget);
        transfile->setObjectName(QString::fromUtf8("transfile"));
        transfile->setGeometry(QRect(270, 310, 391, 40));
        transfile->setFont(font9);
        transfile->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        importcn = new QPushButton(centralwidget);
        importcn->setObjectName(QString::fromUtf8("importcn"));
        importcn->setGeometry(QRect(680, 310, 101, 41));
        importcn->setFont(font6);
        importcn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"        border: solid;\n"
"		border-width:2px;\n"
"		border-color:rgb(84,127,201);\n"
"}\n"
"\n"
"QPushButton:enabled:hover\n"
"{\n"
"        background: rgb(104, 167, 218);\n"
"        color: white;\n"
"}\n"
"\n"
"QPushButton:enabled \n"
"{\n"
"        background: rgb(144, 197, 248);\n"
"        color: white;\n"
"}\n"
"\n"
"QPushButton:enabled:pressed{\n"
"        background: rgb(124, 147, 255);\n"
"		border-color:rgb(104,147,231);\n"
"}"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 360, 761, 61));
        groupBox_2->setFont(font7);
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 20, 101, 31));
        label_17->setFont(font1);
        cnlinesled = new QLCDNumber(groupBox_2);
        cnlinesled->setObjectName(QString::fromUtf8("cnlinesled"));
        cnlinesled->setGeometry(QRect(125, 15, 71, 41));
        QPalette palette2;
        QBrush brush8(QColor(0, 170, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        QBrush brush9(QColor(179, 216, 247, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush10(QColor(127, 213, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush10);
        QBrush brush11(QColor(63, 191, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(0, 85, 127, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(0, 113, 170, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush13);
        QBrush brush14(QColor(0, 0, 0, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush14);
        QBrush brush15(QColor(255, 255, 255, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush15);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush14);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush14);
        QBrush brush16(QColor(127, 212, 255, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush16);
        QBrush brush17(QColor(255, 255, 220, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush17);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush14);
        QBrush brush18(QColor(0, 0, 0, 128));
        brush18.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush18);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush18);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush18);
#endif
        cnlinesled->setPalette(palette2);
        cnlinesled->setFrameShape(QFrame::Panel);
        cnlinesled->setFrameShadow(QFrame::Plain);
        cnlinesled->setLineWidth(1);
        cnlinesled->setSmallDecimalPoint(false);
        cnlinesled->setDigitCount(3);
        cnlinesled->setMode(QLCDNumber::Dec);
        cnlinesled->setSegmentStyle(QLCDNumber::Filled);
        cnlinesled->setProperty("intValue", QVariant(0));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(210, 20, 111, 31));
        label_18->setFont(font1);
        enlinesled = new QLCDNumber(groupBox_2);
        enlinesled->setObjectName(QString::fromUtf8("enlinesled"));
        enlinesled->setGeometry(QRect(330, 15, 71, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush14);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush15);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush14);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush14);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush16);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush17);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush18);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush16);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush17);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush18);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush17);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush18);
#endif
        enlinesled->setPalette(palette3);
        enlinesled->setFrameShape(QFrame::Panel);
        enlinesled->setFrameShadow(QFrame::Plain);
        enlinesled->setLineWidth(1);
        enlinesled->setSmallDecimalPoint(false);
        enlinesled->setDigitCount(3);
        enlinesled->setMode(QLCDNumber::Dec);
        enlinesled->setSegmentStyle(QLCDNumber::Filled);
        enlinesled->setProperty("intValue", QVariant(0));
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(460, 15, 81, 41));
        label_19->setFont(font1);
        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(590, 20, 61, 31));
        label_20->setFont(font1);
        beginmerge = new QPushButton(groupBox_2);
        beginmerge->setObjectName(QString::fromUtf8("beginmerge"));
        beginmerge->setGeometry(QRect(660, 16, 76, 41));
        beginmerge->setFont(font6);
        beginmerge->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"        border: solid;\n"
"		border-width:2px;\n"
"		border-color:rgb(84,127,201);\n"
"}\n"
"\n"
"QPushButton:enabled:hover\n"
"{\n"
"        background: rgb(104, 167, 218);\n"
"        color: white;\n"
"}\n"
"\n"
"QPushButton:enabled \n"
"{\n"
"        background: rgb(144, 197, 248);\n"
"        color: white;\n"
"}\n"
"\n"
"QPushButton:enabled:pressed{\n"
"        background: rgb(124, 147, 255);\n"
"		border-color:rgb(104,147,231);\n"
"}"));
        notsame = new QLabel(groupBox_2);
        notsame->setObjectName(QString::fromUtf8("notsame"));
        notsame->setGeometry(QRect(420, 23, 27, 27));
        notsame->setStyleSheet(QString::fromUtf8("border:solid;\n"
"border-width:2px;\n"
"border-color:rgb(44,43,41);\n"
"border-radius:13px;\n"
"background:rgb(255, 0, 0,0)"));
        same = new QLabel(groupBox_2);
        same->setObjectName(QString::fromUtf8("same"));
        same->setGeometry(QRect(550, 23, 26, 26));
        same->setStyleSheet(QString::fromUtf8("border:solid;\n"
"border-width:2px;\n"
"border-color:rgb(44,43,41);\n"
"border-radius:13px;\n"
"background:rgb(9, 247,104,0)"));
        MainWindow->setCentralWidget(centralwidget);
        columnView->raise();
        label_5->raise();
        label_4->raise();
        label->raise();
        Title->raise();
        mini->raise();
        maxi->raise();
        close->raise();
        label_3->raise();
        label_9->raise();
        line->raise();
        label_7->raise();
        label_8->raise();
        label_2->raise();
        originsrt->raise();
        OpenFile->raise();
        groupBox->raise();
        line_2->raise();
        label_11->raise();
        line_3->raise();
        label_16->raise();
        cnass->raise();
        label_21->raise();
        enass->raise();
        label_22->raise();
        label_15->raise();
        transfile->raise();
        importcn->raise();
        groupBox_2->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207\347\273\264\345\237\272\345\255\227\345\271\225\347\273\204\342\200\224\342\200\224\345\255\227\345\271\225\345\244\204\347\220\206\345\267\245\345\205\267GUI\347\211\210", nullptr));
        label_4->setText(QString());
        label->setText(QString());
        label_5->setText(QString());
#if QT_CONFIG(tooltip)
        Title->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        Title->setText(QString());
        maxi->setText(QString());
        close->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207\347\273\264\345\237\272\345\255\227\345\271\225\347\273\204-\345\255\227\345\271\225\345\244\204\347\220\206\350\275\257\344\273\266--847", nullptr));
        label_9->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207\347\273\264\345\237\272\345\255\227\345\271\225\347\273\204", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\255\227\345\271\225\345\244\204\347\220\206\350\275\257\344\273\266GUI\347\211\210\346\234\254", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\344\270\200\344\270\252\345\216\237\345\247\213\345\255\227\345\271\225\346\226\207\344\273\266\357\274\232", nullptr));
        originsrt->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        OpenFile->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\347\273\223\346\236\234", nullptr));
        fileerr->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\351\224\231\350\257\257", nullptr));
        correctsrt->setText(QCoreApplication::translate("MainWindow", "\347\272\240\351\224\231", nullptr));
        passlight->setText(QString());
        label_23->setText(QCoreApplication::translate("MainWindow", "\346\262\241\351\227\256\351\242\230", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217\351\234\200\347\272\240\346\255\243", nullptr));
        ignore->setText(QCoreApplication::translate("MainWindow", "\345\277\275\347\225\245", nullptr));
        formaterr->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "SRT/ASS\345\210\206\347\225\214\347\272\277", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207\347\211\271\346\225\210\344\273\243\347\240\201\357\274\232", nullptr));
        cnass->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">{\\fn\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223\\fs85\\shad0\\bord4\\pos(960,1050)\\3c&amp;H000000&amp;}</p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\350\213\261\346\226\207\347\211\271\346\225\210\344\273\243\347\240\201\357\274\232", nullptr));
        enass->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">{\\fs60\\pos(960,1080)}</span></p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207\347\273\264\345\237\272\345\255\227\345\271\225\347\273\204\345\255\227\345\271\225\345\244\204\347\220\206\345\267\245\345\205\267 | \347\211\210\346\234\2541.1 | Billy Goodman\345\200\276\346\203\205\345\210\266\344\275\234", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\344\270\200\344\270\252\344\270\255\346\226\207\347\277\273\350\257\221\346\226\207\344\273\266\357\274\232", nullptr));
        transfile->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p></body></html>", nullptr));
        importcn->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\347\273\223\346\236\234", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207\347\277\273\350\257\221\357\274\232", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\350\213\261\346\226\207\345\217\260\350\257\215\357\274\232", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\344\270\215\344\270\200\350\207\264", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\344\270\200\350\207\264", nullptr));
        beginmerge->setText(QCoreApplication::translate("MainWindow", "\345\220\210\346\210\220", nullptr));
        notsame->setText(QString());
        same->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
