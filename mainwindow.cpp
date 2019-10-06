#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    symptFromFile.clear();
    symptToFile.clear();
    //inputPath = "C:/Lidia/AMRR/symptoms.txt";
    inputPath = "C:/KMPZ/KMPZ/symptoms.txt";
    pSymptCrit = new SymptCrit;

    connect(this,
            SIGNAL(sendSymptList(QVector<QString>)),
            pSymptCrit,
            SLOT(receiveSymptList(QVector<QString>)));
    codec = QTextCodec::codecForName("UTF-8");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::readSymptFromFile()
{
    QString line;
    QString messageError;
    messageError = "Не удалось открыть файл по данному пути: ";
    messageError.append(inputPath);
    symptData.setFileName(inputPath);
    if (!symptData.open(QIODevice::ReadWrite|QIODevice::Text))
    {
        QMessageBox::information(0,"Error", messageError);
    }
    else
    {
        symptFromFile.clear();
        while (!symptData.atEnd())
        {
            line = symptData.readLine();
            line.remove(QChar('\n'));
            symptFromFile.push_back(line);
        }
        for (int i = 0; i< symptFromFile.size(); i++)
        {
            ui->sympList->addItem(symptFromFile[i]);
        }
    }

    symptToFile.clear();
    for (int i = 0; i < symptFromFile.size(); i++)
    {
        symptToFile.push_back(symptFromFile[i]);
    }
}

void MainWindow::writeSymptToFile()
{
    symptData.close();
    symptData.remove();
    symptData.setFileName(inputPath);
    QString messageError;
    messageError = "Не удалось открыть файл по данному пути: ";
    messageError.append(inputPath);
    if (!symptData.open(QIODevice::ReadWrite|QIODevice::Text))
    {
        QMessageBox::information(0,"Error", messageError);
    }
    else
    {
        streamSympt.setDevice(&symptData);
        streamSympt.setCodec(codec);
        for (int i = 0; i< symptToFile.size(); i++)
        {
            streamSympt << symptToFile[i] << "\n";
        }
    }

}


void MainWindow::on_addSymptButton_clicked()
{
    QString messageError;
    messageError = "Пустое поле, введите симптом";
    if (ui->symptAddLine->text() == "")
    {
        QMessageBox::information(0, "Error", messageError);
    }
    else
    {
        QString needToAdd = ui->symptAddLine->text();
        symptToFile.push_back(needToAdd);
        ui->sympList->addItem(needToAdd);
    }
}

void MainWindow::on_delSymptButton_clicked()
{
    QString messageError;
    messageError = "Пустое поле, введите симптом";
    if (ui->symptDelLine->text() == "")
    {
        QMessageBox::information(0, "Error", messageError);
    }
    else
    {
        QString needToDel = ui->symptDelLine->text();
        symptToFile.removeAll(needToDel);
        ui->sympList->clear();
        for (int i = 0; i< symptToFile.size(); i++)
        {
            ui->sympList->addItem(symptToFile[i]);
        }
    }

}

void MainWindow::on_okButton_clicked()
{
    pSymptCrit->show();
    writeSymptToFile();
    symptData.close();
    emit sendSymptList(symptToFile);
}
