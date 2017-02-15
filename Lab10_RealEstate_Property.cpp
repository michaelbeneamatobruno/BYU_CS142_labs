/*
This is my property cpp file. It sets up all of the functions that were created in the header file. 
*/

#include "Property.h"

Property::~Property()
{
}

Property::Property(string address, string propertyType, bool rental, double estimatedValue)
{
	SetData(address, propertyType, rental, estimatedValue);
}

string Property::ToString() const
{


	stringstream ss;
	if (rental) {
		ss << "Address: " << address << ". Rental. " << "Estimated value: " << fixed << setprecision(2) << estimatedValue << 
			". A " << propertyType << " Property.";
	}
	else {
		ss << "Address: " << address << ". NOT rental. " << "Estimated value: " << fixed << setprecision(2) << estimatedValue << 
			". A " << propertyType << " Property.";
	}
	return ss.str();
}

void Property::ComputeTax(double taxRate)
{
	tax = taxRate * estimatedValue;
}

string Property::PrintTax() const
{
	stringstream ss;
	ss << endl << "** Taxes due for the property at: " << address << endl;
	ss << "This property has an estimated value of: " << fixed << setprecision(2) << estimatedValue << endl;
	ss << "Taxes due on this property are: " << fixed << setprecision(2) << tax;
	return ss.str();
}

void Property::SetData(string address, string propertyType, bool rental, double estimatedValue)
{
	this->address = address;
	this->propertyType = propertyType;
	this->rental = rental;
	this->estimatedValue = estimatedValue;
	this->tax = tax;
}

double Property::GetTax()
{
	return tax;
}

