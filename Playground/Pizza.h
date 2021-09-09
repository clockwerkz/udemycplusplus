#ifndef PIZZA_H
#define PIZZA_H
#include <vector>
#include <string>

class Pizza {
	public:
		Pizza(std::string name, int cost, int diameter);
		void AddTopping(std::string topping);
		int GetCost() const;
		int GetDiameter() const;
		void PrintToppings() const;
	private:
		std::string name;
		int cost;
		int diameter;
		std::vector<std::string> toppings;
};

#endif