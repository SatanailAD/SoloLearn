#include <iostream>
#include "Header.h"
#include <string>
using namespace std;

void Birthday::printDate()
{
	cout << day << "/" << month << "/"  << year << endl;
}

class Person {
public:
	Person(string n, Birthday b) : name(n), bd(b)
	{
	}
	void printInfo()
	{
		cout << name << endl;
		bd.printDate();
	}
private:
	string name;
	Birthday bd;
};

int main()
{
	setlocale(LC_ALL, "Ru");
	Birthday bd(2, 21, 1985);
	Person p("David", bd);
	p.printInfo();
	return 0;
}

