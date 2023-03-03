#include <iostream>
using namespace std;
int main()
{
Start:
    int numl = 0, num2 = 0;
    cout << "Введите два целых числа: " << endl;
    cin >> numl;
    cin >> num2;
    cout << numl << "x" << num2 << " = " << numl * num2 << endl;
    cout << numl << "+" << num2 << " = " << numl + num2 << endl;
    cout << "Еще раз (y/n)?" << endl;
    char Repeat = 'у';
    cin >> Repeat;
    if (Repeat == 'у')
        goto Start;
    cout << "До свидания!" << endl;
    return 0;
}