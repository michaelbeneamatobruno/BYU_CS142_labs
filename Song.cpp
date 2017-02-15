#include "Song.h"

Song::Song(string name, string firstLine)
{
	this->name = name;
	this->firstLine = firstLine;
	count = 0;
}

Song::~Song()
{
}

string Song::toString()
{
	stringstream ss;
	ss << "Name: \"" << name << "\" FirstLine: \"" << firstLine << "\"  Played " << count << " times.";
	return ss.str();
}

string Song::GetName()
{
	return name;
}

string Song::GetFirstLine()
{
	return firstLine;
}

void Song::IncrementCount()
{
	count++;
}
