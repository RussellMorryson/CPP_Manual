#include <iostream>
#include <string>
using namespace std;
int main()
{
    string greetString("Hello std::string!");
    cout << greetString << endl;
    cout << "Введите текстовую строку: " << endl;
    string firstLine;
    getline(cin, firstLine);
    cout << "Введите другую строку: " << endl;
    string secondLine;
    getline(cin, secondLine);
    cout << "Результат конкатенации: " << endl;
    string concatString = firstLine + " " + secondLine;
    cout << concatString << endl;
    cout << "Копия полученной строки: " << endl;
    string aCopy;
    aCopy = concatString;
    cout << aCopy << endl;
    cout << "Длина строки: " << concatString.length() << endl;
    return 0;
}

/*
cout « "Hello \
World" « endl; // Разделение строки на две вполне допустимо
Еще один способ разместить приведенную выше инструкцию в двух строках —
это использовать два строковых литерала вместо одного:
cout « "Hello "
"World" « endl; // Два строковых литерала подряд вполне допустимы
*/