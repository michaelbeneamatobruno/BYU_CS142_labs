#pragma once
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class Song
{
private:
	string name;
	string firstLine;
	int count;
public:
	Song(string name, string firstLine);
	~Song();
	string toString();
	string GetName();
	string GetFirstLine();
	void IncrementCount();
};

