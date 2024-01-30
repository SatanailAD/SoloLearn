#include <iostream>
#include <string>
using namespace std;

//Дано слово. Получите его последнюю букву. Если слово заканчивается на мягкий знак, то получите предпоследнюю букву.

int main() {
    
    setlocale(LC_ALL, "Rus");
    string word;
    cout << "Enter ur word: ";
    getline(cin, word);
    char last = word[word.length() - 1];

    if (last=='m')
    {
        cout << word[word.length() - 2];
    }
    else
    {
        cout << last;
    }

    return 0;
}


