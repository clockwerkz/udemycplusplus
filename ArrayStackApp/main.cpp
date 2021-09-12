#include <iostream>
#include "ArrayStack.h"
int main() {
	ArrayStack* stack = new ArrayStack();
	stack->push(80);
	stack->push(304);
	std::cout << "stack peek: " << stack->peek() << std::endl;
	for (int i = 0; i < 5; i++) {
		stack->push(i);
	}
	std::cout << "stack peek: " << stack->peek() << std::endl;
	while (!stack->isEmpty()) {
		int el = stack->pop();
		std::cout << "element removed: " << el << std::endl;
	}
	delete stack;
	return 0;
}