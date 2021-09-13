#include <iostream>
#include "ListStack.h"


void printStack(ListStack*& stack);
int main() {
	std::cout << "Running stack tests:\n";
	ListStack* stack = new ListStack();
	for (int i = 1; i <= 10; i++) {
		stack->push(i * 2);
	}
	printStack(stack);
	for (int i = 1; i <= 10; i++) {
		stack->pop();
		std::cout << "peeking: " << stack->peek() << std::endl;
	}
	return 0;
}
void printStack(ListStack*& stack) {
	ListStack* temp = new ListStack();
	while (!stack->isEmpty()) {
		temp->push(stack->pop());
	}
	int count = 1;
	while (!temp->isEmpty())
	{
		int el = temp->pop();
		stack->push(el);
		std::cout << "element " << count++ << ": " << el << std::endl;
	}
	delete temp;
}
