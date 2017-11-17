#include "costumform.h"
#include "ui_costumform.h"

CostumForm::CostumForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CostumForm)
{
    ui->setupUi(this);
}

CostumForm::~CostumForm()
{
    delete ui;
}
