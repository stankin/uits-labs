#include <iostream>
#include <string>
#include <map>
#include <stdexcept>
using namespace std;
int main(int argc, char** argv)
{
    map<string,int> m;
    m["Peace"]=9;
    m["Hello"]=8;
    m["War"]=-2;
    cout<<m["Hello"]<<endl; //8
    for(map<string,int>::iterator i=m.begin(); i!=m.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    try{
    cout<<m.at("11111")<<endl;
    }
    catch(const std::out_of_range& e)
    {
        cout << "error: "<<e.what()<<endl; // error: map::at
    }
    cout<<m["11111"]<<endl; //0
    cout<<m.at("11111")<<endl; //0
    // C++11
    map<string, int> m3
        {
            {
                "Dijkstra", 1972
            },
            {
                "Scott", 1976
            },
            {
                "Wilkes", 1967
            },
            {
                "Hamming", 1968
            }
        };
    for(pair<string, int> kv: m3)
    {
        cout << kv.first <<" -> "<< kv.second << endl;
    }


    //system("pause");
    return 0;
}
