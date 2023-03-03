#include <iostream>
using namespace std;
int main()
{
    const int numsToCalculate = 5;
    cout << "Вычисление no " << numsToCalculate << " чисел Фибоначчи" << endl;
    int numl = 0, num2 = 1;
    char wantMore = '\0';
    cout << numl << " " << num2 << " ";
    do
    {
        for (int counter = 0; counter < numsToCalculate; ++counter)
        {
            cout << numl + num2 << " ";
            int num2Temp = num2;
            num2 = numl + num2;
            numl = num2Temp;
        }
        cout << endl
             << "Продолжать (у/n)? ";
        cin >> wantMore;
    
    } while(wantMore == 'y');
        cout << "До свидания!" << endl;
    return 0;
}