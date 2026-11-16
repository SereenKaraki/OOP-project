#pragma once
#include <iostream>
using namespace std;

class Money
{
	int fils;
public:
	Money(int dinars_ = 0, int fils = 0);
	Money(const Money& source); 
	~Money();

	void setDinars(int dinars_);
	void setFils(int fills_);

	int getDinars()const;
	int getFils()const;

	Money Addition(const Money& source);
	Money Subtraction(const Money& source);

	Money compareTo(const Money& source);

	void printMoney()const;
};