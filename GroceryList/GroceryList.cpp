#include "GroceryList.h"

bool GroceryList::HasGroceryItem(const string &itemName) {
	vector<string>::const_iterator itr = _find(itemName);
	return itr != items.end();
};

void GroceryList::AddItem(const string &itemName) {
	items.push_back(itemName);
	itemCount.push_back(1);
}
void GroceryList::UpdateItem(string itemName) {
	const vector<string>::const_iterator itr = _find(itemName);
	int idx = itr - items.begin();
	itemCount[idx] ++;
};
void GroceryList::UpdateItem(string itemName, int count) {
	const vector<string>::const_iterator itr = _find(itemName);
	int idx = itr - items.begin();
	itemCount[idx]+= count;
};
void GroceryList::PrintGroceryList() const {
	cout << "Grocery List\n------------\n";
	for (int i = 0; i < items.size(); i++) {
		cout << items[i] << ": " << itemCount[i] << endl;
	}
};

vector<string>::const_iterator GroceryList::_find(const string &itemName) {
	return find(items.begin(), items.end(), itemName);
}