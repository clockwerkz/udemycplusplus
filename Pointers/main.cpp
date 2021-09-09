#include <iostream>
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

void noConst();

void cp2ncd();

void ncp2cd();

void cp2cd();

void noChange(const double* const dblPtr);


int main() {
	//int size;
	//cout << "Enter a number for the length of the array: ";
	//cin >> size;

	//int* arr = new int[size];

	//for (int i = 0; i < size; i++) {
	//	arr[i] = (i+1) * 3;
	//}

	//for (int i = 0; i < size; i++) {
	//	cout << arr[i] << endl;
	//}
	//
	//delete[] arr;
	//arr = nullptr;

	cout << "How many circles are you creating? ";
	int numCircles;
	cin >> numCircles;

	Circle** circles = new Circle * [numCircles];
	for (int i = 0; i < numCircles; i++) {
		double radius;
		cout << "Circle #" << i + 1 << "- please enter the radius: ";
		cin >> radius;
		circles[i] = new Circle(radius);
	}
	for (int i = 0; i < numCircles; i++) {
		cout << "Circle #" << i + 1 << ", circumferenece: " << circles[i]->circumference() << ", area: " << circles[i]->area() << endl;
		delete circles[i];
	}

	delete circles;
	/*Rectangle* rectangles[3];
	rectangles[0] = new Rectangle(5, 3);
	rectangles[1] = new Rectangle(4, 4);
	rectangles[2] = new Rectangle(10, 2);

	cout << "Rectangles\n" << "------------\n";
	for (int i = 0; i < 3; i++) {
		cout << "Rectangle #" << i + 1 << "-- Area: " << rectangles[i]->area() << ", perimeter: " << rectangles[i]->perimeter() << "." << endl;
		delete rectangles[i];
		rectangles[i] = nullptr;
	}*/
	

	double* dblPointer = new double(3.14 );
	noChange(dblPointer);
	delete dblPointer;
	dblPointer = nullptr;

	noConst();
	cout << endl;

	cp2ncd();
	cout << endl;

	ncp2cd();
	cout << endl;

	cp2cd();
	cout << endl;


	return 0;
}

void noChange(const double* const dblPtr)
{
	cout << "Double Value: " << *dblPtr << ", memory location: " << dblPtr << endl;
	//dblPtr = new double(1340); Nope
	//*dblPtr = 3405; Nope
}

void noConst() {
	cout << "In no Const" << endl;
	int* intPtr = new int(50);
	cout << "\toriginal value: " << *intPtr << endl;
	*intPtr = 100;
	cout << "\tchange value: " << *intPtr << endl;
	delete intPtr;
	intPtr = new int(125);
	cout << "\tnew integer entirely: " << *intPtr << endl;
	delete intPtr;
	intPtr = nullptr;
}

void cp2ncd() {
	cout << "In cp2ncd" << endl;
	int* const intPtr = new int(50);
	cout << "\toriginal value: " << *intPtr << endl;
	*intPtr = 100;
	cout << "\tmodified value: " << *intPtr << endl;
	delete intPtr;
	//intPtr = new int(140);ERR Not allowed with a const int pointer

}

void ncp2cd() {
	cout << "In ncp2cd" << endl;
	const int* intPtr = new int(150);
	cout << "\toriginal value: " << *intPtr << endl;
	intPtr = new int(320);
	cout << "\tmodified value: " << *intPtr << endl;
	//*intPtr = 230; Error: Not allowed!
	delete intPtr;
}

void cp2cd() {
	cout << "In cp2cd" << endl;
	const int* const intPtr = new int(102);
	cout << "\toriginal value: " << *intPtr << endl;
	//intPtr = new int(1); Error: Pointer is constant
	//*intPtr = 203; Data is constant as well
	delete intPtr;
}