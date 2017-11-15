#include <iostream>
#include <cmath>

using namespace std;

// Итерационная_формула_Герона
// Фактически это подгон прямоугольника под то чтобы он стал квадратом
float mysqrt(float arg)
{
    float res = 1;

    while (fabs(res * res - arg) > 1e-5)
    {		
        res = 0.5 * (res + arg / res);
    }

    return res;
}

int main()
{

    cout << "mysqrt(9)=" << mysqrt(9) << endl;
    cout << "mysqrt(2)=" << mysqrt(2) << endl;
    cout << "mysqrt(0.2)=" << mysqrt(0.2) << endl;
    cout << "mysqrt(0.1)=" << mysqrt(0.1) << endl;


    return 0;
}


