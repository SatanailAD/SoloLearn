#include <iostream>
#include <string>
using namespace std;

//Дана строка. Выведите в консоль последний символ строки.

int main() {
    
    string task;
    cout << "Enter ur message: ";
    cin >> task;
    cout << task.length() << endl;
    char last = task[task.length() - 1];
    cout << last << endl;

    return 0;
}


