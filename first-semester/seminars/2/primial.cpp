/* 
 Вывести первые N простых чисел
 * 
 * декомпозируем 
 */

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return false; // 0;
        }
    }

    return true; // 1;
}

int main()
{

    int count = 100;

    for (int n = 1; count > 0; n++)
    {
        if (isPrime(n))
        {
            cout << n << endl;
            count--;
        }
    }

    return 0;
}

// блок схемку кто изобразит?
