/*
This is my Commercial cpp file. It sets up all of the functions that were created in the header file.
*/
#include "Commercial.h"

Commercial::~Commercial()
{
}

Commercial::Commercial(string address, string propertyType, bool rental, double estimatedValue, double discountRate) : Property(address,
	propertyType, rental, estimatedValue)
{
	this->discountRate = discountRate;
}

string Commercial::ToString() const
{
	stringstream ss;
	ss << Property::ToString();
	if (discountRate == 0) {
		ss << " NOT in a discount zone.";
	}
	else {
		ss << " In a discount zone with discount of: " << fixed << setprecision(2) << discountRate * 100 << "%.";
	}
	return ss.str();
}

void Commercial::ComputeTax()
{
	if (rental) {
		Property::ComputeTax(COMMERCIAL_RENTAL_TAX_RATE * (1 - discountRate));
	}
	else {
		Property::ComputeTax(COMMERCIAL_NONRENTAL_TAX_RATE * (1 - discountRate));
	}
}
