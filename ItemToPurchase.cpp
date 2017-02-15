#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase()
{
	itemName = "";
	itemPrice = 0;
	itemQuantity = 0;
}


ItemToPurchase::~ItemToPurchase()
{
}

void ItemToPurchase::SetName(string someString)
{
	this-> itemName = someString;
}

string ItemToPurchase::GetName()
{
	return itemName;
}

void ItemToPurchase::SetPrice(int somePrice)
{
	this->itemPrice = somePrice;
}

int ItemToPurchase::GetPrice()
{
	return itemPrice;
}

void ItemToPurchase::SetQuantity(int someQuantity)
{
	this->itemQuantity = someQuantity;
}

int ItemToPurchase::GetQuantity()
{
	return itemQuantity;
}
