#include "widget.h"
#include <QVBoxLayout>
#include <QTextEdit>
#include <QPushButton>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(new QTextEdit("fghjfgjh"));
    QPushButton* btn = new QPushButton("nnnhf");

    QObject::connect(btn,SIGNAL(clicked()),this,SLOT(showMessageBox()));

    layout->addWidget(btn);
    this->setLayout(layout);
}

void Widget::showMessageBox(){

    QMessageBox mb;
    mb.setText("sdfgsdfg");
    mb.exec();
}

Widget::~Widget()
{
    
}
