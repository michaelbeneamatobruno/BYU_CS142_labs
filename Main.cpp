#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <map>
#include <cstdlib>
using namespace std;

//functions
double ComputeWinnings(int slot) {
	double winnings = 0.00;





	return winnings;
}



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