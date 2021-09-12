#include <iostream>
#include "LinkStack.h"

int main() {

	LinkStack* stack = new LinkStack();
	for (int i = 1; i <= 10; i++) {
		stack->push(i * 2);
	}
	for (int i = 1; i <= 10; i++) {
		std::cout << "Peeking stack: " << stack->peek() << std::endl;
		stack->pop();
	}
	return 0;
}