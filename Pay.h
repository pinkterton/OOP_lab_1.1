#pragma once
class Pay
{
	double first;
	unsigned short second;

public:
	bool Init(double, unsigned short);
	void Read();
	void Display() const;

	double summa() const;
};

