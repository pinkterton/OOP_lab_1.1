#include <iostream>
#include "Pay.h"

using namespace std;

Pay makePay(double first, unsigned short second) 
{
	Pay a;
	if (!a.Init(first, second))
		cout << "Wrong information to Init!" << endl;

	return a;
}

int main()
{
	Pay a;
	a.Read();
	a.Display();
	cout << " Summa = " << a.summa() << endl << endl;

	double first;
	unsigned short second;
	cout << "Input information: " << endl;
	cout << " Salary = "; cin >> first;
	cout << " Days worked = "; cin >> second;
	a = makePay(first, second);
	a.Display();
	cout << "Summa = " << a.summa() << endl << endl;

	return 0;
}