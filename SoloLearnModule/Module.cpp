#include <iostream>
#include <string>
using namespace std;

//Дана строка. Выведите в консоль длину этой строки.

int main() {
    
    string task;
    cout << "Enter ur message: ";
    cin >> task;
    cout << task.length() << endl;
    return 0;
}


