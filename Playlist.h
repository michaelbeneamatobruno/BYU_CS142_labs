#pragma once
#include "Song.h"
#include <vector>
#include <string>

using namespace std;

class Playlist
{
private:

	vector<Song*> songs;
	string name;

public:
	Playlist();
	~Playlist();
	void AddSong(Song* song);
	void SetName(string name);
	string GetName();
	void Play();

};

