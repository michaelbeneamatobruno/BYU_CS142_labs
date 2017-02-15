/* This is my property class header file, it sets up the default parameters for the property class and does everything in
virtual since all of the other classes are going to be types of properties.
*/

#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

class Property
{
public:
	~Property();

	Property(string address, string propertyType, bool rental, double estimatedValue);

	virtual string ToString() const;

	virtual void ComputeTax(double taxRate);
	virtual void ComputeTax() = 0;

	virtual string PrintTax() const;

	virtual void SetData(string address, string propertyType, bool rental, double estimatedValue);

	virtual double GetTax();

protected:

	string address;
	string propertyType;
	bool rental;
	double estimatedValue;
	double tax;

};

