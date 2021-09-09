#include "House.h"

int main()
{
	House myHouse;
	myHouse.setColor("tan");
	myHouse.setNumStories(2);
	myHouse.setNumWindows(6);

	House yourHouse;
	yourHouse.setColor("dodger blue");
	yourHouse.setNumStories(3);
	yourHouse.setNumWindows(10);

	myHouse.printHouseData();
	yourHouse.printHouseData();
	House testHouse("light green", 3, 14);
	testHouse.printHouseData();

	return 0;
}
