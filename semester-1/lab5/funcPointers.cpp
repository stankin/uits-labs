#include <iostream>
#include <cmath>

using namespace std;

int sum(int a, int b)
{
    int r = a + b;
    a = 0; // Ничего не меняет
    return r;
}

int readInt(int* v)
{
    cin >> *v;
}

void swap(int* x, int* y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

int main()
{

    int a = 5;
    int b = 3;

    cout << sum(a, b) << endl; // 8

    cout << "a=" << a << endl; // 5

    readInt(&a);
    cout << "a=" << a << endl; // какое-то число    

    swap(&a, &b);
    cout << "a=" << a << endl; // 3
    cout << "b=" << b << endl; // какое-то число 


    return 0;
}


