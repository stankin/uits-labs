/*
 Определить количество элементов массива,
 значение которых лежит в диапазоне от a до b. 
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{    
    const int size = 5;    
    int arr[size];
    
    int a;
    int b;
    
    cin >> a;
    cin >> b;
    
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];        
    }
    
    int count = 0;
    
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > a && arr[i] < b)
            count ++;
    }
    
    cout << count << endl;

    return 0;
}


