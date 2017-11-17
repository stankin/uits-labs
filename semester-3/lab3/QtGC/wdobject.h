#ifndef WDOBJECT_H
#define WDOBJECT_H

#include <QObject>
#include <QDebug>

class WDObject : public QObject
{
    Q_OBJECT

    int n;

public:
    explicit WDObject(int n,QObject *parent) :
        QObject(parent),n(n)
    {
        qDebug()<<"constructing "<<n;
    }

    ~WDObject()
    {
        qDebug()<<"destructing "<<n;
    }

signals:

public slots:

};

#endif // WDOBJECT_H
