#include <iostream>

using namespace std;

int Fibo (int a)
{
    // 0 1 1 2 3 5 8 13 21 34 55 89 ... 
    //     1 2 3 4 5  6  7  8  9 10
    int fibo_bef = 0;
    int fibo_next = 1;
    int sum = 0;

    cout << "Программа для вычисления чисел Фибоначи"<< endl;
    cout << "Введите число: "<< endl;
    for (int i = 1; i <= a; i++)    
    {        
        if (a == 1) {
            return 1;
        }
        sum = fibo_bef + fibo_next;
        fibo_bef = fibo_next;
        fibo_next = sum;
    }    
    return sum;
}

int main()
{
    int num = 0;
    cin >> num;
    cout << Fibo(num);
    return 0;
}