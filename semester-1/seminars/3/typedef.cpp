
#include <stdlib.h>
#include <iostream>

using namespace std;


typedef int* P;

typedef unsigned const int Ucint;

int main(int argc, char** argv)
{

    int a = 5;

    P ptr;
    ptr = &a;

    cout<<a<<endl; //5

    Ucint size = 20;

    double A[size];

    for (int i = 0; i < size; i++)
    {
        A[i] = i+2;
    }

    return (EXIT_SUCCESS);
}

// специальные типы длы размеров массивов size_t, для высоты и ширины, для каких-то физических величин там чтобы метры в килограммы не преобразовывать
