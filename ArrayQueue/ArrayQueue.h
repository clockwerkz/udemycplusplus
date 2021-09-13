#ifndef ARRAY_QUEUE_H
#define ARRAY_QUEUE_H
#include <iostream>
#include "Queue.h"
class ArrayQueue : public Queue {
	public:
		ArrayQueue(int MAX_SIZE = 16) : MAX_SIZE(MAX_SIZE) {
			queue = new int[MAX_SIZE];
			mNumElements = 0;
		}
		void enqueue(int newEntry) {
			if (mNumElements >= MAX_SIZE - 1)
			{
				std::cout << "Queue is full, cannot add any more elements.\n";
				return;
			}
			queue[mNumElements++] = newEntry;
		};
		
		int dequeue() {
			if (isEmpty()) {
				std::cout << "Queue is currently empty, no elements to return.\n";
				return -1;
			}
			int data = queue[0];
			mNumElements--;
			for (int i = 0; i < mNumElements-1; i++) {
				queue[i] = queue[i + 1];
			}
			return data;
		};
		
		int peekFront() const {
			if (isEmpty()) {
				std::cout << "Queue is currently empty, no elements to return.\n";
				return -1;
			}
			return queue[0];
		};
		
		bool isEmpty() const {
			return mNumElements == 0;
		};
		
		void makeEmpty() {
			mNumElements = 0;
		};

		virtual ~ArrayQueue() {
			delete queue;
		}
	private:
		int* queue;
		int MAX_SIZE;
		int mNumElements;
};

#endif