#include <iostream>
#include <vector>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"
#include "Race.h"


void PrintTest(Player* player);
Player* GenerateNewCharacter(char classSelection);
Race FindRace(char raceSelection);
vector <Player*> GenerateRPGSquad();

const vector <char> CLASSES{ 'W','w','P','p','M','m' };
const vector <char> RACES{ 'O', 'o', 'H', 'h', 'E', 'e', 'T', 't', 'D', 'd' };

int main() {

	vector <Player*> party = GenerateRPGSquad();
	cout << "---------" << endl;
	for (Player* player : party) {
		PrintTest(player);
		delete player;
	}
	party.clear();
	return 0;
}

vector <Player*> GenerateRPGSquad() {
	char classSelection;
	char raceSelection;
	bool addingCharacters = true;
	vector <Player*> party;
	cout << "Welcome to the DnD Party generator! " << endl;
	while (addingCharacters) {
		cout << "Would you like to add a (W)arrior, (P)riest, (M)age, or (E)xit?: ";
		cin >> classSelection;
		if (classSelection == 'e' || classSelection == 'E') {
			addingCharacters = false;
			continue;
		}
		if (find(CLASSES.begin(), CLASSES.end(), classSelection) == CLASSES.end()) {
			cout << "Please enter a valid class selection!\n";
			continue;
		 }
		Player* newCharacter = GenerateNewCharacter(classSelection);
		party.push_back(newCharacter);
		cout << "Successfully added " << newCharacter->GetName() << " the " << newCharacter->WhatRace() << "!" << endl
			<< "You have " << party.size() << " character(s) in your party." << endl;
		
	}
	return party;
}


Player* GenerateNewCharacter(char classSelection) {
	string name;
	bool validChoice = false;
	char raceSelection;
		cin.ignore();
		cout << "Enter the character's name: ";
		getline(cin, name);
	while (!validChoice) {
		cout << "What race is " << name << "?\n(H)human\n(E)lf\n(T)roll\n(D)warf\n(O)rc\n";
		cin >> raceSelection;
		validChoice = (find(RACES.begin(), RACES.end(), raceSelection) != RACES.end());
		if (validChoice) {
			switch (classSelection) {
			case 'W':
			case 'w':
				return new Warrior(name, FindRace(raceSelection));
			case 'P':
			case 'p':
				return new Priest(name, FindRace(raceSelection));
			case 'M':
			case 'm':
				return new Mage(name, FindRace(raceSelection));
			}
		}
		else {
			cout << "Invalid race selection: please try again!\n";
		}
	}
	return nullptr;
};

Race FindRace(char raceSelection) {

	switch (raceSelection) {
	case 'O':
	case 'o':
		return Race::ORC;
	case 'D':
	case 'd':
		return Race::DWARF;
	case 'T':
	case 't':
		return Race::TROLL;
	case 'E':
	case 'e':
		return Race::ELF;
	case 'H':
	case 'h':
	default:
		return Race::HUMAN;
	}
}
void PrintTest(Player* player) {
	cout << "Character: " << player->GetName() << " (" << player->WhatRace() << ") with "
		<< player->GetHitPoints() << " HP and " << player->GetMagicPoints() << " MP attacks!" << endl;
	cout << player->Attack() << endl << endl;
}