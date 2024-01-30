#include <iostream>
#include <string>
using namespace std;

//Даны два слова. Проверьте, что первые буквы этих слов совпадают.

int main() {
    
    setlocale(LC_ALL, "Rus");
    string wordOne, wordTwo;
    cout << "Enter ur wordOne: ";
    cin >> wordOne;
    cout << "Enter ur wordTwo: ";
    cin >> wordTwo;
    char firstOne = wordOne[0];
    char firstTwo = wordTwo[0];
    if (firstOne == firstTwo)
    {
        cout << "Первые символы равны";
    }
    else
    {
            cout << "Первые символы НЕ равны";  
    }

    return 0;
}


