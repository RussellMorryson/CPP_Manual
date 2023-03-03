#include <iostream>
using namespace std;
int main()
{
    char userSelection = 'x'; // Исходное значение
    do
    {
        cout << "Введите два целых числа: " << endl;
        int numl = 0, num2 = 0;
        cin >> numl;
        cin >> num2;
        cout << numl << "x" << num2 << " = " << numl * num2 << endl;
        cout << numl << "+" << num2 << " = " << numl + num2 << endl;
        cout << "'х' для выхода, иное для повтора" << endl;
        cin >> userSelection;
    } while (userSelection != 'x');
    cout << "До свидания!" << endl;
    return 0;
}