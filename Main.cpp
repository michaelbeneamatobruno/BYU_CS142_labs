#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	const double TOP_BOTTOM_FIXED_TEMP = 100.00;
	const double LEFT_RIGHT_FIXED_TEMP = 0.00;
	double plateArray[20][20];
	double secondArray[20][20];
	double plateAverage = 0;
	const int numNeighbors = 4;
	int i = 0;
	int j = 0;
	int numRows = 20;
	int numCols = 20;



	cout << "Hotplate simulator" << endl << endl;
	cout << "Printing initial plate..." << endl;
	for (i = 0; i < numRows; i++) {
		for (j = 0; j < numCols; j++) {
			if ((i == 0 || i == numRows - 1) && (j > 0 && j < numCols - 1)) {
				plateArray[i][j] = TOP_BOTTOM_FIXED_TEMP;
			}
			else if ((i >= 0 && i <= numRows - 1) && (j == 0 || j == numCols - 1)) {
				plateArray[i][j] = LEFT_RIGHT_FIXED_TEMP;
			}
		}
	}

	for (i = 0; i < numRows; i++) {
		for (j = 0; j < numCols; j++) {
			if ((i == 0 || i == numRows - 1) && (j > 0 && j < numCols - 1)) {
				secondArray[i][j] = TOP_BOTTOM_FIXED_TEMP;
			}
			else if ((i >= 0 && i <= numRows - 1) && (j == 0 || j == numCols - 1)) {
				secondArray[i][j] = LEFT_RIGHT_FIXED_TEMP;
			}
			else {
				plateAverage = (plateArray[i - 1][j] + plateArray[i + 1][j] + plateArray[i][j - 1] + plateArray[i][j + 1]) / numNeighbors;
				secondArray[i][j] = plateAverage;
			}
			if (j == numCols - 1) {
				cout << fixed << setprecision(4) << setw(10) << secondArray[i][j] << endl;
			}
			else {
				cout << fixed << setprecision(4) << setw(10) << secondArray[i][j] << ",";
			}
		}
	}










	return 0;
}