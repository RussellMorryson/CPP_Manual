#include <iostream>
using namespace std;
int main()
{
    for (;;) // Бесконечный цикл
    {
        cout << "Введите два целых числа: " << endl;
        int numl = 0, num2 = 0;
        cin >> numl;
        cin >> num2;
        cout << "Вы хотите исправить ввод? (y/n): ";
        char changeNumbers = '\0'; cin >> changeNumbers;
        if (changeNumbers = 'y')
            continue; // Перезапуск цикла!
        cout << numl << "x" << num2 << " = " << numl * num2 << endl;
        cout << numl << "+" << num2 << " = " << numl + num2 << endl;
        cout << "'x' для выхода, иное для повтора" << endl; 
        char userSelection = '\0'; cin >> userSelection;
        if (userSelection == 'x')
            break; // Выход из бесконечного цикла
    }
    cout << "До свидания!" << endl;
    return 0;
}
