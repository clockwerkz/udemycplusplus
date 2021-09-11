#include <iostream>
#include "LinkedList.h"

void testLinkedList();

int main() {
	testLinkedList();
	return 0;
}

void testLinkedList() {
	LinkedList myList;
	for (int i = 0; i < 15; i++) {
		myList.add(i * 10 + 1);
	}
	myList.printList();
	std::cout << "\n\n\n";
	std::cout << "Size is " << myList.size() << std::endl;

	myList.add(403, 0);
	myList.add(555, 1);
	std::cout << "Size is " << myList.size() << std::endl;
	//myList.set(1010, 2);
	myList.printList();
	/*
	std::cout << "Size is " << myList.size() << std::endl;
	myList.makeEmpty();
	*/
}