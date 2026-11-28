// Group members:
// Layan Seyam 20250326
// Rania Aldouri 20251148
// Leen Alkaissi 20250775
// Juman Elsayeh 20250068
// Sereen Alkaraki 20250293
#pragma once
#include "Money.h"
#include <string>

class MenuItem {
private:
    char ItemName[51]; //extra char for the null char
    char *description;
    Money price;
    int itemStock;
    const int itemCode;
    static int nextCode;

public:
    //constructors
    MenuItem();
    MenuItem(Money p, int is, const int ic);
    MenuItem(const MenuItem& other);
    ~MenuItem();

    //setters
    void setPrice(Money p);
    void setItemStock(int i);
    
    //getters
    Money getPrice()const;
    int getItemStock()const;
    int getItemCode()const;


};
