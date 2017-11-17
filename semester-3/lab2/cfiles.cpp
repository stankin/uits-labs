/* Программа 4. Работа с файлами в стиле Си.
 * Чтение файла и логирование имен открытых файлов
 */
#include <stdlib.h>
#include <stdio.h>
int main()
{
    char filename[80];
    /*
        чтение строки со стандартного потока
     */
    scanf("%s", filename);
    /*
        Открытие файла на чтение
     */
    FILE* rfile = fopen(filename, "r");
    /*
        "r"     Открытие файла на чтение.
                Файл должен существовать
        "w"     Открытие файла на запись, создает новый файл,
                перезаписывает, если файл уже существует
        "a"     Открытие файла на запись, создает новый файл.
                если файл уже существует то дописывает в конец
        "r+"    Открытие файла на чтение и запись.
                Файл должен существовать
        "w+"    Открытие файла на запись и чтение, создает
                новый файл, перезаписывает если файл уже существует
        "a+"    Открытие файла на запись и чтение, создает
                новый файл. Если файл уже существует то
                дописывает в конец
     */
    /*
     Проверка открылся ли файл
     */
    if (rfile == NULL)
    {
        /*
         вывод в стандартный поток ошибок.
         */
        fprintf(stderr, "%s %s\n", "error while reading file", filename);
        system("pause");
        exit(1);
    }
    FILE* log = fopen("log.txt", "a");
    if (log == NULL)
    {
        fprintf(stderr, "%s\n", "error while creating log");
    } else
    {
        /*
         * печать в поток с дескриптором log
         */
        fprintf(log, "file %s was oppened\n", filename);
        fclose(log);
    }
    int i = 0;
    while (i < 10 && !feof(rfile))
    {
        char line[50];
        /*
         * чтение строки из файлового потока
         */
        fgets(line, 50, rfile);
        printf("%s", line);
    }
    /*
       Закрытие файла
    */
    fclose(rfile);
    system("pause");
    
    return 0;
}
/* Программа 5. Работа с бинарными файлами.
 * Запись в массив и чтение из массива чисел
 */
#include <stdlib.h>
#include <stdio.h>
int main()
{
    const int size = 10;
    int i;
    float A[size];
    for (i = 0; i < size; i++)
    {
        A[i] = i * 0.1;
    }
    FILE* wfile = fopen("out.dat", "wb");
    /*
        b - означает двоичный файл
     */
    if (wfile == NULL)
    {
        fprintf(stderr, "%s", "error");
        system("pause");
        exit(1);
    }
    /*
        Запись в бинарный файл
        Первый аргумент - указатель на структуру в памяти
        Второй - размер элемента структуры
        Третий - количество элементов структуры
        Четвертый - дексриптор файла
     */
    fwrite(A, sizeof (float), size, wfile);
    fclose(wfile);
    float B[size];
    FILE* rfile = fopen("out.dat", "rb");
    /*
       b - означает двоичный файл
     */
    if (rfile == NULL)
    {
        fprintf(stderr, "%s", "error");
        system("pause");
        exit(1);
    }
    /*
        Чтение из бинарного файла
     */
    fread(B, sizeof (float), size, rfile);
    fclose(rfile);
    for (i = 0; i < size; i++)
    {
        printf("%f\n", B[i]);
    }
    system("pause");
    return 0;
