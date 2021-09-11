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
	std::cout << "\n\n\n";
	std::cout << "Size is " << myList.size() << std::endl;
	myList.printList();
	//std::cout << "Inserting 403 at position 0\n";
	//myList.add(403, 0);
	//myList.printList();
	//std::cout << "Inserting 555 at position 1\n";
	//myList.add(555, 1);
	//myList.printList();
	//std::cout << "Inserting 222 at position " << myList.size() << "\n";;
	//myList.add(222, myList.size());
	//myList.printList();
	//std::cout << "Size is " << myList.size() << std::endl;
	//std::cout << "Location of 3041: " << myList.find(3041) << std::endl;
	//std::cout << "Location of 403: " << myList.find(403) << std::endl;
	//std::cout << "Location of 11: " << myList.find(11) << std::endl;
	std::cout << "Removing position 30:\n";
	myList.remove(30);
	std::cout << "Removing position 0:\n";
	myList.remove(0);
	myList.printList();
	std::cout << "Removing position " << myList.size() -1 <<":\n";
	myList.remove(myList.size() - 1);
	myList.printList();
	std::cout << "Removing position 7:\n";
	myList.remove(7);
	myList.printList();
	myList.makeEmpty();
	/*
	std::cout << "Size is " << myList.size() << std::endl;
	myList.makeEmpty();
	*/
}