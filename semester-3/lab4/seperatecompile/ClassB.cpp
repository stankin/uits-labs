#include "ClassB.h"
#include "ClassA.h"

ClassB::ClassB()
{
}

void ClassB::foo(){
    ClassA a;

    a.sin(5);
}

ClassB b;
