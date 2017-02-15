/* Michael Bruno, Sec003, Michaelbeneamatobruno@gmail.com
This Program uses objects to create a shopping cart that can have items added and deleted to it. The quantity of an item already
in the shopping cart can also be changed. The user can select these options, or they can select an option to display the
items descriptions or the entire shopping cart. By outputting the entire shopping cart all the quantity and items can be viewed as 
well as the total cost of the shopping cart.
Inputs-
The Program begins by taking a customer name and today's date. It continues by prompting for a user option which can include
a - Add item to cart, d - Remove item from cart, c - Change item quantity, i - Output items' descriptions, o - Output shopping cart, 
q - Quit. If the user selects a they are prompted for an item name, description, quantity, and price. If the user selects d they are
prompted for an item to delete. If the user selects c they are prompted for an item to change quantity and the new quantity. Those
are all the inputs needed.
Outputs-
After the original inputs, The program outputs the customers name and today's date. The a selection simply outputs prompts, as does
the d and c options. The i option outputs all the items with their descriptions. The o option outputs all the items, their
quantity, their price per item, and the price of all of that indivual items. At the very end the o option outputs the total cost of 
the shopping cart.
~~~Test Case 1~~~
Inputs-
Michael Bruno
November 18, 2016
a
yellow apples
apples that are yellow
5
4
o
q
Outputs-
Enter Customer's Name: Michael Bruno

Enter Today's Date: November 18, 2016

Customer Name: Michael Bruno
Today's Date: November 18, 2016
MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: a

ADD ITEM TO CART
Enter the item name: yellow apples

Enter the item description: apples that are yellow

Enter the item price: 5

Enter the item quantity: 4

MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: o

OUTPUT SHOPPING CART
Michael Bruno's Shopping Cart - November 18, 2016
Number of Items: 4
yellow apples 4 @ $5 = $20

Total: $20
MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: q

~~~Test Case 2~~~
Inputs-
Michael Bruno
November 18, 2016
a
yellow apples
apples that are yellow
5
4
a
purple oranges
oranges that are purple
3
4
i
d
purple oranges
o
q
Outputs-
Enter Customer's Name: Michael Bruno

Enter Today's Date: November 18, 2016

Customer Name: Michael Bruno
Today's Date: November 18, 2016
MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: a

ADD ITEM TO CART
Enter the item name: yellow apples

Enter the item description: apples that are yellow

Enter the item price: 5

Enter the item quantity: 4

MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: a

ADD ITEM TO CART
Enter the item name: purple oranges

Enter the item description: oranges that are purple

Enter the item price: 3

Enter the item quantity: 4

MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: i
OUTPUT ITEMS' DESCRIPTIONS
Michael Bruno's Shopping Cart - November 18, 2016

Item Descriptions
yellow apples: apples that are yellow
purple oranges: oranges that are purple
MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: d

REMOVE ITEM FROM CART
Enter name of item to remove: purple oranges

MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: o

OUTPUT SHOPPING CART
Michael Bruno's Shopping Cart - November 18, 2016
Number of Items: 4
yellow apples 4 @ $5 = $20

Total: $20
MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: q

~~~Test Case 3~~~
Inputs-
Michael Bruno
November 18, 2016
o
i
c
red pineapples
3
d
red pineapples
a
red pineapples
pineapples that are red
1
2
c
red pineapples
7
o
q
Outputs-
Enter Customer's Name: Michael Bruno

Enter Today's Date: November 18, 2016

Customer Name: Michael Bruno
Today's Date: November 18, 2016
MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: o

OUTPUT SHOPPING CART
Michael Bruno's Shopping Cart - November 18, 2016
Number of Items: 0

SHOPPING CART IS EMPTY

Total: $0
MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: i
OUTPUT ITEMS' DESCRIPTIONS
Michael Bruno's Shopping Cart - November 18, 2016

Item Descriptions
MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: c

CHANGE ITEM QUANTITY
Enter the item name: red pineapples

Enter the new quantity: 3

Item not found in cart. Nothing modified.
MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: d

REMOVE ITEM FROM CART
Enter name of item to remove: red pineapples

Item not found in cart. Nothing removed.
MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: a

ADD ITEM TO CART
Enter the item name: red pineapples

Enter the item description: pineapples that are red

Enter the item price: 1

Enter the item quantity: 2

MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: c

CHANGE ITEM QUANTITY
Enter the item name: red pineapples

Enter the new quantity: 7

MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: o

OUTPUT SHOPPING CART
Michael Bruno's Shopping Cart - November 18, 2016
Number of Items: 7
red pineapples 7 @ $1 = $7

Total: $7
MENU
a - Add item to cart
d - Remove item from cart
c - Change item quantity
i - Output items' descriptions
o - Output shopping cart
q - Quit

Choose an option: q

*/

#include <iostream>
#include <string>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"

using namespace std;

void AddItem(ShoppingCart &cart) {
	ItemToPurchase addItem;
	string addItemName;
	string addItemDescription;
	int addItemPrice;
	int addItemQuantity;
	cout << endl << "ADD ITEM TO CART";
	cout << endl << "Enter the item name: ";
	cin.ignore();
	getline(cin, addItemName);
	addItem.SetName(addItemName);
	cout << endl << "Enter the item description: ";
	getline(cin, addItemDescription);
	addItem.SetDescription(addItemDescription);
	cout << endl << "Enter the item price: ";
	cin >> addItemPrice;
	addItem.SetPrice(addItemPrice);
	cout << endl << "Enter the item quantity: ";
	cin >> addItemQuantity;
	addItem.SetQuantity(addItemQuantity);
	cart.AddItem(addItem);

}

void RemoveItem(ShoppingCart &cart) {
	string removeItem;

	cout << endl << "REMOVE ITEM FROM CART";
	cout << endl << "Enter name of item to remove: ";
	cin.ignore();
	getline(cin, removeItem);
	cart.RemoveItem(removeItem);
}

void ChangeItemQuantity(ShoppingCart &cart) {
	string changeQuantityItem;
	int changeQuantityNumber;

	cout << endl << "CHANGE ITEM QUANTITY";
	cout << endl << "Enter the item name: ";
	cin.ignore();
	getline(cin, changeQuantityItem);
	cout << endl << "Enter the new quantity: ";
	cin >> changeQuantityNumber;
	cart.UpdateQuantity(changeQuantityItem, changeQuantityNumber);
}

void OutputItemsDescriptions(ShoppingCart cart, string customerName, string todaysDate) {
	cout << "OUTPUT ITEMS' DESCRIPTIONS";
	cout << endl << customerName << "'s Shopping Cart - " << todaysDate;
	cout << endl;
	cart.PrintDescriptions();
}

void OutputShoppingCart(ShoppingCart cart, string customerName, string todaysDate) {
	cout << endl << "OUTPUT SHOPPING CART";
	cout << endl << customerName << "'s Shopping Cart - " << todaysDate;
	cout << endl;
	cart.PrintTotal();
}

void PrintMenu(ShoppingCart cart) {
	string customerName;
	string todaysDate;
	char userOption = '1';

	cout << "Enter Customer's Name: ";
	getline(cin, customerName);
	cout << endl << "Enter Today's Date: ";
	getline(cin, todaysDate);
	cout << endl << "Customer Name: " << customerName;
	cout << endl << "Today's Date: " << todaysDate;

	do {
		cout << endl << "MENU" << endl << "a - Add item to cart" << endl << "d - Remove item from cart" << endl
			<< "c - Change item quantity" << endl << "i - Output items\' descriptions" << endl << "o - Output shopping cart"
			<< endl << "q - Quit" << endl;
		do {
			cout << endl << "Choose an option: ";
			cin >> userOption;
			if (cin.fail()) {
				cin.clear();
				cin.ignore('\n', 1000);
				return;
			}
		} while (userOption != 'a' && userOption != 'd' && userOption != 'c' && userOption != 'i' && userOption != 'o' && userOption != 'q');
		if (userOption == 'a') {
			AddItem(cart);
		}
		else if (userOption == 'd') {
			RemoveItem(cart);
		}
		else if (userOption == 'c') {
			ChangeItemQuantity(cart);
		}
		else if (userOption == 'i') {
			OutputItemsDescriptions(cart, customerName, todaysDate);
		}
		else if (userOption == 'o') {
			OutputShoppingCart(cart, customerName, todaysDate);
		}
	} while (userOption != 'q');
}


int main() {


	ShoppingCart cart;
	PrintMenu(cart);

	return 0;
}