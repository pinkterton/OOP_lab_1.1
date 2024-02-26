#pragma once
class Pay
{
private:
	double first;
	unsigned short second;

public:
	bool Init(double, unsigned short);
	void Read();
	void Display();

	double summa() const;
};

