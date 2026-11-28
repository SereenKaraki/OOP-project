//Group members:
// Layan Seyam 20250326
// Rania Aldouri 20251148
// Leen Alkaissi 20250775
// Juman Alsayeh 20250068
// Sereen Alkaraki 20250293
#pragma once
#include "Money.h"

class Drink {
private:
	char size;
	std::string temperature;
public:
	Drink(); //default constructor
	Drink(char size, const std::string& temperature); //paramterized constructor
	~Drink(); //destructor
	//getters
	std::string getTemperature() const;
	char getSize() const;
	//setters
	void setSize(char size);
	void setTemperature(std::string& temperature);
	

};


