/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *addSymptButton;
    QPushButton *delSymptButton;
    QTextBrowser *infoToExpert;
    QLineEdit *symptAddLine;
    QLineEdit *symptDelLine;
    QListWidget *sympList;
    QPushButton *okButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(553, 332);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        addSymptButton = new QPushButton(centralWidget);
        addSymptButton->setObjectName(QStringLiteral("addSymptButton"));
        addSymptButton->setGeometry(QRect(210, 100, 141, 41));
        delSymptButton = new QPushButton(centralWidget);
        delSymptButton->setObjectName(QStringLiteral("delSymptButton"));
        delSymptButton->setGeometry(QRect(400, 100, 141, 41));
        infoToExpert = new QTextBrowser(centralWidget);
        infoToExpert->setObjectName(QStringLiteral("infoToExpert"));
        infoToExpert->setGeometry(QRect(210, 10, 331, 81));
        symptAddLine = new QLineEdit(centralWidget);
        symptAddLine->setObjectName(QStringLiteral("symptAddLine"));
        symptAddLine->setGeometry(QRect(210, 160, 141, 51));
        symptDelLine = new QLineEdit(centralWidget);
        symptDelLine->setObjectName(QStringLiteral("symptDelLine"));
        symptDelLine->setGeometry(QRect(400, 160, 141, 51));
        sympList = new QListWidget(centralWidget);
        sympList->setObjectName(QStringLiteral("sympList"));
        sympList->setGeometry(QRect(10, 10, 181, 201));
        okButton = new QPushButton(centralWidget);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(240, 230, 93, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 553, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        addSymptButton->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\270\320\274\320\277\321\202\320\276\320\274", Q_NULLPTR));
        delSymptButton->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\320\270\320\274\320\277\321\202\320\276\320\274", Q_NULLPTR));
        infoToExpert->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\243\320\262\320\260\320\266\320\260\320\265\320\274\321\213\320\271 \321\215\320\272\321\201\320\277\320\265\321\200\321\202, \320\277\321\200\320\276\320\262\320\265\321\200\321\214\321\202\320\265 \320\277\321\200\320\260\320\262\320\270\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\321\213\321\205 \320\222\320\260\320\274\320\270 \321\201\320\270\320\274\320\277\321\202\320\276\320\274\320\276\320\262. \320\222\321\213 \320\274\320\276\320\266\320\265\321\202\320\265 \320\264\320\276"
                        "\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\270\320\274\320\277\321\202\320\276\320\274\321\213 \320\270\320\273\320\270 \321\203\320\264\320\260\320\273\320\270\321\202\321\214, \320\275\320\260 \320\262\320\260\321\210 \320\262\320\267\320\263\320\273\321\217\320\264, \320\273\320\270\321\210\320\275\320\270\320\265</p></body></html>", Q_NULLPTR));
        okButton->setText(QApplication::translate("MainWindow", "\320\224\320\260\320\273\320\265\320\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
