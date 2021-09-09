#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
	public:
		Rectangle(double length, double width);
		Rectangle();

		double GetLength() const;
		double GetWidth() const;
		void SetLength(double length);
		void SetWidth(double width);
		double Area() const;
		double Perimeter() const;

	private:
		double length;
		double width;
};

#endif RECTANGLE_H