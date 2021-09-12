#include <iostream>
#include "ArrayStack.h"

void printStack(ArrayStack* &stack);
int main() {
	ArrayStack* stack = new ArrayStack();
	stack->push(80);
	stack->push(304);
	for (int i = 0; i < 5; i++) {
		stack->push(i);
	}
	std::cout << "current top of stack: " << stack->peek() << std::endl;
	printStack(stack);
	delete stack;
	return 0;
}

void printStack(ArrayStack* &stack) {
	ArrayStack* temp = new ArrayStack();
	while (!stack->isEmpty()) {
		temp->push(stack->pop());
	}
	int count = 1;
	while (!temp->isEmpty())
	{
		stack->push(temp->pop());
		std::cout << "element " << count++ << ": " << stack->peek() << std::endl;
	}
	delete temp;
}