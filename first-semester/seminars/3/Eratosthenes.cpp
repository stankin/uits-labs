#include <iostream>

// Решето эратосфена

using namespace std;

int main()
{
    const int size = 500;
    int a[size];

    for (int i = 0; i < size; i++)
    {
        a[i] = i + 1;
    }

    for (int i = 1; i < size / 2; i++)
    {
        if (a[i] != 0)
        {
            for (int j = i + a[i]; j < size; j += a[i])
            {
                a[j] = 0;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] != 0)
            cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}


