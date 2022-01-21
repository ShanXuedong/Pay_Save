#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("单学东的记账本");

    this->resize(1000,800);
}
MainWindow::~MainWindow()
{
    delete ui;
}
