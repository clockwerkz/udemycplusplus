#include <iostream>
#include "LinkQueue.h"

int main() {
	LinkQueue* queue = new LinkQueue();
	for (int i = 1; i < 6; i++) {
		std::cout << "Empty? " << std::boolalpha << queue->isEmpty() << " - queuing: " << i * 100 << std::endl;
		queue->enqueue(i*100);
		std::cout << "Peeking: " << queue->peekFront() << std::endl;
	}
	std::cout << "finished" << std::endl;
	while (!queue->isEmpty()) {
		std::cout << "dequeuing: " << queue->dequeue() << std::endl;
	}
	for (int i = 5; i < 37; i++) {
		queue->enqueue(i);
	}
	while (!queue->isEmpty()) {
		std::cout << "dequeuing: " << queue->dequeue() << std::endl;
	}
	return 0;
}