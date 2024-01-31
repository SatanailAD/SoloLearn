#include <iostream>
#include <string>
using namespace std;

//Дано целое число. Выведите в консоль последнюю цифру этого числа.
//Дано целое число.Выведите в консоль первую цифру этого числа.
//Дано целое число.Выведите в консоль сумму первой и последней цифры этого числа.

int main() {
    
    setlocale(LC_ALL, "Rus");
    int num;
    int firstNumber, lastNumber;
    int amountNum = 0;
    cout << "Etner a number: ";
    cin >> num;
    int tempNum = num;
    while (tempNum != 0)
    {
        firstNumber = tempNum % 10;
        tempNum /= 10;
        amountNum++;
    }
    lastNumber = num % 10;
    cout << "Ваше число: " << num << endl;
    cout << "Первый символ: " << firstNumber;
    cout << "Последний символ: " << lastNumber << endl;
    cout << "Количество символов: " << amountNum << endl;
    cout << "Сумма первого и последнего числа: " << firstNumber + lastNumber << endl;

    return 0;
}


