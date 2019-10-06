/********************************************************************************
** Form generated from reading UI file 'symptCrit.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYMPTCRIT_H
#define UI_SYMPTCRIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SymptCrit
{
public:
    QLineEdit *symp1Line;
    QLineEdit *symp2Line;
    QLineEdit *symp3Line;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *weight1;
    QSpinBox *weight2;
    QSpinBox *weight3;
    QLabel *label_5;
    QLineEdit *criteriaLine;
    QTextEdit *infoToExpert;

    void setupUi(QDialog *SymptCrit)
    {
        if (SymptCrit->objectName().isEmpty())
            SymptCrit->setObjectName(QStringLiteral("SymptCrit"));
        SymptCrit->resize(423, 308);
        symp1Line = new QLineEdit(SymptCrit);
        symp1Line->setObjectName(QStringLiteral("symp1Line"));
        symp1Line->setGeometry(QRect(20, 150, 113, 20));
        symp2Line = new QLineEdit(SymptCrit);
        symp2Line->setObjectName(QStringLiteral("symp2Line"));
        symp2Line->setGeometry(QRect(150, 150, 113, 20));
        symp3Line = new QLineEdit(SymptCrit);
        symp3Line->setObjectName(QStringLiteral("symp3Line"));
        symp3Line->setGeometry(QRect(280, 150, 113, 20));
        pushButton = new QPushButton(SymptCrit);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 260, 121, 23));
        label_2 = new QLabel(SymptCrit);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 130, 61, 16));
        label_3 = new QLabel(SymptCrit);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 130, 61, 16));
        label_4 = new QLabel(SymptCrit);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 130, 61, 16));
        weight1 = new QSpinBox(SymptCrit);
        weight1->setObjectName(QStringLiteral("weight1"));
        weight1->setGeometry(QRect(50, 200, 42, 22));
        weight2 = new QSpinBox(SymptCrit);
        weight2->setObjectName(QStringLiteral("weight2"));
        weight2->setGeometry(QRect(180, 200, 42, 22));
        weight3 = new QSpinBox(SymptCrit);
        weight3->setObjectName(QStringLiteral("weight3"));
        weight3->setGeometry(QRect(310, 200, 42, 22));
        label_5 = new QLabel(SymptCrit);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 240, 111, 16));
        criteriaLine = new QLineEdit(SymptCrit);
        criteriaLine->setObjectName(QStringLiteral("criteriaLine"));
        criteriaLine->setGeometry(QRect(30, 270, 113, 20));
        infoToExpert = new QTextEdit(SymptCrit);
        infoToExpert->setObjectName(QStringLiteral("infoToExpert"));
        infoToExpert->setGeometry(QRect(10, 10, 391, 71));

        retranslateUi(SymptCrit);

        QMetaObject::connectSlotsByName(SymptCrit);
    } // setupUi

    void retranslateUi(QDialog *SymptCrit)
    {
        SymptCrit->setWindowTitle(QApplication::translate("SymptCrit", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SymptCrit", "\321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", Q_NULLPTR));
        label_2->setText(QApplication::translate("SymptCrit", "\321\201\320\270\320\274\320\277\321\202\320\276\320\274 1", Q_NULLPTR));
        label_3->setText(QApplication::translate("SymptCrit", "\321\201\320\270\320\274\320\277\321\202\320\276\320\274 2", Q_NULLPTR));
        label_4->setText(QApplication::translate("SymptCrit", "\321\201\320\270\320\274\320\277\321\202\320\276\320\274 3", Q_NULLPTR));
        label_5->setText(QApplication::translate("SymptCrit", "\320\272\321\200\320\270\321\202\320\265\321\200\320\270\320\271 (\320\260\320\275\320\260\320\274\320\275\320\265\320\267):", Q_NULLPTR));
        infoToExpert->setHtml(QApplication::translate("SymptCrit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0 - \320\275\320\265 \320\277\320\276\320\264\321\205\320\276\320\264\320\270\321\202, 1 - \321\201\320\273\320\260\320\261\320\276\320\265 \320\262\320\273\320\270\321\217\320\275\320\270\320\265, 2 - \321\201\320\270\320\273\321\214\320\275\320\276\320\265 \320\262\320\273\320\270\321\217\320\275\320\270\320\265</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SymptCrit: public Ui_SymptCrit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMPTCRIT_H
