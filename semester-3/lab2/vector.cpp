#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main(int argc, char** argv)
{
    vector<int> v1(10);
    for (size_t i = 0; i < v1.size(); i++)
    {
        v1[i] = i * 2;
    }
    for (size_t i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << ", "; //Не контрлирует выход за пределы
    }
    //0, 2, 4, 6, 8, 10, 12, 14, 16, 18,
    cout << endl;
    for (size_t i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << ","; //Контролирует выход за пределы
    }
    cout << endl;
    // 0,2,4,6,8,10,12,14,16,18,
    v1.push_back(120);
    for (vector<int>::iterator  i = v1.begin(); i != v1.end(); i++)
    {
        cout<<*i<<",";
    }
    //0,2,4,6,8,10,12,14,16,18,120,
    cout << endl;
    vector<double> v2(5, 6.9);
    for (size_t i = 0; i < v2.size(); i++)
    {
        cout << v2.at(i) << ", ";
    }
    cout << endl;
    //6.9, 6.9, 6.9, 6.9, 6.9,
    // C++ 11
    vector<double> v3 = {12.3, 1e-5, 4, 6.7};
//    for(double& e: v3)
//        e = 4;
    for(double e: v3)
        cout << e <<" ";
    // 12.3 1e-05 4 6.7
    cout << endl;
    cout << endl;
    double d[] = {1.2, 3.4, 5.6};
    v2.assign(d, d + 3);
    for (size_t i = 0; i < v2.size(); i++)
    {
        cout << v2.at(i) << ", ";
    }
    cout << endl;
    //1.2, 3.4, 5.6,
    double d2[3];
    copy(v2.begin(),v2.end(),d2);
    for(double* pi = d2; pi != d2 + 3; pi++ )
    {
        cout << *pi <<" ";
    }
    cout << endl;
    //1.2, 3.4, 5.6,
    v2.resize(10);
    for (vector<double>::iterator  i = v2.begin()+1; i != v2.end(); i++)
    {
        *i = *(i-1)+0.2;
    }
    //1.21.41.61.822.22.42.62.83
    ostream_iterator<double> oi(cout);
    copy(v2.begin(),v2.end(),oi);
    cout << endl;
    copy(v2.begin(),v2.end(),ostream_iterator<double> (cout,", "));
    //1.2, 1.4, 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3,
    //system("pause");
    return 0;
}
