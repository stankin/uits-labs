#include <iostream.h>
#include <stdlib.h>

#define N 5
#define T int

int main()
{
    T A[N];

    for (int i = 0; i < N; i++)
    {
        T temp;
        cin>>temp;
        A[i] = temp;
    }

    for (int i = 0; i < N; i++)
    {
        cout<<A[i]<<endl;
    }

    system("pause");

    return 0;
}
