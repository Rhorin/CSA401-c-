#include "money.h"

int Money::getDollars()
{
	return dollars;
}

int Money::getCents()
{
	return cents;
}

void Money::setDollars(int d)
{
	dollars = d;
}

void Money::setCents(int c)
{
	cents = c;
}

double Money::getAmount()
{
	return static_cast<double>(dollars) + static_cast<double>(cents) /100;
}