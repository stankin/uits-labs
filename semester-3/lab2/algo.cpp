#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
//Предикат
bool gt5(float arg)
{
    return arg > 5.;
}
int main(int argc, char** argv)
{
    int a[] = {8, 3, 5, 2, 9};
    int b[10];
    copy(a, a + 3, b);
    for (int i = 0; i < 3; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
//8 3 5 
    sort(a, a + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
//2 3 5 8 9 
    vector<float> v(8);
    v[0] = 6.4;
    v[1] = 2.0;
    v[2] = 3.5;
    v[3] = 2.4;
    v[4] = 8.1;
    v[5] = 7.8;
    v[6] = 5.3;
    v[7] = 4.2;
    for (int i = 0; i < 8; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
 //6.4 2 3.5 2.4 8.1 7.8 5.3 4.2    
    sort(v.begin(), v.end());
    for (int i = 0; i < 8; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
//2 2.4 3.5 4.2 5.3 6.4 7.8 8.1 
    random_shuffle(v.begin(), v.end());
    replace_if(v.begin(), v.end(), gt5, 5.);
    for (int i = 0; i < 8; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
//5 4.2 5 5 2 5 3.5 2.4 
    system("pause");
    return (EXIT_SUCCESS);
}
