#ifndef DISPINTABLE_H
#define DISPINTABLE_H

#include <QDialog>

namespace Ui {
class DispInTable;
}

class DispInTable : public QDialog
{
    Q_OBJECT

public:
    explicit DispInTable(QWidget *parent = 0);
    ~DispInTable();
    void setItem(int indRow, int indCol, QString data);

public slots:
    void recieveItogCritAndSympt(QVector <QHash<QString, QHash<QString, double> > > itsItogCritAndSympt);
    void receiveSympt(QVector<QString> itsSympt);
    void receiveCriteriaList(QString itsCriteria);

private:
    Ui::DispInTable *ui;
    QVector<QHash<QString, QHash<QString, double> > > itogCritAndSympt;
    QHash <QString, double> itogSymptAndVal;
    double weightByCritAndSymp;
    QStringList header;
    QVector <QString> vectForHeader;
    QVector <QString> criteriaList;
    QString inputPath;
    int countSympt;
    QVector <QString> symptList;
};

#endif // DISPINTABLE_H
