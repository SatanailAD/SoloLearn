#include <iostream>
#include <string>
using namespace std;

//���� ����� �����. �������� � ������� ��������� ����� ����� �����.
//���� ����� �����.�������� � ������� ������ ����� ����� �����.
//���� ����� �����.�������� � ������� ����� ������ � ��������� ����� ����� �����.

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
    cout << "���� �����: " << num << endl;
    cout << "������ ������: " << firstNumber;
    cout << "��������� ������: " << lastNumber << endl;
    cout << "���������� ��������: " << amountNum << endl;
    cout << "����� ������� � ���������� �����: " << firstNumber + lastNumber << endl;

    return 0;
}


