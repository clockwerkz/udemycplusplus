#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>
#include "GroceryList.h"

using namespace std;


int main() {
	ifstream infile;
	infile.open("shoppinglist.txt");
	if (!infile) {
		cout << "Error opening the shoppinglist.txt file" << endl;
		return 1;
	}
	unordered_map <string, int> groceryList;
	GroceryList shoppingList;
	string item;
	cout << "---- Processing Grocery List File ----" << endl;
	while (!infile.eof()) {
		infile >> item;
		if (shoppingList.HasGroceryItem(item)) {
			shoppingList.UpdateItem(item);
		}
		else {
			shoppingList.AddItem(item);
		}

		unordered_map<string, int>::iterator found = groceryList.find(item);
		if (found != groceryList.end()) {
			found->second++;
		}
		else {
			groceryList.insert({ item, 1 });
		}
	}
	cout << "DONE." << endl << "---- Printing Out Unordered Map Grocery List ----" << endl;

	unordered_map<string, int>::const_iterator it = groceryList.begin();

	while (it != groceryList.end()) {
		cout << it->first << ": " << it->second << endl;
		it++;
	}

	cout << "---- Printing Out GroceryList class Object ----" << endl;
	shoppingList.PrintGroceryList();

	cout << "Deleting groceryList..." << endl;
	groceryList.clear();
	infile.close();
	cout << "DONE!" << endl;
	return 0;
}