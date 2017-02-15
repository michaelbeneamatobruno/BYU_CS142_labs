/* Michael Bruno, Sec003, Michaelbeneamatobruno@gmail.com

This program has five different options 0-5. The user is prompted for one of the six. If the user selects the 0th then the program
exits, if the user selects the first then they are able to add songs using a vector of pointers that stores the name of the song
and the first line of the song. If the user selects 2 then this list of pointers is output to the screen. If the user Selects
3 then they are prompted for a playlist name, which is then added to a vector of playlists. If the user selects option 4 then they 
are given the list of current playlists and songs and prompted to select which index of each. The pointer(song) that they selected is
then stored inside the playlist at the selected index. Option 5 prompts the user for a playlist index, it then outputs all
the songs in the playlist using the song and playlist classes, and using the same tecnique outputs their first lines.
Inputs-
The first input is a simple user option. The user can choose one of six options: 0 - Quit the program, 1 - Add songs, 
2 - List all songs, 3 - Add a playlist, 4 - Add a song to a playlist, 5 - Play a playlist. If 1 is selected the user is 
prompted for song titles and their first lines until STOP is entered as a song name. Option 2 has no inputs, option 3 takes a
string as an input and saves it as a playlist title. Option 4 prompts a user for a playlist index number, and a song index number
to add to that playlist. Option 5 prompts the user for a playlist index number.
Outputs-
If 0 is selected the program outputs a GOODBYE! statement and then quits. If one is selected a user prompt is output. If 2 is
selected then the program outputs all of the input songs from user option 1. If 3 is selected the only output is the prompt for
a new playlist name. If 4 is selected the outputs are the prompts and the list of playlists and the list of songs. If 5 is selected
then the program outputs all of the songs in the selected playlist and the first line of those songs.
~~~Test Case 1~~~
Inputs 1-
1
walk
walk walk
run
run run
2
0
Outputs 1-
Welcome to the Firstline Player!


Please select one of the following options :

0 - Quit the program
1 - Add songs
2 - List all songs
3 - Add a playlist
4 - Add a song to a playlist
5 - Play a playlist
Enter your selection now :1

Read in Song names and first lines:

Song Name (type "STOP" when done): walk

That song's first line: walk walk


Song Name (type "STOP" when done): run

That song's first line: run run


Song Name (type "STOP" when done): STOP

Please select one of the following options :

0 - Quit the program
1 - Add songs
2 - List all songs
3 - Add a playlist
4 - Add a song to a playlist
5 - Play a playlist
Enter your selection now :2

0: Name: "walk" FirstLine: "walk walk"  Played 0 times.
1: Name: "run" FirstLine: "run run"  Played 0 times.
Please select one of the following options :

0 - Quit the program
1 - Add songs
2 - List all songs
3 - Add a playlist
4 - Add a song to a playlist
5 - Play a playlist
Enter your selection now :0
GOODBYE!
~~~Test Case 2~~~
Inputs 2-
1
walk
walk walk
run
run run
STOP
3
walk
4
0
0
0
Outputs 2-
Welcome to the Firstline Player!


Please select one of the following options :

0 - Quit the program
1 - Add songs
2 - List all songs
3 - Add a playlist
4 - Add a song to a playlist
5 - Play a playlist
Enter your selection now :1

Read in Song names and first lines:

Song Name (type "STOP" when done): walk

That song's first line: walk walk


Song Name (type "STOP" when done): run

That song's first line: run run


Song Name (type "STOP" when done): STOP

Please select one of the following options :

0 - Quit the program
1 - Add songs
2 - List all songs
3 - Add a playlist
4 - Add a song to a playlist
5 - Play a playlist
Enter your selection now :3

Playlist name: walk

Please select one of the following options :

0 - Quit the program
1 - Add songs
2 - List all songs
3 - Add a playlist
4 - Add a song to a playlist
5 - Play a playlist
Enter your selection now :4


Add to a playlist:
0: walk
Pick a playlist index number: 0


Find a song to add:
0: walk
1: run
Pick a song index number: 0

Please select one of the following options :

0 - Quit the program
1 - Add songs
2 - List all songs
3 - Add a playlist
4 - Add a song to a playlist
5 - Play a playlist
Enter your selection now :0
GOODBYE!
~~~Test Case 3~~~
Inputs 3-
1
walk
walk walk
run
run run
STOP
3
walk
4
0
0
5
0
Outputs 3-
Welcome to the Firstline Player!


Please select one of the following options :

0 - Quit the program
1 - Add songs
2 - List all songs
3 - Add a playlist
4 - Add a song to a playlist
5 - Play a playlist
Enter your selection now :1

Read in Song names and first lines:

Song Name (type "STOP" when done): walk

That song's first line: walk walk


Song Name (type "STOP" when done): run

That song's first line: run run


Song Name (type "STOP" when done): STOP

Please select one of the following options :

0 - Quit the program
1 - Add songs
2 - List all songs
3 - Add a playlist
4 - Add a song to a playlist
5 - Play a playlist
Enter your selection now :3

Playlist name: walk

Please select one of the following options :

0 - Quit the program
1 - Add songs
2 - List all songs
3 - Add a playlist
4 - Add a song to a playlist
5 - Play a playlist
Enter your selection now :4


Add to a playlist:
0: walk
Pick a playlist index number: 0


Find a song to add:
0: walk
1: run
Pick a song index number: 0

Please select one of the following options :

0 - Quit the program
1 - Add songs
2 - List all songs
3 - Add a playlist
4 - Add a song to a playlist
5 - Play a playlist
Enter your selection now :5

Pick a playlist to play:
0: walk
Pick a playlist index number: 0


Playing first lines:
walk walk
Please select one of the following options :

0 - Quit the program
1 - Add songs
2 - List all songs
3 - Add a playlist
4 - Add a song to a playlist
5 - Play a playlist
Enter your selection now :0
GOODBYE!
*/

#include <iostream>
#include <string>
#include "Playlist.h"
#include "Song.h"

const int quitProgramOption = 0;
const int addSongOption = 1;
const int listSongsOption = 2;
const int addPlaylistOption = 3;
const int addSongToPlaylistOption = 4;
const int playPlaylistOption = 5;

int PrintMenu() {
	int userOption = 0;
	cout << endl << endl << "Please select one of the following options :" << endl << endl << "0 - Quit the program" << endl << "1 - Add songs"
		<< endl << "2 - List all songs" << endl << "3 - Add a playlist" << endl << "4 - Add a song to a playlist" << endl
		<< "5 - Play a playlist" << endl << "Enter your selection now : ";
	cin >> userOption;
	cin.ignore();
	return userOption;
}

vector<Song*> AddSong() {
	string name;
	string firstLine;
	vector<Song*> songs;

	cout << endl << "Read in Song names and first lines: ";
	while (true) {
		cout << endl << endl << "Song Name (type \"STOP\" when done): ";
		getline(cin, name);
		if (name == "STOP") {
			break;
		}
		cout << endl << "That song's first line: ";
		getline(cin, firstLine);
		Song* song = new Song(name, firstLine);
		songs.push_back(song);
	}
	return songs;
}

void ListSongs(vector<Song*> songs) {
	for (int i = 0; i < songs.size(); i++) {
		cout << endl << i << ": " << songs.at(i)->toString();
	}
}

Playlist AddPlaylist() {
	string playlistName;
	Playlist playlist;
	cout << endl << "Playlist name: ";
	getline(cin, playlistName);
	playlist.SetName(playlistName);
	return playlist;
}

void AddSongToPlaylist(vector<Playlist> &playlists, vector<Song*> songs) {
	int playlistIndex = 0;
	int songIndex = 0;

	cout << endl << endl << "Add to a playlist: ";
	for (int i = 0; i < playlists.size(); i++) {
		cout << endl << i << ": " << playlists.at(i).GetName();
	}
	cout << endl << "Pick a playlist index number: ";
	cin >> playlistIndex;
	cout << endl << endl << "Find a song to add: ";
	for (int i = 0; i < songs.size(); i++) {
		cout << endl << i << ": " << songs.at(i)->GetName();
	}
	cout << endl << "Pick a song index number: ";
	cin >> songIndex;
	playlists.at(playlistIndex).AddSong(songs.at(songIndex));
}

void PlayPlaylist(vector<Playlist> &playlists) {
	int playlistIndex = 0;

	cout << endl << "Pick a playlist to play: ";
	for (int i = 0; i < playlists.size(); i++) {
		cout << endl << i << ": " << playlists.at(i).GetName();
	}
	cout << endl << "Pick a playlist index number: ";
	cin >> playlistIndex;
	cout << endl << endl << "Playing first lines:";
	playlists.at(playlistIndex).Play();
}

using namespace std;

int main() {
	int userOption = 0;
	vector<Playlist> playlists;
	vector<Song*> songs;

	cout << "Welcome to the Firstline Player!" << endl << endl;
	do {
		userOption = PrintMenu();
		if (userOption == addSongOption) {
			vector<Song*> songList = AddSong();
			songs.insert(songs.end(), songList.begin(), songList.end());
		}
		else if (userOption == listSongsOption) {
			ListSongs(songs);
		}
		else if (userOption == addPlaylistOption) {
			playlists.push_back(AddPlaylist());
		}
		else if (userOption == addSongToPlaylistOption) {
			AddSongToPlaylist(playlists, songs);
		}
		else if (userOption == playPlaylistOption) {
			PlayPlaylist(playlists);
		}
	} while (userOption != quitProgramOption);

	cout << endl << "GOODBYE!";

	for (int i = songs.size() - 1; i >= 0; i--) {
		delete songs.at(i);
		songs.erase(songs.begin() + i);
	}


	return 0;
}
