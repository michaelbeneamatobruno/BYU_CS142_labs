/* Michael Bruno, Sec003, Michaelbeneamatobruno@gmail.com



Inputs-

Outputs-



~~~Test Case 1~~~
No inputs
starting...
Where should I read the data from:


All properties:
TAX REPORT:
Where should I write the report (just press return to skip):

SORTED VERSION:
TAX REPORT:
~~~Test Case 2~~~
Testerfile1 contents
Residential yes 5000000 no 129-Michael-Bruno-Lane
Residential no 7334211 no 85-Narwhals-Place
Residential yes 200000 yes 42-Pineapple-Way
starting...
Where should I read the data from:
Testfile1

All properties:
Address: 129-Michael-Bruno-Lane. Rental. Estimated value: 5000000.00. A Residential Property. NOT occupied.
Address: 85-Narwhals-Place. NOT rental. Estimated value: 7334211.00. A Residential Property. NOT occupied.
Address: 42-Pineapple-Way. Rental. Estimated value:      200000.00. A Residential Property. Occupied.
TAX REPORT:
** Taxes due for the property at: 129-Michael-Bruno-Lane
This property has an estimated value of: 5000000.00
Taxes due on this property are: 45000.00
** Taxes due for the property at: 85-Narwhals-Place
This property has an estimated value of: 7334211.00
Taxes due on this property are: 66007.90
** Taxes due for the property at: 42-Pineapple-Way
This property has an estimated value of: 200000.00
Taxes due on this property are: 1200.00
Where should I write the report (just press return to skip):
outputfile1
SORTED VERSION:
TAX REPORT:
** Taxes due for the property at: 42-Pineapple-Way
This property has an estimated value of: 200000.00
Taxes due on this property are: 1200.00
** Taxes due for the property at: 129-Michael-Bruno-Lane
This property has an estimated value of: 5000000.00
Taxes due on this property are: 45000.00
** Taxes due for the property at: 85-Narwhals-Place
This property has an estimated value of: 7334211.00
Taxes due on this property are: 66007.90
~~~Test Case 3~~~
Testerfile2 contents
Commercial no 2995342 no 0 24-Apple-peak
Commercial yes 24668832 yes 20 23-Orange-naval
Commercial yes 77299351 no 0 12-Mango-Bend
starting...
Where should I read the data from:
Testfile2

All properties:
Address: 24-Apple-peak. NOT rental. Estimated value: 2995342.00. A Commercial Property. NOT in a discount zone.
Address: 23-Orange-naval. Rental. Estimated value: 24668832.00. A Commercial Property. In a discount zone with discount of: 20.00%.
Address: 12-Mango-Bend. Rental. Estimated value: 77299351.00. A Commercial Property. NOT in a discount zone.
TAX REPORT:
** Taxes due for the property at: 24-Apple-peak
This property has an estimated value of: 2995342.00
Taxes due on this property are: 29953.42
** Taxes due for the property at: 23-Orange-naval
This property has an estimated value of: 24668832.00
Taxes due on this property are: 236820.79
** Taxes due for the property at: 12-Mango-Bend
This property has an estimated value of: 77299351.00
Taxes due on this property are: 927592.21
Where should I write the report (just press return to skip):
outputfile2
SORTED VERSION:
TAX REPORT:
** Taxes due for the property at: 24-Apple-peak
This property has an estimated value of: 2995342.00
Taxes due on this property are: 29953.42
** Taxes due for the property at: 23-Orange-naval
This property has an estimated value of: 24668832.00
Taxes due on this property are: 236820.79
** Taxes due for the property at: 12-Mango-Bend
This property has an estimated value of: 77299351.00
Taxes due on this property are: 927592.21
*/

#include "Property.h";
#include "Residential.h";
#include "Commercial.h";
#include <vector>
#include <fstream>

using namespace std;

bool ConvertToLogic(string yesOrNoString) {
	bool itemToConvert = false;
	if (yesOrNoString == "yes") {
		itemToConvert = true;
	}
	else if (yesOrNoString == "no") {
		itemToConvert = false;
	}
	return itemToConvert;
}

int main() {
	string address;
	string propertyType;
	string yesOrNoString;
	int count = 0;
	bool rental = false;
	bool occupied = false;
	bool discount = false;
	double estimatedValue = 0.00;
	double tax = 0.00;
	double discountRate = 0.00;
	string fileName;
	string outFileName;
	ifstream inFS;
	ofstream outFS;
	Property* myProperty;
	vector<Property*> sortedProperties;
	vector<Property*> propertyList;

	cout << "starting..." << endl;
	cout << "Where should I read the data from: ";
	getline(cin, fileName);
	inFS.open(fileName.c_str());

	cout << endl << endl << "All properties:";
	while (inFS >> propertyType) {
		if (propertyType == "Residential") {
			inFS >> yesOrNoString;
			rental = ConvertToLogic(yesOrNoString);
			inFS >> estimatedValue;
			inFS >> yesOrNoString;
			occupied = ConvertToLogic(yesOrNoString);
			inFS >> address;
			myProperty = new Residential(address, propertyType, rental, estimatedValue, occupied);
		}
		else {
			discountRate = 0;
			inFS >> yesOrNoString;
			rental = ConvertToLogic(yesOrNoString);
			inFS >> estimatedValue;
			inFS >> yesOrNoString;
			discount = ConvertToLogic(yesOrNoString);
			inFS >> discountRate;
			discountRate = discountRate / 100.0;
			inFS >> address;
			myProperty = new Commercial(address, propertyType, rental, estimatedValue, discountRate);
		}
		propertyList.push_back(myProperty);
	}
	
	for (int i = 0; i < propertyList.size(); i++) {
		cout << endl << propertyList.at(i)->ToString();
	}

	cout << endl << "TAX REPORT:";
	for (int i = 0; i < propertyList.size(); i++) {
		cout << endl;
		propertyList.at(i)->ComputeTax();
		cout << propertyList.at(i)->PrintTax();
	}

	cout << endl << "Where should I write the report (just press return to skip): ";
	getline(cin, outFileName);
	outFS.open(outFileName.c_str());
	outFS << endl << "TAX REPORT:";
	for (int i = 0; i < propertyList.size(); i++) {
		outFS << endl;
		propertyList.at(i)->ComputeTax();
		outFS << propertyList.at(i)->PrintTax();
	}

	for (int i = 0; i < propertyList.size(); i++) {
		int j = 0;
		for (j = 0; j < sortedProperties.size(); j++) {
			if (propertyList.at(i)->GetTax() < sortedProperties.at(j)->GetTax())
			break;
		}
		sortedProperties.insert(sortedProperties.begin() + j, propertyList.at(i));
	}

	cout << endl << "SORTED VERSION:";
	cout << endl << "TAX REPORT:";
	for (int i = 0; i < sortedProperties.size(); i++) {
		cout << sortedProperties.at(i)->PrintTax();
	}
	
	inFS.close();
	outFS.close();

	return 0;
}