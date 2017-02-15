#include "Playlist.h"



Playlist::Playlist()
{
}


Playlist::~Playlist()
{
	//for (int i = songs.size() - 1; i >= 0; i--) {
	//	delete songs.at(i);
	//	songs.erase(songs.begin() + i);
	//}
}

void Playlist::AddSong(Song* song)
{
	songs.push_back(song);
}

void Playlist::SetName(string name)
{
	this->name = name;
}

string Playlist::GetName()
{
	return name;
}

void Playlist::Play()
{
	for (int i = 0; i < songs.size(); i++) {
		cout << endl << songs.at(i)->GetFirstLine();
		songs.at(i)->IncrementCount();
	}
}
