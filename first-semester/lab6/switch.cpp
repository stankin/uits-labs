// оператор множественного выбора (переключатель)

#include <stdlib.h>

#include <iostream>

using namespace std;

void printMonthByNumber1(int n)
{
    if (n == 1)
        cout << "Jan" << endl;
    else if (n == 2)
        cout << "Feb" << endl;
    else if (n == 3)
        cout << "Mar" << endl;
    else if (n == 4)
        cout << "Apr" << endl;
    else if (n == 5)
        cout << "May" << endl;
    else if (n == 6)
        cout << "Jun" << endl;
    else if (n == 7)
        cout << "Jul" << endl;
    else if (n == 8)
        cout << "Aug" << endl;
    else if (n == 9)
        cout << "Sep" << endl;
    else if (n == 10)
        cout << "Oct" << endl;
    else if (n == 11)
        cout << "Nov" << endl;
    else if (n == 12)
        cout << "Dec" << endl;
    else
        cout << "Unknown" << endl;

}

void printMonthByNumber2(int n)
{
    switch (n)
    {
        case 1:
            cout << "Jan" << endl;
            break;
        case 2:
            cout << "Feb" << endl;
            break;
        case 3:
            cout << "Mar" << endl;
            break;
        case 4:
            cout << "Apr" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "Jun" << endl;
            break;
        case 7:
            cout << "Jul" << endl;
            break;
        case 8:
            cout << "Aug" << endl;
            break;
        case 9:
            cout << "Sep" << endl;
            break;
        case 10:
            cout << "Oct" << endl;
            break;
        case 11:
            cout << "Nov" << endl;
            break;
        case 12:
            cout << "Dec" << endl;
            break;
        default:
            cout << "Unknown" << endl;
            break;
    }
}

void printMonthByNumber3(int n)
{
    char months[][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    cout << months[n - 1] << endl;
}

int main()
{
    int m = 12;

    printMonthByNumber1(m);
    printMonthByNumber2(m);
    printMonthByNumber3(m);

    system("pause");

    return 0;
}


