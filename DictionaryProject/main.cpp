#include <iostream>
#include "Dictionary.h"

void toLower(std::string& word);
const std::string ADD = "add";

int main() {
	Dictionary dict = Dictionary();
	dict.AddDefinition("Addition", "Adding values together for a larger value");
	std::cout << "Definition for Addition: " << dict.GetDefinition("Addition") << std::endl;
	std::cout << "Looking up Google should return NOT FOUND: " << dict.GetDefinition("Google") << std::endl;
	std::cout << "Printing dict:\n-----------\n";
	dict.PrintAll();
	std::string choice, word, definition;
	std::cout << "Welcome to the Dictionary Manager!\n\n";
	while (choice == "exit") {
		std::cout << "Would you like to: add, get, print, or exit? ";
		std::cin >> choice;
		toLower(choice);
		switch (choice) {
		case ADD:
			std::cout
		default: 
			std::cout << "I'm sorry, I did not understand that command\n";
		}
	}
	std::string test = "TEST";
	toLower(test);
	std::cout << test << std::endl;
	return 0;
}

void toLower(std::string& word) {
	for (auto& c : word) {
		c = tolower(c);
	};
}