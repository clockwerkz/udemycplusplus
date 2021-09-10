#include "Alien.h"

Alien::Alien(int weight, int height, char gender) : weight(weight), height(height), gender(gender) {};

int Alien::GetWeight() const {
	return weight;
};

int Alien::GetHeight() const {
	return height;
};

char Alien::GetGender() const {
	return gender;
};

int Alien::GetPrestige() const {
	int genderPoints = gender == 'm' ? 2 : 3;
	return height * weight * genderPoints;
};

bool Alien::operator==(Alien& other) {
	return this->GetPrestige() == other.GetPrestige();
};

bool Alien::operator!=(Alien& other) {
	return this->GetPrestige() != other.GetPrestige();
};

bool Alien::operator<(Alien& other) {
	return this->GetPrestige() < other.GetPrestige();
};

bool Alien::operator<=(Alien& other) {
	return this->GetPrestige() <= other.GetPrestige();
};

bool Alien::operator>(Alien& other) {
	return this->GetPrestige() > other.GetPrestige();
};

bool Alien::operator>=(Alien& other) {
	return this->GetPrestige() >= other.GetPrestige();
};