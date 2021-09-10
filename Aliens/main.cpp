#include <iostream>
#include <vector>
#include <memory>
#include <cstdlib>
#include <time.h>

#include "Alien.h"

void printAlien(Alien& alien);

int main() {
	srand(time(nullptr));
	auto aliens = std::make_unique<std::vector<Alien>>();
	for (int i = 0; i < 10; i++) {
		Alien alien = Alien(rand() % 10 + 1, rand() % 10 + 1, (rand() % 10 + 1) <= 3 ? 'f' : 'm');
		aliens->push_back(alien);
	}
	for (int i = 1; i < 10; i++) {
		bool isLessThan = aliens->at(i - 1) < aliens->at(i);
		bool isGreaterThan = aliens->at(i - 1) > aliens->at(i);
		bool isLessThanEqual = aliens->at(i - 1) <= aliens->at(i);
		bool isGreaterThanEqual = aliens->at(i - 1) >= aliens->at(i);
		std::cout << std::boolalpha << "alien " << aliens->at(i - 1).GetPrestige();
		std::cout << " is LESS than alien " << aliens->at(i).GetPrestige() << ": " << isLessThan << std::endl;
		std::cout << std::boolalpha << "alien " << aliens->at(i - 1).GetPrestige();
		std::cout << " is LESS than or EQUAL to alien " << aliens->at(i).GetPrestige() << ": " << isLessThanEqual << std::endl;
		std::cout << std::boolalpha << "alien " << aliens->at(i - 1).GetPrestige();
		std::cout << " is GREATER than alien " << aliens->at(i).GetPrestige() << ": " << isGreaterThan << std::endl;
		std::cout << std::boolalpha << "alien " << aliens->at(i - 1).GetPrestige();
		std::cout << " is GREATER than or EQUAL alien " << aliens->at(i).GetPrestige() << ": " << isGreaterThanEqual << std::endl;

	}
	return 0;
}
void printAlien(Alien& alien) {
	std::cout << "Alien weight: " << alien.GetWeight() << ", height: " << alien.GetHeight();
	std::cout << ", gender: " << alien.GetGender() << ", - Prestige: " << alien.GetPrestige() << std::endl;
}