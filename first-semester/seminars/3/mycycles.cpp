#include <iostream>
#include <cmath>

using namespace std;

#define times(n) for(int i=0; i<(n);i++)

#define until(cond) while(!(cond))

int main()
{

    times(10)
    {
        cout << "1";
    }
    
    times(10) cout << "2";
    
    
    int a = 5;
    
    until(a > 10)
    {
        cout << a << endl;
        a += 2;
    }


    return 0;
}


