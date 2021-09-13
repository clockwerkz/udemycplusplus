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
			Node* newNode = new Node{ newEntry, back, nullptr };
			if (front == nullptr) {
				front = newNode;
			}
			else {
				back->next = newNode;
			}
			back = newNode;
		};
		
		virtual int dequeue() {
			if (isEmpty()) {
				return -1;
			}
			Node* nodeToDelete = front;
			front = front->next;
			int data = nodeToDelete->data;
			delete nodeToDelete;
			return data;
		};
		
		int peekFront() const {
			return front->data;
		};

		bool isEmpty() const {
			return front == nullptr;
		};

		void makeEmpty() {
			if (!isEmpty()) {
				return;
			}
			Node* nodeToDelete;
			while (front != nullptr) {
				nodeToDelete = front;
				front = front->next;
				delete nodeToDelete;
			}
			front = back = nullptr;
		};

		virtual ~LinkQueue() {
			makeEmpty();
		}
	private:
		Node* front;
		Node* back;
};

#endif