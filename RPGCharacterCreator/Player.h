#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Race.h"

using namespace std;


class Player {
	public:
		Player(string name, Race race, int hitPoints, int magicPoints);
		string GetName() const;
		Race GetRace() const;
		string WhatRace() const;
		int GetHitPoints() const;
		int GetMagicPoints() const;
		void SetName(string name);
		void SetRace(Race race);
		void SetHitPoints(int hitPoints);
		void SetMagicPoints(int magicPoints);
		virtual string Attack() const = 0;
	private:
		string name;
		Race race;
		int hitPoints;
		int magicPoints;
};


#endif