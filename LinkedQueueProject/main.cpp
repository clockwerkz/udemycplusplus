#include <iostream>
#include "LinkQueue.h"

int main() {
	LinkQueue* queue = new LinkQueue();
	for (int i = 1; i < 31; i++) {
		queue->enqueue(i*100);
	}
	while (!queue->isEmpty()) {
		std::cout << "dequeuing: " << queue->dequeue() << std::endl;
	}
	for (int i = 5; i < 37; i++) {
		queue->enqueue(i);
	}
	std::cout << "Peeking: " << queue->peekFront() << std::endl;
	while (!queue->isEmpty()) {
		std::cout << "dequeuing: " << queue->dequeue() << std::endl;
	}
	return 0;
}