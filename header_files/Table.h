~~~Cpp~~~
//Table.h
#pragma once
#ifndef TABLE_H
#define TABLE_H

// Group Members:
// Name:Layan Seyam          ID: 20250326
// Name:Rania Aldouri        ID: 20251148
// Name:Juman Elsayeh        ID: 20250068
// Name:Sereen Alkaraki      ID: 20250293
// Name:Leen Alkaissi        ID: 20250775

class Table
{
private:
	int tableNumber;
	int seatCapacity;
	int currentGroupSize;
	int orderQuantities[50];
	bool occupied;
	bool hasBeenUsed;

public:
	Table();
	Table(int number, int seats);
	bool seatGroup(int groupSize);
	bool addOrder(int position, int quantity);
	void clearAfterPayment();
	int getTableNumber()const;
	int GetSeatCapacity()const;
	int getCurrentGroupSize()const;
	int getOrderQuantity(int position) const;
	bool isOccupied()const;
	bool wasUsed()const;
};
#endif
