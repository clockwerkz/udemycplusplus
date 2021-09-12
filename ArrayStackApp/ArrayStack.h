#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H
#include <iostream>
#include "Stack.h"

class ArrayStack : public Stack {
	public:
		ArrayStack(int MAX_SIZE = 16) : MAX_SIZE(MAX_SIZE) {
			mStack = new int[MAX_SIZE];
			mCount = 0;
		};

		void push(int element) {
			if (mCount >= MAX_SIZE) {
				std::cout << "Max capacity reached - unable to add element\n";
				return;
			}
			mStack[mCount++] = element;
		}

		int peek() const {
			if (mCount == 0) {
				return -1;
			}
			return mStack[mCount - 1];
		}

		int pop() {
			if (mCount == 0) {
				return -1;
			}
			mCount--;
			return mStack[mCount];
		}

		bool isEmpty() const{
			return mCount == 0;
		}

		void makeEmpty() {
			mCount = 0;
		}

		virtual ~ArrayStack() {
			delete mStack;
		}

	private:
		int MAX_SIZE;
		int* mStack;
		int mCount;
};

#endif