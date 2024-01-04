#include <iostream>
using namespace std;

class MyClass {
private:
	int var;

public:

	MyClass() {}
	MyClass(int a) : var(a) {}
	
	friend MyClass operator+(MyClass& a1, MyClass& a2)
	{
		MyClass res;
		res.var = a1.var + a2.var;
		return res;
	}
	
	int getVar()
	{
		return var;
	}


};


int main()
{
	setlocale(LC_ALL, "Ru");

	MyClass a1(12), a2(13);
	MyClass res = (a1 + a2);
	MyClass res;
	cout << res.getVar();

	return 0;
}

// Добавление комментария