#include "ClassB.h"
#include "ClassA.h"

#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout<<"fdghdfgh1"<<endl;
    extern ClassB b;
    cout<<"fdghdfgh2"<<endl;
    b.foo();


    bar();


    ClassA a;
    a.sin(4);


    cout<<"fdghdfgh"<<endl;

    return 0;
}
