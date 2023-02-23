/* Язык C++ позволяет переименовывать типы переменных так, 
как вам кажется более удобным. Для этого используется ключевое 
слово ty p ed ef. Например, программист хочет назначить 
типу u n sig n ed i n t более описательное имя STRICTLY_POSITIVE_INTEGER.
*/

typedef unsigned int STRICTLY_POSITIVE_INTEGER;
STRICTLY_POSITIVE_INTEGER numEggsInBasket = 4532;

/*
При компиляции первая строка указывает компилятору, что STRICLY_POSITIVE_ 
INTEGER — это не что иное, как тип u nsigned in t. Впоследствии, когда компилятор
встречает уже определенный тип STRICLY_POSITIVE_INTEGER, он заменяет его типом
unsigned i n t и продолжает компиляцию.
*/
