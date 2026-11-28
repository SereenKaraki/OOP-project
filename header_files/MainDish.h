// Layan Seyam 20250326
// Rania Aldouri 20251148
// Leen Alkaissi 20250775
// Juman Alsayeh 20250068
// Sereen Alkaraki 20250293

#pragma once
#include <string>
using namespace std;

class MainDish {
private:
    string dishName;
    double price;
    bool available;

public:
    MainDish();
    MainDish(string name, double dishPrice, bool isAvailable);

    string getDishName() const;
    double getPrice() const;
    bool isAvailable() const;

    void setDishName(string name);
    void setPrice(double newPrice);
    void setAvailability(bool status);

    void displayDish() const;
};
