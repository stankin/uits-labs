#include <stdlib.h>
#include <iostream>

using namespace std;

struct Person{
    char* name;
    char* surname;
    int age;
};

void printPerson(Person p)
{
    cout<<"name: "<<p.name<<" surname: "<< p.surname <<
            " age: "<<p.age<<endl;
}

int main()
{
    Person v;
    v.name = "Vasia";
    v.surname = "Ivanov";
    v.age = 25;

    printPerson(v);

    Person a;

    Person* ptr = &a;

    (*ptr).name = "Petia";
    ptr->surname = "Ivanov";
    ptr->age = 12;

    printPerson(*ptr);
    //printPerson(a);

    return 0;
}


