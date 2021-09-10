#ifndef ALIEN_H
#define ALIEN_H
#include <cstdlib>
#include <time.h>

class Alien {
	public:
		Alien(int weight, int height, char gender);
		int GetWeight() const;
		int GetHeight() const;
		char GetGender() const;
		int GetPrestige() const;
		bool operator==(Alien& other);
		bool operator!=(Alien& other);
		bool operator<(Alien& other);
		bool operator<=(Alien& other);
		bool operator>(Alien& other);
		bool operator>=(Alien& other);
		Alien operator+(Alien& other);
	private:
		int weight;
		int height;
		char gender;
};

#endif