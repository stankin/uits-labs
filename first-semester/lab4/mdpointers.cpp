
#include <iostream>
#include <cstdlib>

using namespace std;

//1. указатели на указатель

int main()
{
    int a = 5;
    int* p = &a; //указатель на "a"
    int** pp = &p; //указатель на "p", указатель на указатель

    cout << **pp << endl; //Выведет 5;

    int b = 8;

    *pp = &b;
    // косвенно изменили адрес, хранящийся в перемнной "p"
    // на адрес переменной "b";

    cout << *p << endl; //Выведет 8;

    return 0;
}


//2. двумерный массив как массив указателей

int main()
{
    unsigned const int height = 2;
    unsigned const int width = 3;

    int A[height][width];

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            A[i][j] = rand() % 10;
        }
    }


    //Вывод через итераторы    
    for (int i = 0; i < height; i++)
    {
        // Так как A[i] является указателем
        // на строку двумерного массива,
        // можем использовать итераторы
        for (int* p = A[i]; p < A[i] + width; p++)
        {
            cout << *p << "\t";
        }

        cout << endl;
    }
    cout << endl;

    //Вывод без использования квадратных скобок
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // помним, что // *(ptr+i) и ptr[i] - эквивалентны
            // A[i][j],
            // так как A[i] - указатель на строку, избавляемся
            // от скобочек строки:
            // *(A[i]+j)
            // так как A - указатель на массив строк,
            // избавляемся от скобочек столбца:
            // *(*(A+i)+j)

            cout << *(*(A + i) + j) << "\t";
        }
        cout << endl;
    }
    return 0;
}

//3. использование одномерного массива как двумерного

int main()
{

    unsigned const int size = 12;
    unsigned const int height = 3;

    if (size % height != 0)
    {
        cout << "incompatible size and height" << endl;
        return 1;
    }

    int width = size / height;
    int A[size];

    for (int i = 0; i < size; i++)
    {
        A[i] = i+1;
        cout << A[i] << " ";
    }
    cout << endl;

    int* D[height];
    // не совсем двумерный массив,
    // а формальный массив указателей.
    // Разница с int D[height][width] в том,
    // что не выделяяется память под строки -
    // указатели, хранящиеся в массиве указывают в никуда

    for(int i=0; i <height; i++)
    {
        // разбиваем массив A на height кусков по width
        // элементов в каждом и сохраняем адреса этих кусков
        // в массиве D
        D[i] = &A[i*width];
    }

    cout << endl;

    //Псевдо двумерный массив D содержит все элементы A
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout<<D[i][j]<<"\t";
        }

        cout << endl;
    }

    cout << endl;

    D[0][1] = -8; // изменения в D изменяют A

    for (int i = 0; i < size; i++)
    {        
        cout << A[i] << " ";
    }

    cout<<endl;

}

