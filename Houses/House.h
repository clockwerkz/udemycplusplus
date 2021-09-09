#ifndef HOUSE_H
#define HOUSE_H

#include <string>

using namespace std;

class House {
public:
	House(string color, int numStories, int numWindows);
	House();
	//setters
	void setNumStories(int numStories);
	void setNumWindows(int numWindows);
	void setColor(string color);
	
	//getters
	int getNumStories() const;
	int getNumWindows() const;
	string getColor() const;

	void printHouseData() const;

private:
	int numStories;
	int numWindows;
	string color;
};

#endif HOUSE_H