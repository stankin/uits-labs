/* 
 Бегун Вася бегает по стадиону,
 определить насколько дольше ему пробежать десять кругов
 по внешнему кругу чем по врутреннему?

 */


#include <iostream>
#include <cmath>

using namespace std;

float calcS(float R, float L)
{
    return 2 * M_PI * R + 2 * L;
}

int main(int argc, char** argv)
{

    float v = 0;
    float L = 0;
    float R1 = 0;
    float R2 = 0;
    float T = 0;

    cin >> v;
    cin >> L;
    cin >> R1;
    cin >> R2;

    float s1 = calcS(R1, L);
    float s2 = calcS(R2, L);

    float t1 = s1 / v;
    float t2 = s2 / v;

    cout << t2 - t1;


    return 0;
}


