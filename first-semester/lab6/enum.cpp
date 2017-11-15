#include <iostream>

using namespace std;

enum Color
{
    WHITE, BLACK, GREEN, BLUE, RED
};

void printcolor(Color c)
{
    switch (c)
    {
        case WHITE: cout << "Белый";
            break;
        case BLACK: cout << "Черный";
            break;
        case GREEN: cout << "Зеленый";
            break;
        case BLUE: cout << "Голубой";
            break;
        case RED: cout << "Красный";
            break;
    }
}

const char colorsNames[][20] = {"Белый", "Черный", "Зеленый", "Голубой", "Красный"};

void printcolor2(Color c)
{
    cout << colorsNames[c];
}

int main()
{
    Color color = GREEN;
    cout << color << "-";

    printcolor(color);

    for (Color r = WHITE; r <= RED; r = Color(r + 1))
    {
        cout << r << "-";
        printcolor2(r);
        cout << endl;
    }

    cout << endl;

    for (Color r = WHITE; r <= RED; r = Color(r + 1))
    {
        cout << r << "-";
        printcolor(r);
        cout << endl;
    }


    return 0;
}

