#include <iostream>
#include <string>
using namespace std;

//���� �����. �������� ��� ��������� �����. ���� ����� ������������� �� ������ ����, �� �������� ������������� �����.

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


