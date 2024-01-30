#include <iostream>
#include <string>
using namespace std;

//Проверьте, что это число находится в диапазоне от 1 до 100

int main() {
    
    setlocale(LC_ALL, "Rus");
    int num(100);
    if (num > 0 && num <= 100)
    {
        cout << "OK";
    }
    else
    {
        cout << "Not OK";
    }
    
    return 0;
}


