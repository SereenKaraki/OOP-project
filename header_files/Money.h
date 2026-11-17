// Group members:
// Layan Seyam 20250326
// Rania Aldouri 20251148
// Leen Alkaissi 20250775
// Juman Elsayeh 20250068
// Sereen Alkaraki 20250293
#pragma once
#include <iostream>
using namespace std;

class Money
{
	int fils;
	string currency;
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
