#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "dialog.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:

    void alert(){
        Dialog d;
        d.exec();

//        QMessageBox mb;
//        mb.setText("fghj");
//        mb.exec();
    }

    void addAclick();

    void addBclick();


};

#endif // MAINWINDOW_H
