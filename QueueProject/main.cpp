#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	queue<string> *line = new queue<string>;
	string names[5]{ "John", "Bob", "Sam", "Ali", "Karen" };
	for (string name : names) {
		line->push(name);
	}
	while (!line->empty()) {
		cout << "Next in line is: " << line->front() << endl;
		line->pop();
	}
	delete line;
	line = nullptr;
	return 0;
}