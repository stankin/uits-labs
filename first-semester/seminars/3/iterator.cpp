//2. Итератор

int main3()
{
    const unsigned int size = 5;

    int A[size];

    for (int i = 0; i < size; i++)
    {
        A[i] = i + 1;
    }

    int* ptr = A;
    cout << *ptr << endl; // выведет первый элемент
    ptr++;
    cout << *ptr << endl; // выведет второй элемент

    cout << endl;

    //Вывод всех элементов без использования i
    //т.н. обращение через итератор
    for (int* p = A; p < A + size; p++)
    {
        cout << *p << endl;
    }

    return 0;
}
