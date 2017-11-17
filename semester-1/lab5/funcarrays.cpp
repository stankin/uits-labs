//Массивы и функции

#include <stdlib.h>
#include <iostream>

using namespace std;

// Функция заполняющая массив случайными числами
// размер массива нужен так как си не хранит информации о
// размере массива
void fillrandom(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        A[i] = rand()%10;
    }
}

// Функция выводящая массив на экран
// принимает массив как указатель на первый элемент и
// количество элементов
void printArray(int* A, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int Array[10];
    fillrandom(Array,10);
    printArray(Array,10);
    system("pause");
    return 0;
}


