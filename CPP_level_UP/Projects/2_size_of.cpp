#include <iostream>
int main()
{
    using namespace std;
    cout << "Размеры некоторых встроенных типов C++" << endl;
    cout << "bool : " << sizeof(bool) << endl;
    cout << "char : " << sizeof(char) << endl;
    cout << "unsigned short int: " << sizeof(unsigned short) << endl;
    cout << "short int : " << sizeof(short) << endl;
    cout << "unsigned long int : " << sizeof(unsigned long) << endl;
    cout << "long : " << sizeof(long) << endl;
    cout << "int : " << sizeof(int) << endl;
    cout << "unsigned long long: " << sizeof(unsigned long long) << endl;
    cout << "long long : " << sizeof(long long) << endl;
    cout << "unsigned int : " << sizeof(unsigned int) << endl;
    cout << "float : " << sizeof(float) << endl;
    cout << "double : " << sizeof(double) << endl;
    cout << "Вывод зависит от компилятора, компьютера и ОС" << endl;
    return 0;
}

/*
Размеры некоторых встроенных типов C++
bool : 1
char : 1
unsigned short int: 2
short int : 2
unsigned long int : 4
long : 4
int : 4
unsigned long long: 8
long long : 8
unsigned int : 4
float : 4
double : 8
Вывод зависит от компилятора, компьютера и ОС
*/
