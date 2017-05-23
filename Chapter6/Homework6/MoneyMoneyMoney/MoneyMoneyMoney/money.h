#pragma once
class Money
{
public:
	int getDollars();
	int getCents();
	void setDollars(int d);
	void setCents(int c);
	double getAmount();
private:
	int dollars;
	int cents;
};