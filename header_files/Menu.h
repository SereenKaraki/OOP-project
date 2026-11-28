// Group Members:
// Name:Layan Seyam          ID: 20250326
// Name:Rania Aldouri        ID: 20251148
// Name:Juman Elsayeh        ID: 20250068
// Name:Sereen Alkaraki      ID: 20250293
// Name:Leen Alkaissi        ID: 20250775
#pragma once
class MenuItem;
class Menu{
private:
	MenuItem** items;
	int capacity;
	int count;
public:
	Menu();
	Menu(int capacity);
	Menu(const Menu& other);
	~Menu();
	bool addItem(MenuItem* item);
	MenuItem* getItem(int position) const;
	int const getCount();
	int const getCapacity();
};


