#pragma once
#include <string>

using namespace std;

class ItemToPurchase
{
private:

	string itemName;
	int itemPrice;
	int itemQuantity;

public:
	ItemToPurchase();
	~ItemToPurchase();


	void SetName(string someString);
	string GetName();
	void SetPrice(int somePrice);
	int GetPrice();
	void SetQuantity(int someQuantity);
	int GetQuantity();



};

