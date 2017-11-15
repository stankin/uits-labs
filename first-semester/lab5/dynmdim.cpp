#include <iostream>
#include <cstdlib>

using namespace std;

// функция, принимающая как аргумент двумерный массив
// и вычисляющая сумму его элементов

float sum(float** ptr, int n, int m)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += ptr[i][j];
        }
    }

    return sum;
}

int main()
{
    const int height = 4;
    const int width = 7;
    float** A = new float*[height];

    for (int i = 0; i < height; i++)
    {
        A[i] = new float[width];
    }


    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            A[i][j] = rand() % 100 / 10.;
            cout << A[i][j] << " ";
        }

        cout << endl;
    }


    //вызов фукнции с передачей в неё указателя на двумерный
    //массив и его размеров
    cout << sum(A, height, width) << endl;

    for (int i = 0; i < height; i++)
    {
        delete [] A[i];
    }

    delete [] A;

    system("pause");

    return 0;

}


