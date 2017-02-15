#include <iostream>
#include <string>
#include "ItemToPurchase.h"

using namespace std;


int main() {
	string itemName;
	int itemPrice;
	int itemQuantity;

	cout << "Item 1" << endl << "Enter the item name: ";
	getline(cin, itemName);
	cout << endl << "Enter the item price: "; 
	cin >> itemPrice;
	cout << endl << "Enter the item quantity: ";
	cin >> itemQuantity;
	ItemToPurchase item1;
	item1.SetName(itemName);
	item1.SetPrice(itemPrice);
	item1.SetQuantity(itemQuantity);

	cout << "Item 2" << endl << "Enter the item name: ";
	cin.clear();
	cin.ignore();
	getline(cin, itemName);
	cout << endl << "Enter the item price: ";
	cin >> itemPrice;
	cout << endl << "Enter the item quantity: ";
	cin >> itemQuantity;
	ItemToPurchase item2;
	item2.SetName(itemName);
	item2.SetPrice(itemPrice);
	item2.SetQuantity(itemQuantity);

	cout << endl << "TOTAL COST";
	cout << endl << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1.GetQuantity() * item1.GetPrice();
	cout << endl << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2.GetQuantity() * item2.GetPrice();
	cout << endl << "Total: $" << (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity());

	return 0;
}
