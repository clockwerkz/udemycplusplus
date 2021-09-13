#include <iostream>
#include "ListStack.h"


void printStack(ListStack*& stack);
int main() {
	std::cout << "Running stack tests:\n-------------\n\n";
	ListStack* stack = new ListStack();
	std::cout << "Peek and pop operations on an empty stack:\n";
	std::cout << "Peek: " << stack->peek() << std::endl;
	std::cout << "Pop: " << stack->pop() << std::endl;
	std::cout << "Adding one element, 5, to the stack, and then running peek and pop:\n";
	stack->push(5);
	std::cout << "Peek: " << stack->peek() << std::endl;
	std::cout << "Pop: " << stack->pop() << std::endl;
	std::cout << "Adding two elements, 5 and 10, to the stack, and then running peek and pop:\n";
	stack->push(5);
	stack->push(10);
	std::cout << "Peek: " << stack->peek() << std::endl;
	std::cout << "Pop: " << stack->pop() << std::endl;
	std::cout << "Peek: " << stack->peek() << std::endl;
	std::cout << "Pop: " << stack->pop() << std::endl;
	std::cout << "Peek and pop operations on an empty stack:\n";
	std::cout << "Peek: " << stack->peek() << std::endl;
	std::cout << "Pop: " << stack->pop() << std::endl;
	for (int i = 1; i <= 10; i++) {
		stack->push(i * 2);
	}
	std::cout << "Peeking should show 20: " << stack->peek() << std::endl;
	printStack(stack);
	for (int i = 1; i <= 10; i++) {
		std::cout << "peeking: " << stack->peek() << std::endl;
		stack->pop();
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
