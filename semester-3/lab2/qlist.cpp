#include <iostream>
#include <iterator>
#include <vector>
#include <stdexcept>
#include <QList>
#include <QTextStream>
using namespace std;
int main(int argc, char** argv)
{
    
    QList<int> l;
    l << 3 << 6 << 7;
    
    QListIterator<int> li(l);
    
    while(li.hasNext())
    {
        cout << li.next() << endl;
    }
    
    //    3
    //    6
    //    7
    
    
    for(QList<int>::iterator sti =l.begin(); sti != l.end(); ++sti)
    {
        cout << *sti << endl;
    }
    
    
    vector<int> v;
    
    copy(l.begin(),l.end(), back_insert_iterator< vector<int> >(v));
    
    
    copy(v.begin(),v.end(), ostream_iterator<int>(cout," "));
    //3 6 7 
    
    
    return 0;
}
