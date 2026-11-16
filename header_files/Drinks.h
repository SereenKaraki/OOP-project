//Group members:
// Layan Seyam 20250326
// Rania Aldouri 20251148
// Leen Alkaissi 20250775
// Juman Alsayeh 20250068
// Sereen Alkaraki 20250293

#pragma once
#ifndef DRINK_H
#define DRINK_H
#include "Money.h"

class Drink {
private:
	std::string DrinkName;
	char size;
	std::string temperature;
	int calories;
	Money price;

public:
	Drink(); //default constructor
	Drink(const std::string& DrinkName,char size, const std::string& temperature, int calories,Money price); //paramterized constructor
	~Drink(); //destructor
	//getters
	std::string getDrinkName()const;
	std::string getTemperature() const;
	Money getPrice()const;
	char getSize() const;
	int getCalories() const;
	//setters
	void setDrinkName(std::string& DrinkName);
	void setSize(char size);
	void setTemperature(std::string& temperature);
	void setCalories(int calories);
	void setPrice(Money price);

	Money calculatePrice(int quantity, const Money& basePrice) const;

};

#endif
