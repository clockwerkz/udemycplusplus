#ifndef ARRAY_QUEUE_H
#define ARRAY_QUEUE_H
#include <iostream>
#include "Queue.h"
class ArrayQueue : public Queue {
	public:
		ArrayQueue(int MAX_SIZE = 16) : MAX_SIZE(MAX_SIZE) {
			queue = new int[MAX_SIZE];
			front = 0;
			back = 0;
			mNumElements = 0;
		}
		void enqueue(int newEntry) {
			if (mNumElements >= MAX_SIZE)
			{
				std::cout << "Queue is full, cannot add any more elements.\n";
				return;
			}
			queue[back] = newEntry;
			back = (back + 1) % MAX_SIZE;
			mNumElements++;
		};
		
		int dequeue() {
			if (isEmpty()) {
				std::cout << "Queue is currently empty, no elements to return.\n";
				return -1;
			}
			int data = queue[front];
			front = (front + 1) % MAX_SIZE;
			mNumElements--;
			return data;
		};
		
		int peekFront() const {
			if (isEmpty()) {
				std::cout << "Queue is currently empty, no elements to return.\n";
				return -1;
			}
			return queue[front];
		};
		
		bool isEmpty() const {
			return mNumElements == 0;
		};
		
		void makeEmpty() {
			mNumElements = 0;
			front = 0;
			back = 0;
		};

		virtual ~ArrayQueue() {
			delete[] queue;
		}
	private:
		int* queue;
		int MAX_SIZE;
		int front;
		int back;
		int mNumElements;
};

#endif