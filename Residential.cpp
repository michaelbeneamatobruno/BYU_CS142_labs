/*
This is my Residental cpp file. It sets up all of the functions that were created in the header file.
*/

#include "Residential.h"

Residential::~Residential()
{
}

Residential::Residential(string address, string propertyType, bool rental, double estimatedValue, bool occupied) : Property(address,
	propertyType, rental, estimatedValue)
{
	this->occupied = occupied;
}

string Residential::ToString() const
{
	stringstream ss;
	ss << Property::ToString();
	if (occupied) {
		ss << " Occupied.";
	}
	else {
		ss << " NOT occupied.";
	}
	return ss.str();
}

void Residential::ComputeTax()
{
	if (occupied) {
		Property::ComputeTax(OCCUPIED_TAX_RATE);
	}
	else {
		Property::ComputeTax(UNOCCUPIED_TAX_RATE);
	}
}
