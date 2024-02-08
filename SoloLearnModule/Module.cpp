#include <iostream>
#include "Header.h"
#include <string>
using namespace std;

MyClass::MyClass()
{
	cout << "Hello";
}

int main() {
	setlocale(LC_ALL, "Rus");
	MyClass q;
}