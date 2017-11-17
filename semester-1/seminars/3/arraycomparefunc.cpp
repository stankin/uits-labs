/*
Написать функцию, проверяющую, идентичны ли два массива.
Написать программу, проверяющую работу этой функции
 */

#include <cstdlib>
#include <iostream>

using namespace std;


bool compare(int* a, int* b, int size)
{
    for (int i = 0; i < size; i++)
    {        
        if(a[i] != b[i])
            return false;
    }
    
    return true;         
}



int main(int argc, char** argv)
{    
    const int size = 5;    
    int a[size]; // могу назвать подругому ?
    int b[size];
    
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    
    cout << endl;
    
    for (int i = 0; i < size; i++)
    {
        cin >> b[i];
    }
    
    if(compare(a,b,size))
    {
       cout << "identical" << endl;
    }
    else
    {
        cout << "not identical" << endl;
    }


    return 0;
}


