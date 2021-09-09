#ifndef WARRIOR_H
#define WARRIOR_H
#include "Player.h"
#include "Race.h"
#include <string>

class Warrior : public Player {
	public:
		Warrior(std::string name, Race race) : Player(name, race, 200, 0) {};

		std::string Attack() const {
			return "I will destroy you with my sword, foul demon!";
		}
};

#endif