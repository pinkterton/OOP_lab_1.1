#include "Pay.h"
#include <iostream>

using namespace std;

bool Pay::Init(double salary, unsigned short days_worked)
{
	if (salary >= 0 && days_worked < 21)
	{
		first = salary;
		second = days_worked;
		return true;
	}
	else
		return false;
}

void Pay::Read()
{
	double salary;
	unsigned short days_worked;
	
	do
	{
		cout << "Input information: " << endl << endl;
		cout << " Salary = "; cin >> salary;
		cout << " Days worked = "; cin >> days_worked;
	
	} while (!Init(salary, days_worked));
}

void Pay::Display() const
{
	cout << endl;
	cout << " Salary = " << first << endl;
	cout << " Days worked = " << second << endl;
}

double Pay::summa() const
{
	return first / 20 * second;
}
