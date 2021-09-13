#ifndef LIST_STACK_H
#define LIST_STACK_H
#include <iostream> //TODO: Replace print error msgs with exception throwing
#include "Stack.h"
#include "LinkedList.h"

class ListStack : public Stack {
	public:
		ListStack(){
			stack = new LinkedList();
		}
		void push(int element) {
			int last = stack->size();
			stack->add(element, 0);
		};

		int pop() {
			if (stack->isEmpty()) {
				std::cout << "No elements to return, stack is empty\n";
				return -1;
			}
			int data = stack->remove(0);
			return data;
		};

		int peek() const {
			if (stack->isEmpty()) {
				std::cout << "No elements to view, stack is empty\n";
				return -1;
			}
			int data = stack->remove(0);
			stack->add(data, 0);
			return data;
		};

		bool isEmpty() const {
			return stack->isEmpty();
		};

		void makeEmpty() {
			stack->makeEmpty();
	
		};
		virtual ~ListStack() {
			stack->makeEmpty();
			delete stack;
		}
	private:
		LinkedList* stack;

};

#endif