// Group members:
// Layan Seyam 20250326
// Rania Aldouri 20251148
// Leen Alkaissi 20250775
// Juman Elsayeh 20250068
// Sereen Alkaraki 20250293
#pragma once

class Money
{
	int fils;
public:
	Money(int fils = 0);
	Money(const Money& source); 
	~Money();

	void setDinars(int dinars_);
	void setFils(int fills_);

	int getDinars()const;
	int getFils()const;

	Money Addition(const Money& source)const;
	Money Subtraction(const Money& source)const;
	Money Multiplication(const Money& source,int quantity)const;
	int compareTo(const Money& source)const;

	void printMoney()const;
};
