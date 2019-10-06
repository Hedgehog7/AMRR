#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <declarations.h>
#include <symptCrit.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    // read symptoms from file
    void readSymptFromFile();
    void writeSymptToFile();

signals:
    void sendSymptList(QVector<QString> itsSympList);

private:
    Ui::MainWindow *ui;
    QVector<QString> symptFromFile;
    QVector<QString> symptToFile;
    QFile symptData;
    QTextStream streamSympt;
    QString inputPath;
    SymptCrit *pSymptCrit;
    QTextCodec *codec;

private slots:

    void on_addSymptButton_clicked();
    void on_delSymptButton_clicked();
    void on_okButton_clicked();
};

#endif // MAINWINDOW_H
