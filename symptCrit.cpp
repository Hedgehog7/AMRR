#include "symptCrit.h"
#include "ui_symptCrit.h"

SymptCrit::SymptCrit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SymptCrit)
{
    ui->setupUi(this);
    symptList.clear();

    vectIndex = 0;
    count = 0;
    pDispInTable = new DispInTable;
    connect(this,
            SIGNAL(sendItogCritAndSympt(QVector<QHash<QString,QHash<QString,double> > >)),
            pDispInTable,
            SLOT(recieveItogCritAndSympt(QVector<QHash<QString,QHash<QString,double> > >)));
    connect(this,
            SIGNAL(sendSympt(QVector<QString>)),
            pDispInTable,
            SLOT(receiveSympt(QVector<QString>)));
    connect(this,
            SIGNAL(sendCriteriaList(QString)),
            pDispInTable,
            SLOT(receiveCriteriaList(QString)));
}

SymptCrit::~SymptCrit()
{
    delete ui;
}

void SymptCrit::receiveSymptList(QVector<QString> itsSympt)
{
    symptList.clear();
    for (int i = 0; i < itsSympt.size(); i++)
    {
        symptList.push_back(itsSympt[i]);
    }
    emit sendSympt(symptList);
    disp3Symptoms();
}

void SymptCrit::disp3Symptoms()
{
    ui->symp1Line->setText(symptList[vectIndex++]);
    ui->symp2Line->setText(symptList[vectIndex++]);
    ui->symp3Line->setText(symptList[vectIndex++]);
}

void SymptCrit::on_pushButton_clicked()
{
    count++;
    if (count == 2)
    {
        int i = 0;

    }
    QString messageError;
    messageError = "Заполните поле с критерием";
    if (ui->criteriaLine->text()== "")
    {
        QMessageBox::information(0, "Error", messageError);
    }
    else
    {
        criteriaList.push_back(ui->criteriaLine->text());
        emit sendCriteriaList(ui->criteriaLine->text());
        oneCriteria.insert(ui->symp1Line->text(), ui->weight1->value());
        oneCriteria.insert(ui->symp2Line->text(), ui->weight2->value());
        oneCriteria.insert(ui->symp3Line->text(), ui->weight3->value());
        critAndSympt.insert(ui->criteriaLine->text(),oneCriteria);
        itogCritAndSympt.push_back(critAndSympt);
        oneCriteria.clear();
        critAndSympt.clear();
        if (vectIndex + 2 < (symptList.size()))
        {
            disp3Symptoms();
            QMessageBox::information(0, "Message", "Укажите новый критерий");
            ui->criteriaLine->clear();
        }
        else
        {
            QMessageBox::information(0, "Message", "Все симптомы записаны");
            emit sendItogCritAndSympt(itogCritAndSympt);
            pDispInTable->show();
        }

    }
}
