#include "Player.h"
#include "Race.h"

Player::Player(string name, Race race, int hitPoints, int magicPoints) : name(name), race(race),
hitPoints(hitPoints), magicPoints(magicPoints) {};

string Player::GetName() const {
	return name;
};

Race Player::GetRace() const {
	return race;
};

string Player::WhatRace() const {
	switch (race) {
	case HUMAN:
		return "Human";
		break;
	case ELF:
		return "Elf";
		break;
	case DWARF:
		return "Dwarf";
		break;
	case ORC:
		return "Orc";
		break;
	case TROLL:
		return "Troll";
		break;
	}
};

int Player::GetHitPoints() const {
	return hitPoints;
};

int Player::GetMagicPoints() const {
	return magicPoints;
};

void Player::SetName(string name) {
	this->name = name;
};

void Player::SetRace(Race race) {
	this->race = race;
};

void Player::SetHitPoints(int hitPoints) {
	this->hitPoints = hitPoints;
};

void Player::SetMagicPoints(int magicPoints) {
	this->magicPoints = magicPoints;
};