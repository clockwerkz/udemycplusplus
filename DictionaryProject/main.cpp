#include <iostream>
#include "Dictionary.h"

int main() {
	Dictionary dict = Dictionary();
	dict.AddDefinition("Addition", "Adding values together for a larger value");
	std::cout << "Definition for Addition: " << dict.GetDefinition("Addition") << std::endl;
	std::cout << "Looking up Google should return NOT FOUND: " << dict.GetDefinition("Google") << std::endl;
	std::cout << "Printing dict:\n-----------\n";
	dict.PrintAll();
	return 0;
}