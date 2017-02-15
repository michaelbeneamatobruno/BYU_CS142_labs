/* Michael Bruno, Sec003, Michaelbeneamatobruno@gmail.com
This program simulates a game of Plinko and computes a person's average winnings based on where they drop their chips.
Starts by asking the user for a number between 0 and 2. If the user inputs 0, the program outputs GOODBYE and exits,
if the user inputs 1, the program asks for a slotSelection in which it drops one chip. The chip falls randomly
and the path of the falling chip and the winnings for that chip is output. If the userSelection is 2 the program 
prompts the user for the number of chips they would like to drop and the slot they would like to drop these chips in.
The program then outputs the total winnings on that many chips and the average winnings for each chip.
Inputs-
Which option the user would like to be performed -- userSelection (a number between 0 and 2)
If the userSelection is 2, the number of chips to be dropped in a slot -- droppedChips (a positive non-zero number)
If the userSelection is 1 or 2, the slot number the user wishes to drop chips in -- slotSelection (a number between 0 and 8)
Outputs-
If userSelection is not between 0 and 2 the output is "INVALID SELECTION.  Please enter 0, 1 or 2"
If 0 is chosen "GOODBYE!" is output
If 1 is chosen and the slotSelection is not between 0 and 8 the output is "INVALID SLOT."
If 1 is chosen and the slotSelection is valid the output is the path of the chip dropped and the winnings for that chip.
If 2 is chosen and the slotSelection is not between 0 and 8 the output is "INVALID SLOT."
if 2 is chosen and the droppedChips is non-positive value the output is "INVALID NUMBER OF CHIPS."
if 2 is chosen and slotSelection and droppedChips is valid the output is the total winnings and average winning per chip.
~~~Test Cases~~~
~~~Inputs #1-
userSelection = 1
slotSelection = 0
userSelection = 1
slotSelection = 0
userSelection = 1
slotSelection = 0
userSelection = 0
~~~Ouputs #1-
The path and the winnings should vary between runs, even if the slotSelection is the same. After userSelection = 0
the program should output "GOODBYE!" and exit.
Welcome to the plinko simulator!

MENU: Please select one of the following options:

0 - Quit the program
1 - Drop a single chip into one slot
2 - Drop multiple chips into one slot

Enter your selection now: 1

*** DROP SINGLE CHIP ***

Which slot do you want to drop the chip in (0-8)? 0

*** DROPPING CHIP INTO SLOT 0 ***
PATH: [0.0 0.5 0.0 0.5 0.0 0.5 1.0 0.5 0.0 0.5 1.0 1.5 1.0]
WINNINGS: $500.00

MENU: Please select one of the following options:

0 - Quit the program
1 - Drop a single chip into one slot
2 - Drop multiple chips into one slot

Enter your selection now: 1

*** DROP SINGLE CHIP ***

Which slot do you want to drop the chip in (0-8)? 0

*** DROPPING CHIP INTO SLOT 0 ***
PATH: [0.0 0.5 1.0 0.5 1.0 0.5 0.0 0.5 0.0 0.5 0.0 0.5 1.0]
WINNINGS: $500.00

MENU: Please select one of the following options:

0 - Quit the program
1 - Drop a single chip into one slot
2 - Drop multiple chips into one slot

Enter your selection now: 1

*** DROP SINGLE CHIP ***

Which slot do you want to drop the chip in (0-8)? 0

*** DROPPING CHIP INTO SLOT 0 ***
PATH: [0.0 0.5 0.0 0.5 1.0 1.5 2.0 1.5 2.0 1.5 2.0 1.5 2.0]
WINNINGS: $1000.00

MENU: Please select one of the following options:

0 - Quit the program
1 - Drop a single chip into one slot
2 - Drop multiple chips into one slot

Enter your selection now: 0

GOODBYE!

~~~Inputs #2-
userSelection = 2
droppedChips = 10000
slotSelection = 0
userSelection = 2
droppedChips = 10000
slotSelection = 1
userSelection = 2
droppedChips = 10000
slotSelection = 2
~~~Outputs #2-
The total winnings and the average winning per chip should be different between runs
Welcome to the plinko simulator!

MENU: Please select one of the following options:

0 - Quit the program
1 - Drop a single chip into one slot
2 - Drop multiple chips into one slot

Enter your selection now: 2

*** DROP MULTIPLE CHIPS ***

How many chips do you want to drop (>0)? 10000

Which slot do you want to drop the chip in (0-8)? 0

Total Winnings on 10000 chips: 7827200.00
Average winnings per chip: 782.72

MENU: Please select one of the following options:

0 - Quit the program
1 - Drop a single chip into one slot
2 - Drop multiple chips into one slot

Enter your selection now: 2

*** DROP MULTIPLE CHIPS ***

How many chips do you want to drop (>0)? 10000

Which slot do you want to drop the chip in (0-8)? 1

Total Winnings on 10000 chips: 10400300.00
Average winnings per chip: 1040.03

MENU: Please select one of the following options:

0 - Quit the program
1 - Drop a single chip into one slot
2 - Drop multiple chips into one slot

Enter your selection now: 2

*** DROP MULTIPLE CHIPS ***

How many chips do you want to drop (>0)? 10000

Which slot do you want to drop the chip in (0-8)? 2

Total Winnings on 10000 chips: 16114400.00
Average winnings per chip: 1611.44

MENU: Please select one of the following options:

0 - Quit the program
1 - Drop a single chip into one slot
2 - Drop multiple chips into one slot

Enter your selection now: 0

GOODBYE!


~~~Inputs #3-
userSelection = -1
userSelection = 5
userSelection = 1
slotSelection = -5
userSelection = 1
slotSelection = 10
userSelection = 2
droppedChips = 0
userSelection = 2
droppedChips = -1
userSelection = 0
~~~Outputs #3=
We should get a bunch of error messages
Welcome to the plinko simulator!

MENU: Please select one of the following options:

0 - Quit the program
1 - Drop a single chip into one slot
2 - Drop multiple chips into one slot

Enter your selection now: -1

INVALID SELECTION.  Please enter 0, 1 or 2

MENU: Please select one of the following options:

0 - Quit the program
1 - Drop a single chip into one slot
2 - Drop multiple chips into one slot

Enter your selection now: 5

INVALID SELECTION.  Please enter 0, 1 or 2

MENU: Please select one of the following options:

0 - Quit the program
1 - Drop a single chip into one slot
2 - Drop multiple chips into one slot

Enter your selection now: 1

*** DROP SINGLE CHIP ***

Which slot do you want to drop the chip in (0-8)? -5

INVALID SLOT.

MENU: Please select one of the following options:

0 - Quit the program
1 - Drop a single chip into one slot
2 - Drop multiple chips into one slot

Enter your selection now: 1

*** DROP SINGLE CHIP ***

Which slot do you want to drop the chip in (0-8)? 10

INVALID SLOT.

MENU: Please select one of the following options:

0 - Quit the program
1 - Drop a single chip into one slot
2 - Drop multiple chips into one slot

Enter your selection now: 2

*** DROP MULTIPLE CHIPS ***

How many chips do you want to drop (>0)? 0

INVALID NUMBER OF CHIPS.

MENU: Please select one of the following options:

0 - Quit the program
1 - Drop a single chip into one slot
2 - Drop multiple chips into one slot

Enter your selection now: 2

*** DROP MULTIPLE CHIPS ***

How many chips do you want to drop (>0)? -1

INVALID NUMBER OF CHIPS.

MENU: Please select one of the following options:

0 - Quit the program
1 - Drop a single chip into one slot
2 - Drop multiple chips into one slot

Enter your selection now: 0

GOODBYE!
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <map>
#include <cstdlib>
using namespace std;

int main() {
	srand(42);
	int userSelection = 0;
	int droppedChips = 0;
	int random = 0;
	double slotSelection = 0.00;
	double slotChange = 0.00;
	double singleRunWinnings = 0.00;
	double totalWinnings = 0.00;
	double averageWinnings = 0.00;
	const int NUM_PEGS = 12;
	const double SLOT_CHANGE_INCREMENT = 0.5;
	const double MIN_SLOT = 0.0;
	const double MAX_SLOT = 8.0;
	map<double, double> winnings;
	winnings[0.0] = 100.0;
	winnings[1.0] = 500.0;
	winnings[2.0] = 1000.0;
	winnings[3.0] = 0.0;
	winnings[4.0] = 10000.0;
	winnings[5.0] = 0.0;
	winnings[6.0] = 1000.0;
	winnings[7.0] = 500.0;
	winnings[8.0] = 100.0;

	cout << "Welcome to the plinko simulator!";
	do {
		cout << endl << endl << "MENU: Please select one of the following options:";
		cout << endl << endl << "0 - Quit the program";
		cout << endl << "1 - Drop a single chip into one slot";
		cout << endl << "2 - Drop multiple chips into one slot";
		cout << endl << endl << "Enter your selection now: ";
		cin >> userSelection;

		if (userSelection != 0 && userSelection != 1 && userSelection != 2) {
			cout << endl << "INVALID SELECTION.  Please enter 0, 1 or 2";
			continue;
		}
		else if (userSelection == 1) {
			cout << endl << "*** DROP SINGLE CHIP ***";
			cout << endl << endl << "Which slot do you want to drop the chip in (0-8)? ";
			cin >> slotSelection;
			if (slotSelection < MIN_SLOT || slotSelection > MAX_SLOT) {
				cout << endl << "INVALID SLOT.";
				continue;
			}
			slotChange = slotSelection;
			cout << endl << "*** DROPPING CHIP INTO SLOT " << fixed << setprecision(0) << slotSelection << " ***";
			cout << endl << "PATH: [" << fixed << setprecision(1) << slotSelection;
			slotChange = slotSelection;
			for (int i = 0; i < NUM_PEGS; i++) {
				random = rand() % 2;
				if (slotChange == MAX_SLOT) {
					slotChange -= SLOT_CHANGE_INCREMENT;
				}
				else if (slotChange == MIN_SLOT) {
					slotChange += SLOT_CHANGE_INCREMENT;
				}
				else if (random == 1) {
					slotChange += SLOT_CHANGE_INCREMENT;
				}
				else {
					slotChange -= SLOT_CHANGE_INCREMENT;
				}
				cout << " " << slotChange;
			}
			cout << "]" << endl;
			cout << "WINNINGS: $" << fixed << setprecision(2) << winnings[slotChange];
		}
		else if (userSelection == 2) {
			cout << endl << "*** DROP MULTIPLE CHIPS ***";
			cout << endl << endl << "How many chips do you want to drop (>0)? ";
			cin >> droppedChips;
			if (droppedChips <= 0) {
				cout << endl << "INVALID NUMBER OF CHIPS.";
				continue;
			}
			cout << endl << "Which slot do you want to drop the chip in (0-8)? ";
			cin >> slotSelection;
			if (slotSelection < MIN_SLOT || slotSelection > MAX_SLOT) {
				cout << endl << "INVALID SLOT.";
				continue;
			}
			totalWinnings = 0; //reinitializing total winnings
			for (int j = 0; j < droppedChips; j++) {
				slotChange = slotSelection;
				for (int i = 0; i < NUM_PEGS; i++) {
					random = rand() % 2;
					if (slotChange == MAX_SLOT) {
						slotChange -= SLOT_CHANGE_INCREMENT;
					}
					else if (slotChange == MIN_SLOT) {
						slotChange += SLOT_CHANGE_INCREMENT;
					}
					else if (random == 1) {
						slotChange += SLOT_CHANGE_INCREMENT;
					}
					else {
						slotChange -= SLOT_CHANGE_INCREMENT;
					}
				}
				singleRunWinnings = winnings[slotChange];
				totalWinnings += singleRunWinnings;
			}
			averageWinnings = totalWinnings / droppedChips;
			cout << endl << "Total Winnings on " << fixed << setprecision(2) << droppedChips << " chips: " << totalWinnings;
			cout << endl << "Average winnings per chip: " << averageWinnings;
		}
	} while (userSelection != 0);

	cout << endl << "GOODBYE!";
	system("pause");

	return 0;
}