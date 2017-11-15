
#include <stdlib.h>
#include <iostream>

using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

float max(float a, float b)
{
    return a > b ? a : b;
}

int max(int a, int b, int c)
{
    return max(a, max(b, c));
}

int main(int argc, char** argv)
{
    cout << max(5, 30) << endl;

    cout << max(0.001, 9.56) << endl;

    cout << max(7, 4.3) << endl;

    cout << max(7, 4, 10) << endl;

    return (EXIT_SUCCESS);
}


