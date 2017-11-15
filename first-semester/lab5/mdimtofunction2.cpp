#include <iostream>
#include <cstdlib>

using namespace std;

// функци€, принимающа€ как аргумент двумерный массив
// и вычисл€юща€ сумму его элементов
float sum(float** ptr, int n, int m)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum+=ptr[i][j];
        }
    }

    return sum;
}

int main()
{
    const int height = 4;
    const int width = 7;
    float A[height][width];
    
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            A[i][j] = rand()%100/10.;            
            cout<<A[i][j]<<" ";
        }
        
        cout<<endl; 
    }

    //—оздание массива указателей и сохранение в нЄм
    //указателей на каждую строку массива A
    float* ptrarr[height];

    for (int i = 0; i < height; i++)
    {
        ptrarr[i] = A[i];
    }

    //вызов фукнции с передачей в неЄ указател€ на двумерный
    //массив и его размеров
    cout<<sum(ptrarr,height,width)<<endl;
    
    system("pause");
    
    return 0;

}


