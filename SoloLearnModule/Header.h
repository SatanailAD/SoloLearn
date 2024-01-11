#pragma once

class Birthday {
public:
	Birthday(int d, int m, int y) : day(d), month(m), year(y)
	{
	}
	void printDate();
private:
	int day;
	int month;
	int year;
};