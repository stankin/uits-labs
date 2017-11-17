#include <string>
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
    //Создание строк
    string s1;
    cout << s1.size() << endl; // 0
    //cin >> s1;
    s1 = "sdfg";
    cout << s1.size() << endl; //     4
    string s2("ABC");
    cout << s2 << endl<< endl;
    //ABC
    char csrt[] = "hello world";
    string s3(csrt);
    s3[0] = '4';
    cout << s3 << endl<< endl;
    // 4ello world
    //получение подстроки
    string s4(s3, 0, 5);
    cout << s4 << endl;
    cout << s3.substr(6, s3.size() - 1) << endl<< endl;
    //4ello
    //world
    //конкантенация
    string s5;
    s5 = s4 + ", " + s3;
    cout << s5 << endl<< endl;
    //4ello, 4ello world
    //Расширение
    string s6 = "AAAbbbCCC";
    s6 + "ddd";
    cout << s6 << endl; // не изменилась
    //AAAbbbCCC
    s6.append("ddd");
    cout << s6 << endl; //изменилась
     //AAAbbbCCCddd
    s6+="ddd";
    cout << s6 << endl<< endl; //изменилась
    //AAAbbbCCCdddddd
    //Емкость
    string s7 = "Cat";
    cout << s7 << " size=" << s7.size() << " capasity=" << s7.capacity() << endl;
    //    Cat size=3 capasity=3
    s7.append(" and Dog");
    cout << s7 << " size=" << s7.size() << " capasity=" << s7.capacity() << endl;
    //    Cat and Dog size=11 capasity=11
    //Замена
    string stringToReplace = " and";
    int pos = s7.find(stringToReplace);
    s7.replace(pos, stringToReplace.size(), ",");
    cout << s7 << " size=" << s7.size() << " capasity=" << s7.capacity() << endl;
    //    Cat, Dog size=8 capasity=11
    s7.append("!");
    cout << s7 << " size=" << s7.size() << " capasity=" << s7.capacity() << endl;
    //    Cat, Dog! size=9 capasity=11
    //Резервирование
    s7.reserve(50);
    cout << s7 << " size=" << s7.size() << " capasity=" << s7.capacity() << endl<< endl;
    //    Cat, Dog! size=9 capasity=50
    for(int i=0; i<20; i++)
    {
        s7.append("!");
    }
    cout << s7 << " size=" << s7.size() << " capasity=" << s7.capacity() << endl<< endl;
    //    Cat, Dog!!!!!!!!!!!!!!!!!!!!! size=29 capasity=50
    s7.begin();
    for(int i=0; i<3; i++)
    {
        cout << s7[i] << endl;
    }
    //    C
    //    a
    //    t
    cout<< endl;
    //Сравнение
    string s8,s9;
    cin>>s8>>s9;
    if(s8==s9)
    {
        cout<<"equal"<<endl;
    }
    else
    {
        cout<<"not equal"<<endl;
    }
    //system("pause");
    cin.get();
    return 0;
}
void prinstString(const string& str){
    cout << str << endl;
}
prinstString("asss");
