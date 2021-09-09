#include <iostream>
#include <map>
#include "Dictionary.h"

enum option {
	add,
	get,
	print,
	exit
};

const std::map<std::string, option> lookup{
	{"add", add},
	{"get", get},
	{"print", print},
	{"exit", exit}
};

void toLower(std::string& word);
const std::string ADD = "add";

int main() {
	Dictionary dict = Dictionary();
	bool isComplete = false;
	std::string choice, word, definition;
	std::cout << "Welcome to the Dictionary Manager!\n\n";
	while (!isComplete) {
		std::cout << "Would you like to: add, get, print, or exit? ";
		std::cin >> choice;
		toLower(choice);
		switch (lookup["edit"]) {
		case add:
			std::cout << "Please enter the new term to add into the dictionary:\n";
			std::cin >> word;
			std::cout << "Enter the definition:\n";
			std::cin.ignore();
			getline(std::cin, definition);
			dict.AddDefinition(word, definition);
			break;
		case get:
			std::cout << "Please enter word to look up in the dictionary:\n";
			std::cin >> word;
			definition = dict.GetDefinition(word);
			std::cout << word << " : " << definition << std::endl;
		case print:
			dict.PrintAll();
			break;
		case exit:
			isComplete = true;
			break;
		default: 
			std::cout << "I'm sorry, I did not understand that command\n";
		}
	}
	return 0;
}

void toLower(std::string& word) {
	for (auto& c : word) {
		c = tolower(c);
	};
}