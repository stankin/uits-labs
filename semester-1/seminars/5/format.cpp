#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    cout << 3.123456789101112 <<endl; // 3.12346

    cout.precision(3);
    cout << 3.123456789101112 <<endl; // 3.12

    cout << 312345.6789101112 <<endl; // 3.12e+05

    cout.precision(-1);

    cout << 3.123456789101112 <<endl; // 3.12346

    cout << 3.0 << endl; // 3

    cout << showpoint;

    cout << 3.0  << endl; // 3.00000

    cout << 12  << endl; // 12
    cout << oct << 12 << endl; // 14
    cout << hex << 12 << endl; // c
    cout << uppercase << hex << 12 << endl; // C
    

    return 0;
}

