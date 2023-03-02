#include <iostream>
using namespace std;
int main()
{
int startValue = 101;
cout << "Начальное значение: " << startValue << endl;
int postfixlncrement = startValue++;
cout << "Постфиксный ++ = " << postfixlncrement << endl;
cout << "После постфиксного ++ startValue = "<< startValue << endl;

startValue = 101; // Сброс
int prefixlncrement = ++startValue;
cout << "Префиксный ++ = " << prefixlncrement << endl;
cout << "После префиксного ++ startValue = "<< startValue << endl;

startValue = 101; // Сброс
int postfixDecrement = startValue-- ;
cout << "Постфиксный — = " << postfixDecrement << endl;
cout << "После постфиксного — startValue = "<< startValue << endl;

startValue = 101; // Сброс
int prefixDecrement = --startValue;
cout << "Префиксный — = " << prefixDecrement << endl;
cout << "После префиксного — startValue = "<< startValue << endl;

return 0;
}

/*
Результат
Начальное значение: 101

Префиксный ++ = 101
После постфиксного ++ startValue = 102

Постфиксный ++ = 102
После префиксного ++ startValue = 102

Постфиксный — = 101
После постфиксного — startValue = 100

Префиксный — = 100
После префиксного — startValue = 100

*/