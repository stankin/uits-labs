#include <QtCore/QCoreApplication>
#include "wdobject.h"

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
    WDObject parent(0,NULL);
    WDObject * obj1 = new WDObject(1,&parent);

    WDObject * obj2 = new WDObject(2,obj1);



    //delete parent;
    //return a.exec();
}
