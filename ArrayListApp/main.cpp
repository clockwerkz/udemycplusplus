#include <iostream>
#include "ArrayList.h"	

void testArrayList();

int main() {
	testArrayList();
	return 0;
}

void testArrayList() {
	ArrayList myList;
	for (int i = 1; i < 16; i++) {
		myList.add(i * 10);
	}
	myList.printList();
	std::cout << "\n\n\n";
	std::cout << "Size is " << myList.size() << std::endl;

	myList.add(555, 15);
	myList.set(1010, 2);
	std::cout << "Size is " << myList.size() << std::endl;
	myList.printList();
	myList.makeEmpty();
}