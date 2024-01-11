#include <iostream>
#include "Header.h"
using namespace std;

void Birthday::printDate()
{
	cout << day << "/" << month << "/"  << year << endl;
}

int main()
{
	setlocale(LC_ALL, "Ru");
	Birthday Jim(01, 02, 03);
	Jim.printDate();
	return 0;
}

