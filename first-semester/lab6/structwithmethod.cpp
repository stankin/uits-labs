
#include <stdlib.h>
#include <iostream>

using namespace std;

struct Person
{
    char* name;
    char* surname;
    int age;

//    void print()
//    {
//        cout << "name: " << this->name << " surname: " << this->surname <<
//                " age: " << this->age << endl;
//    }

    void print()
    {
        cout << "name: " << name << " surname: " << surname <<
                " age: " << age << endl;
    }
};

int main()
{
    Person v;
    v.name = "Vasia";
    v.surname = "Ivanov";
    v.age = 25;

    v.print();

    Person a;

    Person* ptr = &a;

    (*ptr).name = "Petia";
    ptr->surname = "Ivanov";
    ptr->age = 12;

    ptr->print();   

    return 0;
}


