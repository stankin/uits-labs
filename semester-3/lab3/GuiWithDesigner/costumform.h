#ifndef COSTUMFORM_H
#define COSTUMFORM_H

#include <QWidget>

namespace Ui {
    class CostumForm;
}

class CostumForm : public QWidget
{
    Q_OBJECT

public:
    explicit CostumForm(QWidget *parent = 0);
    ~CostumForm();

private:
    Ui::CostumForm *ui;
};

#endif // COSTUMFORM_H
