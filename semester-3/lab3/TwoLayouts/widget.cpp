#include "widget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QTextEdit>
#include <QPushButton>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    QHBoxLayout* hbox = new  QHBoxLayout();
    hbox->addWidget(new QTextEdit());

    QVBoxLayout* vboxl = new QVBoxLayout();
    vboxl->addWidget(new QPushButton("A"));
    vboxl->addWidget(new QPushButton("B"));
    vboxl->addStretch();
    hbox->addLayout(vboxl);

    this->setLayout(hbox);

}

Widget::~Widget()
{

}
