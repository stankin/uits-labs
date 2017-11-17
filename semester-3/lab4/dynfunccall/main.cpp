//#include <windows.h>


#include <iostream>
#include <QLibrary>
#include <cstdlib>

//#include <dlfcn.h>

using namespace std;

typedef int (*sumfuncPointer)(int, int) ;

int main(int argc, char *argv[])
{


    //    HMODULE testdll = LoadLibrary(L"dynfunctions.dll") ;
    //    cout<<testdll<<endl;

    //    sumfuncPointer pfunk = (sumfuncPointer)GetProcAddress(testdll, "dynsym") ;
    //    cout<<pfunk<<endl;

    //    cout<<(*pfunk)(5,3)<<endl;

    //    FreeLibrary(testdll) ;

    //    void* testdll = dlopen("./debug/libdynfunctions.so", RTLD_LAZY);

    //    cout<<testdll<<endl;

    //    sumfuncPointer pfunk = (sumfuncPointer)dlsym(testdll,"dynsym");


    //    cout<<pfunk<<endl;

    //    cout<<(*pfunk)(5,4)<<endl;


    //QLibrary lib("/home/nickl/biotecnical/forStudents/uits-labs/edu-modern-cpp/linking/dynfunctions/libdynfunctions.so");
    QLibrary lib("/home/nickl/libSmartText.so");


    cout<<lib.load()<<endl;

    sumfuncPointer pfunk = (sumfuncPointer)lib.resolve("dynsym");

    cout<<pfunk<<endl;

    cout<<(*pfunk)(5,3)<<endl;

    system("pause");

    return 0;
}
