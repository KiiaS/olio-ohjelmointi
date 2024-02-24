#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    state = 1;
    operand = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnNum1_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_btnNum2_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_btnNum3_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_btnNum4_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_btnNum5_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_btnNum6_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_btnNum7_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_btnNum8_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_btnNum9_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_btnNum0_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_btnAdd_clicked()
{
    addSubMulDivClickHandler();
}

void MainWindow::on_btnSub_clicked()
{
    addSubMulDivClickHandler();
}

void MainWindow::on_btnMul_clicked()
{
    addSubMulDivClickHandler();
}

void MainWindow::on_btnDiv_clicked()
{
    addSubMulDivClickHandler();
}

void MainWindow::on_btnClear_clicked()
{
    clearAndEnterClickHandler();
}

void MainWindow::on_btnEnter_clicked()
{
    //state = 1;
    float n1 = number1.toFloat();
    float n2 = number2.toFloat();
    qDebug()<<"number 1 = "<<n1<<" and number 2 = "<<n2<<Qt::endl;

    switch (operand) {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        result = n1 / n2;
        break;
    default:
        qDebug();
        break;
    }

    ui->lineResult->setText(QString::number(result));
    state = 1;

}

void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name:" << name;

    if(state==2){
        number2=name.last(1);
        QString prevNum=ui->lineNum2->text();
        ui->lineNum2->setText(prevNum.append(number2));
    }
    else{
        number1=name.last(1);
        QString prevNum=ui->lineNum1->text();
        ui->lineNum1->setText(prevNum.append(number1));
    }
}

void MainWindow::clearAndEnterClickHandler()
{

    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name:" << name;
    state = 1;
    ui->lineNum1->setText("");
    ui->lineNum2->setText("");
    ui->lineResult->clear();


}

void MainWindow::addSubMulDivClickHandler()
{

    if (number1.isEmpty()) {
        number1 = number2;
        number2.clear();
    }

    QObject *senderObj = sender();
    QPushButton *senderBtn = qobject_cast<QPushButton *>(senderObj);
    operand = senderBtn->text().at(0).toLatin1();

    state = 2;
    resetLineEdits();
}


void MainWindow::resetLineEdits()
{
    ui->lineNum1->setText(number1);
    ui->lineNum2->setText(number2);
    ui->lineResult->clear();
}

