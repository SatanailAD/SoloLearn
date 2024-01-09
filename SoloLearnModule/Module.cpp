#include <iostream>
#include "Header.h"
using namespace std;

MyClass::MyClass()
{
	cout << "Constructor" << endl;
}

MyClass::~MyClass()
{
	cout << "Destructor" << endl;
}

int main()
{
	setlocale(LC_ALL, "Ru");
	MyClass q;

	return 0;
}

