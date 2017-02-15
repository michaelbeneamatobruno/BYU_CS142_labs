/* Michael Bruno, Sec003, Michaelbeneamatobruno@gmail.com
This program calculates the number of large, medium, and small pizzas that would need to be ordered based upon the number of people
attending a BYUSA event, it then calculates the number of square inches that would be ordered and how many square inches that would
be per person. Finally, the program calculates how much the event would cost(rounded to the nearest dollar) based upon the pizza
price and the price of the tip.
The program has two inputs. The first is the number of guests attending and the second is the tip percentage.
The outputs are 1) number of large, medium and small pizzas 2) total number of square inches of pizza and square inches per guest
and 3) total cost of event.
~~~~~Test Cases;
Test Case 1:
Inputs: Guests = 200, tip = 15
output: 28 large pizzas, 1 medium pizzas, and 1 small pizzas will be needed.
A total of 9110.61 square inches of pizza will be purchased (45.5531  per guest).
Please enter the tip as a percentage (i.e. 10 means 10%):
The total cost of the event will be: $494
Inputs: Guests = 7, tip = 20
Ouput:1 large pizzas, 0 medium pizzas, and 0 small pizzas will be needed.
A total of 314.159 square inches of pizza will be purchased (44.8799  per guest).
Please enter the tip as a percentage (i.e. 10 means 10%):
The total cost of the event will be: $18
Inputs: Guests = 0, tip = 0
Output: 0 large pizzas, 0 medium pizzas, and 0 small pizzas will be needed.
A total of 0 square inches of pizza will be purchased (-nan  per guest).
Please enter the tip as a percentage (i.e. 10 means 10%):
The total cost of the event will be: $0
*/

#include <iostream>
#include <string>     // Supports use of "string" data type
using namespace std;


int main() {
	int numGuests = 0;
	int largePizzasNeeded = 0;
	int mediumPizzasNeeded = 0;
	int smallPizzasNeeded = 0;
	int tipPercentage = 0;
	int totalCost = 0;
	double areaOfOneLargePizza = 0.00;
	double areaOfOneMediumPizza = 0.00;
	double areaOfOneSmallPizza = 0.00;
	double squareInchesOfPizzaPurchased = 0.00;
	double squareInchesOfPizzaPerGuest = 0.00;
	double pizzaCost = 0.00;
	double tipCost = 0.00;
	const int radiusOfLargePizza = 10;
	const int radiusOfMediumPizza = 8;
	const int radiusOfSmallPizza = 6; // all diameters in inches
	const double PI = 3.14159;
	const double priceLargePizza = 14.68;
	const double priceMediumPizza = 11.48;
	const double priceSmallPizza = 7.28; // all prices in $$$ dollars
										 // find the area of each pizza size
	areaOfOneLargePizza = PI * radiusOfLargePizza * radiusOfLargePizza;
	areaOfOneMediumPizza = PI * radiusOfMediumPizza * radiusOfMediumPizza;
	areaOfOneSmallPizza = PI * radiusOfSmallPizza * radiusOfSmallPizza;
	// ~~~ Part one
	cout << "Please enter the number of guests: ";
	cin >> numGuests;
	cout << endl << endl;
	largePizzasNeeded = numGuests / 7;
	mediumPizzasNeeded = (numGuests % 7) / 3;
	smallPizzasNeeded = (numGuests % 7) % 3;
	cout << largePizzasNeeded << " large pizzas, ";
	cout << mediumPizzasNeeded << " medium pizzas, and ";
	cout << smallPizzasNeeded << " small pizzas will be needed." << endl << endl;
	// ~~~ Part two
	squareInchesOfPizzaPurchased = (largePizzasNeeded * areaOfOneLargePizza) + (mediumPizzasNeeded * areaOfOneMediumPizza) +
		(smallPizzasNeeded * areaOfOneSmallPizza);
	squareInchesOfPizzaPerGuest = squareInchesOfPizzaPurchased / numGuests;
	cout << "A total of " << squareInchesOfPizzaPurchased << " square inches of pizza will be purchased (" <<
		squareInchesOfPizzaPerGuest << "  per guest)." << endl << endl;
	// ~~~ Part three
	cout << "Please enter the tip as a percentage (i.e. 10 means 10%): ";
	cin >> tipPercentage;
	cout << endl << endl << endl;
	pizzaCost = (largePizzasNeeded * priceLargePizza) + (mediumPizzasNeeded * priceMediumPizza) + (smallPizzasNeeded * priceSmallPizza);
	tipCost = pizzaCost * (tipPercentage / 100.0); // tip percentage is divided by 100.0 to make it a easy to multiply decimal
	totalCost = pizzaCost + tipCost + 0.5; // 0.5 is the rounding trick explained in the notes
	cout << "The total cost of the event will be: $" << totalCost << endl;

	system("pause");
	return 0;
}
