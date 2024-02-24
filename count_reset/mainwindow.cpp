#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    count = 0;
    connect(ui->btnCount, SIGNAL(clicked()), this, SLOT(on_btnCount_clicked()));
    connect(ui->btnReset, SIGNAL(clicked()), this, SLOT(on_btnReset_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    count++;
    ui->lineResult->setText(QString::number(count));
}


void MainWindow::on_btnReset_clicked()
{
    count = 0;
    ui->lineResult->setText(QString::number(count));
}

