// ����������� ��������� � ���������

// ���������� �����-������ cin � cout
#include <iostream> 

// ���������� ����������� ������� � ��������� system
#include <stdlib.h> 

// ���������� �������������� �������
#include <math.h> 

// ������� ��� ������������� ����������� ������ cin � cout
using namespace std;

// ������� ������� ���������, ������ ��� ��������� ���,
// ������� ����� ����������� ��� �������
int main()
{
    float a; // ���������� ���������� a ��������������� ����
    float b; // ���������� ���������� b ��������������� ����


    // ����������� ������ a
    cout<<"a=? ";

    // ���� ���������� a � �������
    cin>>a;

    // ���������� ����������� �����
    // � ���������� ��� �������� ���������� sa
    float sa = sqrt(a);

    // sqrt(a) - ����� ������� sqrt � ���������� a

    // ����� ��������� "sqrt(a)=", �������� �����, �
    // ������� ����� ������ ����� ��������
    cout<<"sqrt(a)="<<sa<<endl;

    // ����������� ������ b
    cout<<"b=? ";
    // ���� ���������� b � �������
    cin>>b;
    
    // ���������� � b, �� ��� ������������� �������������
    // ����������
    cout<<"sqrt(b)="<<sqrt(b)<<endl;


    float p;
    
    // ����� ������� pow(���������� a � ������� b)
    // � ����� ����������� a � b
    p = pow(a,b); 

    cout<<"b-th power of a is "<<p<<endl;


    // ����� �� ������� ������� ����� ������
    cout<<endl;

    // �������� ������� ������� �������������
    system("pause");

    return 0;
}


