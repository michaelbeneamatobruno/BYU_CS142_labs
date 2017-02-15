#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

void PrintMenu(char &menuOption) {
	do {
		cout << endl << endl << "MENU" << endl << "c - Number of non-whitespace characters" << endl << "w - Number of words" << endl <<
			"f - Find text" << endl << "r - Replace all !'s" << endl << "s - Shorten spaces" << endl << "q - Quit" << endl << endl <<
			"Choose an option: " << endl;
		cin >> menuOption;
	} while (menuOption != 'c' && menuOption != 'w' && menuOption != 'f' && menuOption != 'r' && menuOption != 's' && menuOption != 'q');

}

int GetNumOfNonWSCharacters(string &someString) {
	int numNonWS = 0;

	for (int i = 0; i < someString.length(); i++) {
		if (someString.at(i) != ' ' && someString.at(i) != '\t') {
			numNonWS += 1;
		}
	}

	return numNonWS;
}

int GetNumOfWords(string &someString) {
	int numWords = 0;
	for (int i = 0; i < someString.length(); i++) {
		if (someString.at(i) == ' ' && someString.at(i + 1) != ' ') {
			numWords += 1;
		}
	}
	return numWords + 1;

}

int FindText(string &string1, string &string2) {
	int numInstances = 0;

	for (int i = 0; i < string1.length(); i++) {
		if (string1.substr(i, string2.length()) == string2) {
			numInstances += 1;
		}
	}
	return numInstances;
}

void ReplaceExclamation(string &someString) {
	for (int i = 0; i < someString.length(); i++) {
		if (someString.at(i) == '!') {
			someString.at(i) = '.';
		}
	}
}

void ShortenSpace(string &someString) {
	for (int i = someString.length() - 2; i >= 0; i--) {
		if (someString.at(i + 1) == ' ' && someString.at(i) == ' ') {
			someString.erase(i + 1, 1);
		}
	}
}


int main() {
	string userText = "";
	char menuOption;
	int numNonWSChars = 0;
	int numWords = 0;
	int numTextFinds = 0;
	string findText = "";

	cout << "Enter a sample text: ";
	getline(cin, userText);
	cout << endl << "You entered: " << userText;

	do {
		PrintMenu(menuOption);
		if (menuOption == 'c') {
			numNonWSChars = GetNumOfNonWSCharacters(userText);
			cout << "Number of non-whitespace characters: " << numNonWSChars;
		}
		if (menuOption == 'w') {
			numWords = GetNumOfWords(userText);
			cout << "Number of words: " << numWords;
		}
		if (menuOption == 'f') {
			cout << "Enter a word or phrase to be found: ";
			cin.ignore();
			getline(cin, findText);
			numTextFinds = FindText(userText, findText);
			cout << endl << "\"" << findText << "\" instances: " << numTextFinds;
		}
		if (menuOption == 'r') {
			ReplaceExclamation(userText);
			cout << "Edited text: " << userText;
		}
		if (menuOption == 's') {
			ShortenSpace(userText);
			cout << "Edited text: " << userText;
		}
	} while (menuOption != 'q');

	return 0;
}
