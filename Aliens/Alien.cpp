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

Alien Alien::operator+(Alien& other) const {
	srand(time(nullptr));
	int childWeight = (this->weight + other.weight) / 2;
	int childHeight = (this->height + other.height) / 2;
	char childGender = rand() % 10 + 1 <= 3 ? 'f' : 'm';
	return Alien(childWeight, childHeight, childGender);
};

bool Alien::operator==(Alien& other) const {
	return this->GetPrestige() == other.GetPrestige();
};

bool Alien::operator!=(Alien& other) const {
	return this->GetPrestige() != other.GetPrestige();
};

bool Alien::operator<(Alien& other) const {
	return this->GetPrestige() < other.GetPrestige();
};

bool Alien::operator<=(Alien& other) const {
	return this->GetPrestige() <= other.GetPrestige();
};

bool Alien::operator>(Alien& other) const {
	return this->GetPrestige() > other.GetPrestige();
};

bool Alien::operator>=(Alien& other) const {
	return this->GetPrestige() >= other.GetPrestige();
};

void Alien::operator=(Alien& other) {
	weight = other.weight;
	height = other.height;
	gender = other.gender;
}