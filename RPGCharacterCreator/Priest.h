#ifndef PRIEST_H
#define PRIEST_H
#include "Player.h"
#include "Race.h"
#include <string>

class Priest : public Player {
public:
	Priest(std::string name, Race race) : Player(name, race, 100, 200) {};

	std::string Attack() const {
		return "I will assault you with Holy Wrath!";
	}
};

#endif