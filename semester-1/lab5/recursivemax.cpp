
#include <stdlib.h>
#include <iostream>

using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

int max(int* A, int size)
{
    if (size == 1)
    {
        return A[0];
    } else
    {
        return max(A[0], max(A + 1, size - 1));
    }
}

int main()
{
    int A[] = {6, 9, 2, 3, 8};
    cout << max(A, 5) << endl;
}

//
//maxArr([5,6,3], 3)->
//                   |A[0] = 5
//                   |maxArr([6,3], 2)->
//                   |                 |A[0] = 6
//                   |                 |maxArr([3], 1)->
//                   |                 |              <|возвр 3
//                   |                <|возврат max(6,3)
//                  <|возврат max(5,max(6,3))
//
//
//maxArr([8,2,5,6,3], 5)-> max(8,max(2,max(5,max(6,3))))
