#include "Pizza.h"
#include <iostream>

using namespace std;

Pizza::Pizza(string name, int cost, int diameter):name(name), cost(cost), diameter(diameter) {}

void Pizza::AddTopping(std::string topping) {
	toppings.push_back(topping);
};

int Pizza::GetCost() const {
	return cost;
};
int Pizza::GetDiameter() const {
	return diameter;
};


void Pizza::PrintToppings() const {
	cout << name << (name[name.size()-1] == 's' ? "'" : "'s") << " current toppings: ";
	string strToppings = "";
	for (string topping : toppings) {
		strToppings += topping + ", ";
	}
	cout << strToppings.substr(0, strToppings.size() - 2) << '.' << endl;
};