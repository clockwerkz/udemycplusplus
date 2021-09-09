#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
	Rectangle rect_1;
	Rectangle rect_2(5, 2);

	cout << "Rect_2 area: " << rect_1.Area() << ", perimeter: " << rect_1.Perimeter() << endl;
	cout << "Rect_2 area: " << rect_2.Area() << ", perimeter: " << rect_2.Perimeter() <<endl;
	rect_1.SetLength(22);
	rect_1.SetWidth(12);
	cout << "Rect_1 update\n";
	cout << "Rect_2 area: " << rect_1.Area() << ", perimeter: " << rect_1.Perimeter() << endl;
	return 0;
}