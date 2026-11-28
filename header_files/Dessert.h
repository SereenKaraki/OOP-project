// Group members:
// Layan Seyam 20250326
// Rania Aldouri 20251148
// Leen Alkaissi 20250775
// Juman Elsayeh 20250068
// Sereen Alkaraki 20250293

#pragma once
#include "Rating.h"
#include "Money.h"

class Dessert {
private:
    bool HasNuts;
    Rating DessertRating;

public:
    Dessert();//default constructor
    Dessert(const bool hasNuts,Rating& DessertRating); //paramterized constructor
    ~Dessert(); //destructor
    //getters
    bool getHasNuts() const;
    Rating getDessertRating() const;
  
    //setters
  
    void setHasNuts(bool HasNuts);
    void setDessertRating(int r);

    Money calculatePrice(int quantity, const Money& Price) const;
};



