#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->addABtn,SIGNAL(clicked()),this,SLOT(addAclick()));
    connect(ui->addBBtn,SIGNAL(clicked()),this,SLOT(addBclick()));
}

void MainWindow::addAclick(){

    ui->textEdit->textCursor().insertText("A");

}


void MainWindow::addBclick(){
    ui->textEdit->textCursor().insertText("B");
}

MainWindow::~MainWindow()
{
    delete ui;
}
