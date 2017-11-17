/*
 Задача: вычислить квадратный корень без использования стандартных функций 
 sqrt и pow
 */

#include <iostream>
#include <cmath>

using namespace std;

float mysqrt(float arg)
{
    // Будем решать методом двоичного поиска (будем возводить предполагаемый 
    // рузультат в квадрат и в зависимости от того больше или меньше исходного
    // получилось значение будем увеличивать или уменьшать результат))
    
    // Если аргумент больше единицы то корень заведомо меньше его,
    // Есди аргумент меньше единицы то это не так, но корень заведомо
    // меньше единицы
    float upper = arg > 1 ? arg : 1;

    float lower = 0;

    // Примем результат за значение посередине между границами
    float res = (upper - lower) / 2;

    while (1)
    {
        float diff = res * res - arg;

        if (fabs(diff) < 1E-5)
        {
            return res;
        }
        else if (diff > 0)
        {
            // Если разница оказалась больше чем надо, то перемещаем
            // вехрнюю границу
            upper = res; 
        } else
        {
            // В противном случае - нижнюю
            lower = res;
        }
        // значение опять берем из середины
        res = lower + (upper - lower) / 2;
    }


    return res;

}

int main()
{

    cout << "mysqrt(9)=" << mysqrt(9) << endl; // 3
    cout << "mysqrt(2)=" << mysqrt(2) << endl; // 1.41422
    cout << "mysqrt(0.2)=" << mysqrt(0.2) << endl; // 0.447205 
    cout << "mysqrt(0.25)=" << mysqrt(0.25) << endl; // 0.5 
    cout << "mysqrt(0.1)=" << mysqrt(0.1) << endl; // 0.316223


    return 0;
}


