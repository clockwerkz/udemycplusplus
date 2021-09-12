#include <iostream>
#include "LinkStack.h"


void printStack(LinkStack*& stack);
int main() {

	LinkStack* stack = new LinkStack();
	for (int i = 1; i <= 10; i++) {
		stack->push(i * 2);
	}
	printStack(stack);
	for (int i = 1; i <= 10; i++) {
		stack->pop();
	}
	return 0;
}
void printStack(LinkStack*& stack) {
	LinkStack* temp = new LinkStack();
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
