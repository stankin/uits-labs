#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>
using namespace std;
/*
 *
 */
int main(int argc, char** argv)
{
    list<int> l;
    for (int i = 0; i < 5; i++)
        l.push_back(i);
    for(list<int>::iterator i = l.begin(); i!=l.end();i++ )
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    //0 1 2 3 4
    list<int>::iterator i = find(l.begin(), l.end(),2);
    l.pop_front(); //Удаление первого
    for(list<int>::iterator i = l.begin(); i!=l.end();i++ )
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    l.insert(i,8);
    copy(l.begin(),l.end(), ostream_iterator<int> (cout," "));
      //1 8 2 3 4
    l.sort();
    copy(l.begin(),l.end(), ostream_iterator<int> (cout," "));
    //1 2 3 4 8
    //system("pause");
    return 0;
}
