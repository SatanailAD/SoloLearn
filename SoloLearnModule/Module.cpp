#include <iostream>
#include "Header.h"
#include <string>
using namespace std;

void MyClass::myPrint() const
{
	cout << "Hello const";
}

int main() {
	setlocale(LC_ALL, "Rus");
	const MyClass q;
	q.myPrint();
}