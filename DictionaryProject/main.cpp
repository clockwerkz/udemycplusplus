#include <iostream>
#include <map>
#include "Dictionary.h"

enum option {
	add,
	get,
	print,
	quit
};

const std::map<std::string, option> lookup{
	{"add", option::add},
	{"get", option::get},
	{"print", option::print},
	{"quit", option::quit}
};

void toLower(std::string& word);

int main() {
	Dictionary dict = Dictionary();
	bool isComplete = false;
	std::string choice, word, definition;
	std::cout << "Welcome to the Dictionary Manager!\n\n";
	while (!isComplete) {
		std::cout << "Would you like to: add, get, print, or quit? ";
		std::cin >> choice;
		toLower(choice);
		auto itr = lookup.find(choice);
		if (itr == lookup.end()) {
			std::cout << "I'm sorry, I did not understand that command\n";
			continue;
		}
		switch (itr->second) {
		case option::add:
			std::cout << "Please enter the new term to add into the dictionary:\n";
			std::cin >> word;
			std::cout << "Enter the definition:\n";
			std::cin.ignore();
			getline(std::cin, definition);
			dict.AddDefinition(word, definition);
			break;
		case option::get:
			std::cout << "Please enter word to look up in the dictionary:\n";
			std::cin >> word;
			definition = dict.GetDefinition(word);
			std::cout << word << " : " << definition << std::endl;
			break;
		case option::print:
			dict.PrintAll();
			break;
		case option::quit:
			isComplete = true;
			break;
		default: 
			break;
		}
	}
	return 0;
}

void toLower(std::string& word) {
	for (auto& c : word) {
		c = tolower(c);
	};
}