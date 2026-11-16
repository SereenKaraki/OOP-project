// Group members:
// Layan Seyam 20250326
// Rania Aldouri 20251148
// Leen Alkaissi 20250775
// Juman Elsayeh 20250068
// Sereen Alkaraki 20250293

#pragma once
#ifndef DESSERT_H
#define DESSERT_H
#include "Rating.h"
#include "Money.h"

class Dessert {
private:
    std::string DessertName;
    bool HasNuts;
    Money price;
    Rating DessertRating;
public:
    Dessert();//default constructor
    Dessert(const std::string& DessertName,bool hasNuts,Rating& DessertRating,Money price); //paramterized constructor
    ~Dessert(); //destructor
    //getters
    std::string getDessertName();
    bool getHasNuts() const;
    Rating getDessertRating() const;
    Money getPrice()const;
    //setters
    void setDessertName(std::string& DessertName);
    void setPrice(Money price);
    void setHasNuts(bool HasNuts);
    void setDessertRating(int r);
    Money calculatePrice(int quantity, const Money& basePrice) const;
};

#endif

