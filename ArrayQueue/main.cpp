#include <iostream>
#include "ArrayQueue.h"

int main() {
	ArrayQueue* queue = new ArrayQueue(30);
	for (int i = 1; i < 32; i++) {
		queue->enqueue(i);
	}
	for (int i = 0; i < 10; i++) {
		std::cout << "dequeuing: " << queue->dequeue() << std::endl;
	}
	std::cout << "Peeking: " << queue->peekFront() << std::endl;
	queue->makeEmpty();
	std::cout << "Peeking: " << queue->peekFront() << std::endl;
	return 0;
}