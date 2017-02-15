/*
This is my Commercial header file. It sets up the residental class. It's a type of property, so we set that up at the begining
and then all we have to do is change it so that it can accept any aditional parameters that we need.
*/
#pragma once
#include "Property.h";

using namespace std;

class Commercial : public Property
{
public:
	~Commercial();

	Commercial(string address, string propertyType, bool rental, double estimatedValue, double discountRate);

	string ToString() const;

	void ComputeTax();

private:
	double discountRate;
	const double COMMERCIAL_RENTAL_TAX_RATE = 0.012;
	const double COMMERCIAL_NONRENTAL_TAX_RATE = 0.01;
};

