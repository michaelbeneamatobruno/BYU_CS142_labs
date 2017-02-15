/*
This is my Residental header file. It sets up the residental class. It's a type of property, so we set that up at the begining
and then all we have to do is change it so that it can accept any aditional parameters that we need.
*/
#pragma once
#include "Property.h"

using namespace std;

class Residential : public Property
{
public:
	~Residential();
	
	Residential(string address, string propertyType, bool rental, double estimatedValue, bool occupied);

	string ToString() const;

	void ComputeTax();

private:
	bool occupied;
	const double OCCUPIED_TAX_RATE = 0.006;
	const double UNOCCUPIED_TAX_RATE = 0.009;
};
