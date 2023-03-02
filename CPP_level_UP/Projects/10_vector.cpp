#include <vector> 
#include <iostream>
using namespace std;
int main()
{
    vector<int> DynArrNums(3); // Динамический массив int'oB
    DynArrNums[0] = 365;
    DynArrNums[1] = -421;
    DynArrNums[2] = 789;
    cout << "Чисел в массиве: " << DynArrNums.size() << endl;
    cout << "Введите новое число для вставки в массив: ";
    int AnotherNum = 0;
    cin >> AnotherNum;
    DynArrNums.push_back(AnotherNum);
    cout << "Чисел в массиве: " << DynArrNums.size() << endl;
    cout << "Последний элемент массива: ";
    cout << DynArrNums[DynArrNums.size() - 1] << endl;
    return 0;
}

/*
Результат
Чисел в массиве: 3
Введите новое число для вставки в массив: 2017
Чисел в массиве: 4
Последний элемент массива: 2017
*/