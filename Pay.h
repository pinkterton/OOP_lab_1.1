#pragma once
class Pay
{
private:
	double first;
	unsigned short second;

public:
	double GetFirst() const { return first; };
	unsigned short GetSecond() const { return second; };
	void SetFirst(double salary);
	void SetSecond(unsigned short days_worked);

	bool Init(double, unsigned short);
	void Read();
	void Display() const;

	double summa() const;
};

