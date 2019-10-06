#include "DispInTable.h"
#include "ui_DispInTable.h"

DispInTable::DispInTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DispInTable)
{
    ui->setupUi(this);
    criteriaList.clear();
    weightByCritAndSymp = 0;
    inputPath = "C:/Lidia/AMRR/symptoms.txt";

}

DispInTable::~DispInTable()
{
    delete ui;
}

void DispInTable::recieveItogCritAndSympt(QVector<QHash<QString, QHash<QString, double> > > itsItogCritAndSympt)
{
    itogCritAndSympt = itsItogCritAndSympt;
    //itogSymptAndVal = itogCritAndSympt[0].value(criteriaList[0]);
    //double val;
    //val = itogSymptAndVal.value(symptList[0]);

    header << "";
    for (int i = 0; i < criteriaList.size(); i++)
    {
        header << criteriaList[i];
    }
    ui->symptWidget->setColumnCount(itogCritAndSympt.size()+1);
    ui->symptWidget->setRowCount(symptList.size());
    ui->symptWidget->setHorizontalHeaderLabels(header);
    for (int i = 0; i < (symptList.size()); i++)
    {
        setItem(i,0,symptList[i]);
    }
    for (int j = 1; j < (criteriaList.size() + 1); j++)
    {
        for (int i = 0; i < symptList.size(); i++)
        {
            itogSymptAndVal = itogCritAndSympt[j-1].value(criteriaList[j-1]);
            setItem(i,j,QString::number(itogSymptAndVal.value(symptList[i])));
        }
    }
}

void DispInTable::receiveSympt(QVector<QString> itsSympt)
{
    symptList = itsSympt;
}

void DispInTable::receiveCriteriaList(QString itsCriteria)
{
    criteriaList.push_back(itsCriteria);
}

void DispInTable::setItem(int indRow, int indCol, QString data)
{
    QTableWidgetItem *itm =
            new QTableWidgetItem(tr("%1").arg(data));
    ui->symptWidget->setItem(indRow,indCol,itm);
}
