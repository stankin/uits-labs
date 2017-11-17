/* Программа 3. Файловый поток ввода.
 * Подсчет количества чисел в файле.
 */
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int count = 0;
    //Создание файлового потока ввода
    ifstream fin("out.txt");
    //Проверка создался ли он
    if (!fin)
    {
        //Вывод сообщения об ошибке
        cerr << "file could not be opened" << endl;
        exit(1);
    }
    while (!fin.eof())
    {
        int elem = 0;
        //Чтение целого числа из файла
        fin >> elem;
        // По умолчанию поток ввода игнорирует пробельные
        // символы поэтому числа можно разделять пробелами
        // чтение выполнится тогда, когда будет встречено
        // целое число.
        //Проверка все ли в порядке (удалось ли считать число)
        if (!fin.good())
            break;
        count += 1;
    }
    //закрытие файла
    fin.close();
    cout << "count=" << count << endl;
    system("pause");
    return 0;
}
