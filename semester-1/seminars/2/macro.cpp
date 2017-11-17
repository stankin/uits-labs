#include <iostream.h>
#include <stdlib.h>

#define max(a,b) ((a)>b?(a):(b))

int main()
{

    cout << max(5, 6) << endl;
    // cout << ((5)>6?(5):(6)) << endl;

    cout << max(5.6, 6.3) << endl;
    // cout << ((5.6)>6.3?(5.6):(6.3)) << endl;

    cout << max(2 * 5, 1 + 7) << endl;
    // cout << ((2 * 5)>1 + 7?(2 * 5):(1 + 7)) << endl;
    // если бы не было скобочек получилось бы:
    // cout << 2 * 5>1 + 7?2 * 5:1 + 7 << endl;
    // что не скомпилировалосб бы вообще



    system("pause");

    return 0;
}

