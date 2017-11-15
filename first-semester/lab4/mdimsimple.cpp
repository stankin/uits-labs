
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

//1. Ввод и вывод двумерного массива

int main()
{

    int A[3][4];
    // объявление двумерного массива
    // из трех строк и 4х столбцов

    //будем использовать два индекса
    int i;
    int j;


    // ввод элементов массива
    // цикл по строкам
    for (i = 0; i < 3; i++)
    {
        // и вложенный цикл по столбцам
        for (j = 0; j < 4; j++)
        {
            cout << "A[" << i << "][" << j << "]=? ";
            cin >> A[i][j];
        }
    }

    // вывод всех элементов в одну строку
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << A[i][j] << ", ";
        }

    }

    cout << endl;
    cout << endl;

    // вывод всех элементов по строкам
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << "\t" << A[i][j];
        }
        // в конце каждой строки массива
        // переходим на новую строку на экране
        cout << endl;
    }

    return 0;
}

//2. Поиск индексы всех элементов, лежащих между a и b

int main()
{
    unsigned const int height = 4;
    unsigned const int width = 5;

    int A[height][width];
    int a, b;

    // установка параметра генератора случайных чисел
    // можно не писать
    srand(2);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            A[i][j] = rand() % 20;
            cout << "\t" << A[i][j];
        }
        cout << endl;
    }

    cout << "a=?";
    cin >> a;
    cout << "b=?";
    cin >> b;

    cout << "indexes:" << endl;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (a < A[i][j] && A[i][j] < b)
            {
                cout << "[" << i  << "][" << j << "]" << endl;             
            }
        }
    }

    cout << endl;

    return 0;
}

//3. Массив строк, создание массива длин строк из массива строк

int main()
{
    unsigned const int size = 4;
    unsigned const int maxlength = 50;

    // Массив строк - двумерный массив,
    // так как строка это массив букв
    char Strings[size][maxlength];

    for (int i = 0; i < size; i++)
    {

        // так как двумерный массив - это массив строк,
        // каждую отдльную строку мы можем ввести
        // без специального цикла

        // фактически мы работаем с одномерным массивом
        cin >> Strings[i];
    }

    int Lengths[size];

    for (int i = 0; i < size; i++)
    {
        Lengths[i] = strlen(Strings[i]);
        // strlen - функция для нахождения длины строки
        // находится в библиотеке <cstring>
    }

    cout << "Lengths: ";

    for (int i = 0; i < size; i++)
    {
        cout << Lengths[i] << " ";
    }

    cout << endl;

    return 0;
}

//4. трехмерный массив, вывод на экран и вычисление суммы

int main()
{
    unsigned const int size1 = 3;
    unsigned const int size2 = 5;
    unsigned const int size3 = 4;

    int A[size1][size2][size3];

    // при выводе будет выглядеть как:
    /*
        [0]:
                3	6	7	5
                3	5	6	2
                9	1	2	7
                0	9	3	6
                0	6	2	6

        [1]:
                1	8	7	9
                2	0	2	3
                7	5	9	2
                2	8	9	7
                3	6	1	2

        [2]:
                9	3	1	9
                4	7	8	4
                5	0	3	6
                1	0	6	3
                2	0	6	1
    */
    // То есть мы понимаем трехмерный массив, как
    // одномерный массив двумерных массивов

    for (int i = 0; i < size1; i++)
    {
        cout<<"["<< i << "]:" << endl;

        for (int j = 0; j < size2; j++)
        {
            for (int k = 0; k < size3; k++)
            {
                A[i][j][k] = rand() % 10;
                cout << "\t" << A[i][j][k];
            }

            cout << endl;
        }

        cout << endl;
    }




    int sum = 0;

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            for (int k = 0; k < size3; k++)
            {
                sum+=A[i][j][k];
            }
        }
    }

    cout <<"sum="<<sum<< endl;

    return 0;
}
