#include <iostream>
#include <string>
using namespace std;

//������������ ����� � ������:

int main() {
    
    setlocale(LC_ALL, "Rus");
    int num(123);
    string mes{to_string(num)};
    cout << mes;
    return 0;
}


