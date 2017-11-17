#include <iostream>
#include <cmath>

using namespace std;

int readInt(int& v)
{
    cin >> v;
}

void swap(int& x, int& y)
{
    int t = x;
    x = y;
    y = t;
}

int main()
{

    int a = 5;
    int b = 3;
    
    int& ref = a;
    
    ref = 10;
    cout << "a=" << a << endl; // 10
    swap(a, b);
    cout << "a=" << a << endl; // 3
    cout << "b=" << b << endl; // 10

    readInt(a);
    cout << "a=" << a << endl; // какое-то число    

    swap(ref, b);
    cout << "a=" << a << endl; // 10
    cout << "b=" << b << endl; // какое-то число 


    return 0;
}


