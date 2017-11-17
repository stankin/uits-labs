// За сколько времени тело упадёт с высоты l ?


#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

const float g = 9.8;

int main(int argc, char *argv[])
{
    float l;

    cout << "l=? ";
    cin >> l;

    cout << sqrt(2*l/g) << endl;

    return 0;
}

