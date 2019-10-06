#ifndef SYMPTCRIT_H
#define SYMPTCRIT_H

#include <QDialog>
#include <declarations.h>
#include <DispInTable.h>

namespace Ui {
class SymptCrit;
}

class SymptCrit : public QDialog
{
    Q_OBJECT

public:
    explicit SymptCrit(QWidget *parent = 0);
    ~SymptCrit();

private:
    Ui::SymptCrit *ui;
    QVector<QString> symptList;
    QVector<QString> criteriaList;

    QHash<QString, double> oneCriteria;
    QHash<QString, QHash<QString, double> > critAndSympt;
    void disp3Symptoms();
    int vectIndex;
    QVector <QHash<QString, QHash<QString, double> > > itogCritAndSympt;
    int count;
    DispInTable *pDispInTable;

signals:
    void sendItogCritAndSympt(QVector <QHash<QString, QHash<QString, double> > > itsItogCritAndSympt);
    void sendSympt(QVector<QString> itsSympt);
    void sendCriteriaList(QString itsCriteria);
public slots:
    void receiveSymptList(QVector<QString> itsSympt);
private slots:
    void on_pushButton_clicked();
};

#endif // SYMPTCRIT_H
