#include <iostream>
#include <string>
using namespace std;

//���� ��� �����. ���������, ��� ������ ����� ���� ���� ���������.

int main() {
    
    setlocale(LC_ALL, "Rus");
    string wordOne, wordTwo;
    cout << "Enter ur wordOne: ";
    getline(cin, wordOne);
    cout << "Enter ur wordTwo: ";
    getline(cin, wordTwo);
    char firstOne = wordOne[0];
    char firstTwo = wordTwo[0];
    if (firstOne == firstTwo)
    {
        cout << "������ ������� �����";
    }
    else
    {
            cout << "������ ������� �� �����";  
    }

    return 0;
}


