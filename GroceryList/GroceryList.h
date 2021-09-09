#ifndef GROCERY_LIST_H
#define GROCERY_LIST_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class GroceryList {
	public:
		bool HasGroceryItem(const string &itemName);
		void AddItem(const string &itemName);
		void UpdateItem(string itemName);
		void UpdateItem(string itemName, int count);
		void PrintGroceryList() const;
	private:
		vector <string> items;
		vector <int> itemCount;
		vector<string>::const_iterator _find(const string &itemName);
};

#endif