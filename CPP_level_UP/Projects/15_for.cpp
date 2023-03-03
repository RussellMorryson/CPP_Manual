#include <iostream>
using namespace std;
int main()
{
    // Без выражения изменения (третье выражение пропущено)
    for (char userSelection = 'm'; (userSelection != 'x');)
    {
        cout << "Введите два целых числа: " << endl;
        int numl = 0, num2 = 0;
        cin >> numl;
        cin >> num2;
        cout << numl << "x" << num2 << " = " << numl * num2 << endl;
        cout << numl << "+" << num2 << " = " << numl + num2 << endl;
        cout << "'x' для выхода, иное для повтора" << endl;
        cin >> userSelection;
    }
    cout << "До свидания!" << endl;
    return 0;
}


void other(){
int someNums[] = {1, 101, -1, 40, 2040};
cout << "Элементами массива являются:" << endl;
for (int aNum : someNums) // Цикл for для диапазона
    cout << aNum << endl;
}
