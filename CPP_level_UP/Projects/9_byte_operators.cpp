#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    cout << "Введите число (0-255): ";
    unsigned short inputNum = 0;
    cin >> inputNum;
    bitset<8> inputBits(inputNum);
    cout << inputNum << " в бинарном виде равно " << inputBits << endl;

    cout << "Побитовое HE ~" << endl;
    bitset<8> BitwiseNOT = (~inputNum);
    cout << inputBits << " = " << BitwiseNOT << endl;

    cout << "Логическое И (&) с 00001111" << endl;
    bitset<8> BitwiseAND = (0x0F & inputNum); // OxOF == 0001111
    cout << "0001111 & " << inputBits << " = " << BitwiseAND << endl;

    cout << "Логическое ИЛИ (|) c 00001111" << endl;
    bitset<8> BitwiseOR = (0x0F | inputNum);
    cout << "00001111 | " << inputBits << " = " << BitwiseOR << endl;

    cout << "Логическое XOR (^) c 00001111" << endl;
    bitset<8> BitwiseXOR = (0x0F ^ inputNum);
    cout << "00001111 ^ " << inputBits << " = " << BitwiseXOR << endl;
    return 0;
}

/*
Результат:
Введите число (0-255): 181
181 в бинарном виде равно 10110101
Побитовое НЕ -
-10110101 = 01001010
Логическое И (&) с 00001111
0001111 & 10110101 = 00000101
Логическое ИЛИ (|) с 00001111
00001111 | 10110101 = 10111111
Логическое XOR (^) с 00001111
00001111 ^ 10110101 = 10111010
*/

// ОПЕРАТОРЫ ПОБИТОВОГО СДВИГА
/*
Вот типичный пример применения оператора сдвига для умножения на два:
int doubledValue = Num << 1; // Для удвоения значения биты
// сдвигаются на одну позицию влево
Вот типичный пример применения оператора сдвига для деления на два:
int halvedValue = Num >> 2; // Для деления значения на два биты
// сдвигаются на одну позицию вправо
Использование операторов сдвига для быстрого умножения и деления
целочисленных значений продемонстрировано в листинге 5.8.

*/

#include <iostream>
using namespace std;
int main2()
{
    cout << "Введите число: ";
    int inputNum = 0;
    cin >> inputNum;
    int halfNum = inputNum >> 1;
    cout << "Половина: " << halfNum << endl;

    int quarterNum = inputNum >> 2;
    cout << "Четверть: " << quarterNum << endl;

    int doubleNum = inputNum << 1;
    cout << "Удвоенное: " << doubleNum << endl;

    int quadrupleNum = inputNum << 2;
    cout << "Учетверенное: " << quadrupleNum << endl;
    
    return 0;
}

/*
Результат
Введите число: 16
Четверть: 4
Половина: 8
Удвоенное: 32
Учетверенное: 6
*/
