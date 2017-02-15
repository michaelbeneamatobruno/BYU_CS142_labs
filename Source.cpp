/*Michael Bruno, Sec003, Michaelbeneamatobruno@gmail.com
This Program has 6 different options. It's ultimate purpose is to select a restaurant from the choices input
and to select a winner.
The Inputs depend on the function chosen. There is always a userSelection 1-6 that is errorchecked,
for the first function no other input is needed. For the Second Function a prompt is given for
a string(restaurant). The third function acts in the same way as the second. The fourth function takes only
a number that cuts the deck at that number. The number is errorchecked to make sure that the 
number is smaller than the amount of verticies in the vector. The fifth takes no inputs. The sixth takes a choice
(0 or 1).
The outputs of the function also depend on the userSelection. If 1 is selected then the list of restaurants is output,
if 2 is chosen then a prompt is given and the user inputs a new restaurant. If three is selected then a prompt is given
and the user inputs a restaurant to be deleted. These programs error check to see if the restaurant is not already
in the program or if the program isn't in the list. If there's a problem, it gives an error message. The 4th function 
cuts the list at a number and puts them at the end. No ouput is given. The 5th shuffles the deck, but again no error is
given. The 6th outputs the winning restaurant.
Test Cases
~~~~Inputs 1-
45
2
orange
2
yellow
4
1
1
5
1
0
~~~~Outputs 1-
Welcome to the restaurant battle!


Please select one of the following options:

0 - Quit the program
1 - Display all restaurants2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 45

INVALID SELECTION. Please try again.

Please select one of the following options:

0 - Quit the program
1 - Display all restaurants2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 2

What is the name of the restaurant you want to add? orange

orange has been added.

Please select one of the following options:

0 - Quit the program
1 - Display all restaurants2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 2

What is the name of the restaurant you want to add? yellow

yellow has been added.

Please select one of the following options:

0 - Quit the program
1 - Display all restaurants2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 4
How many restaurants should be taken from the top and put on the bottom? 1


Please select one of the following options:

0 - Quit the program
1 - Display all restaurants2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 1
Here are the current restaurants:
"yellow"
"orange"


Please select one of the following options:

0 - Quit the program
1 - Display all restaurants2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 5


Please select one of the following options:

0 - Quit the program
1 - Display all restaurants2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 1
Here are the current restaurants:
"orange"
"yellow"


Please select one of the following options:

0 - Quit the program
1 - Display all restaurants2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 0

~~~Inputs 2-
-45
2
yellow
2
orange
2
pink
2
orange
2
black
2
white
3
white
4
1
1
5
1
6
1
1
1
0
~~~Outputs 2-
Welcome to the restaurant battle!


Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: -45

INVALID SELECTION. Please try again.

Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 2

What is the name of the restaurant you want to add? yellow

yellow has been added.

Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 2

What is the name of the restaurant you want to add? orange

orange has been added.

Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 2

What is the name of the restaurant you want to add? pink

pink has been added.

Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 2

What is the name of the restaurant you want to add? black

black has been added.

Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 2

What is the name of the restaurant you want to add? white

white has been added.

Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 3

What is the name of the restaurant you want to remove? white

white has been removed.

Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 4
How many restaurants should be taken from the top and put on the bottom? 1


Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 1
Here are the current restaurants:
"orange"
"pink"
"black"
"yellow"


Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 5


Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 1
Here are the current restaurants:
"black"
"orange"
"yellow"
"pink"


Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 6

Round: 1
Type "1" if you prefer black or
type "2" if you prefer orange
Choice: 1

Type "1" if you prefer yellow or
type "2" if you prefer pink
Choice: 1

Round: 2
Type "1" if you prefer black or
type "2" if you prefer yellow
Choice: 1

The winning restaurant is black

Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 0

~~~Inputs 3-
2
yellow
4
2
6
0
~~~Outputs 3-
Welcome to the restaurant battle!


Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 2

What is the name of the restaurant you want to add? yellow

yellow has been added.

Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 4
How many restaurants should be taken from the top and put on the bottom? 2

The restaurants can not be cut there, there are only 1 current - number - of - r
estaurants

Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 6

The winning restaurant is yellow

Please select one of the following options:

0 - Quit the program
1 - Display all restaurants
2 - Add a restaurant
3 - Remove a restaurant
4 - "Cut" the list of restaurants
5 - "Shuffle" the list of restaurants
6 - Begin the tournament

Enter your selection now: 0
*/
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <ctime>
#include <map>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int getValidMenuFunction() {
	bool error = false;
	int userSelection = 0;

	do {
		cout << endl << endl << "Please select one of the following options:" << endl << endl << "0 - Quit the program" << endl << "1 - Display all restaurants" <<
			endl << "2 - Add a restaurant" << endl << "3 - Remove a restaurant" << endl << "4 - \"Cut\" the list of restaurants" << endl <<
			"5 - \"Shuffle\" the list of restaurants" << endl << "6 - Begin the tournament" << endl << endl << "Enter your selection now: ";
			cin >> userSelection;
			cin.ignore();
			cin.clear();
		if (userSelection < 0 || userSelection > 6) {
			cout << endl << "INVALID SELECTION. Please try again.";
			error = true;
		}
		else if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << endl << "INVALID SELECTION. Please try again." << endl;
			error = true;
		}
		else {
			error = false;
		}
	} while (error);
	return userSelection;
}

int Find(vector<string> someVector, string someString) {
	for (int i = 0; i < someVector.size(); i++) {
		if (someVector.at(i) == someString) {
			return i;
		}
	}
	return -1;

}

void DisplayFunction(vector<string> someVector) {
	cout << "Here are the current restaurants: " << endl;
	for (int i = 0; i < someVector.size(); i++) {
		cout << "\t\"" << someVector.at(i) << "\"" << endl;
	}
	return;
}

void AddRestaurants(vector<string>& someVector) {
	string newRestaurant = "";
	cout << endl << "What is the name of the restaurant you want to add? ";
	getline(cin, newRestaurant);
	if (Find(someVector, newRestaurant) != -1) {
		cout << endl << "That restaurant is already on the list, you can not add it again.";
		return;
	}
	someVector.push_back(newRestaurant);
	cout << endl << newRestaurant << " has been added.";
	return;
}

void RemoveRestaurants(vector<string>& someVector) {
	string removeRestaurant = "";
	cout << endl << "What is the name of the restaurant you want to remove? ";
	getline(cin, removeRestaurant);
	if (Find(someVector, removeRestaurant) == -1) {
		cout << endl << "That restaurant is not on the list, you can not remove it. ";
		return;
	}
	for (int i = 0; i < someVector.size(); i++) {
		if (removeRestaurant == someVector.at(i)) {
			someVector.erase(someVector.begin() + i);
			cout << endl << removeRestaurant << " has been removed.";
			return;
		}
	}
}

void CutVector(vector<string>& someVector) {
	int cutSize = 0;
	cout << "How many restaurants should be taken from the top and put on the bottom? ";
	cin >> cutSize;
	vector<string> secondVector(cutSize);
	if (cutSize > someVector.size()) {
		cout << endl << "The restaurants can not be cut there, there are only " << someVector.size() << " current - number - of - restaurants ";
		return;
	}
	for (int i = 0; i < cutSize; i++) {
		secondVector.at(i) = someVector.at(0);
		someVector.erase(someVector.begin());
	}
	for (int i = 0; i < cutSize; i++) {
		someVector.push_back(secondVector.at(i));
	}
}

void ShuffleFunction(vector<string>& someVector) {
	double logMath = 0.00;
	int logInt = 0;
	vector<string> secondVector;
	int sizeOfVector = 0;
	int halfVector = 0;

	logMath = log(someVector.size()) / log(2);
	logInt = logMath;
	if (logInt != logMath) {
		cout << endl << "The current tournament size (" << someVector.size() << ") is not a power of two (2, 4, 8...)." << endl 
				<< "A shuffle is not possible.Please add or remove resturants.";
		return;
	}
	sizeOfVector = someVector.size();
	halfVector = sizeOfVector / 2;
	for (int i = 0; i < halfVector; i++) {
		secondVector.push_back(someVector.at(i + halfVector));
		secondVector.push_back(someVector.at(i));
	}
	someVector.clear();
	for (int i = 0; i < sizeOfVector; i++) {
		someVector.push_back(secondVector.at(i));
	}
}

void PlayFunction(vector<string>& someVector) {
	double logMath = 0.00;
	int logInt = 0;
	int counter = 0;
	int userSelection = 0;
	vector<string> secondVector;
	logMath = log(someVector.size()) / log(2);
	logInt = logMath;
	if (logInt != logMath) {
		cout << endl << "The current tournament size (" << someVector.size() << ") is not a power of two (2, 4, 8...)." << endl
			<< "A tournament is not possible.Please add or remove resturants.";
		return;
	}
	while (1 < someVector.size()) {
		cout << endl << "Round: " << ++counter;
		secondVector.clear();
		for (int i = 0; i < someVector.size(); i += 2) {
			cout << endl << "Type \"1\" if you prefer " << someVector.at(i) << " or";
			cout << endl << "type \"2\" if you prefer " << someVector.at(i + 1);
			cout << endl << "Choice: ";
			cin >> userSelection;
			while (cin.fail() || (userSelection != 1 && userSelection != 2)) {
				cin.clear();
				cin.ignore('\n', 1000);
				cout << "INVALID SELECTION.  Please try again.";
				cin >> userSelection;
			}
			secondVector.push_back(someVector.at(i + (userSelection - 1)));
		}
		someVector.clear();
		for (int i = 0; i < secondVector.size(); i++) {
			someVector.push_back(secondVector.at(i));
		}
	}
	cout << endl << "The winning restaurant is " << someVector.at(0);
}

int main() {
	int menuSelection = 0;
	vector<string> restaurants(0);
	string newRestaurants = "";


	cout << "Welcome to the restaurant battle!" << endl;
	do {
		menuSelection = getValidMenuFunction();
		if (menuSelection == 1) { //Display function
			DisplayFunction(restaurants);
		}
		if (menuSelection == 2) {
			AddRestaurants(restaurants);
		}
		if (menuSelection == 3) {
			RemoveRestaurants(restaurants);
		}
		if (menuSelection == 4) {
			CutVector(restaurants);
		}
		if (menuSelection == 5) {
			ShuffleFunction(restaurants);
		}
		if (menuSelection == 6) {
			PlayFunction(restaurants);
		}
		} while (menuSelection != 0);
		cout << endl << endl << "GOODBYE!";


	return 0;
}