#ifndef LINK_QUEUE_H
#define LINK_QUEUE_H
#include <iostream>
#include "Queue.h"

struct Node {
	int data;
	Node* prev;
	Node* next;
};

class LinkQueue : public Queue {
	public:
		LinkQueue() {
			front = nullptr;
			back = nullptr;
		}
		void enqueue(int newEntry) {
			Node* newNode = new Node{ newEntry };
			if (front == nullptr) {
				front = back = newNode;
			}
			else {
				back->next = newNode;
			}
		};
		
		virtual int dequeue() {
		};
		
		int peekFront() const {
		};

		bool isEmpty() const {
			return front == nullptr;
		};

		void makeEmpty() {
		};
	private:
		Node* front;
		Node* back;
};

#endif