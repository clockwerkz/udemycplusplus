#ifndef LIST_STACK_H
#define LIST_STACK_H
#include "Stack.h"
#include "LinkedList.h"

class ListStack : public Stack {
	public:
		ListStack(){
			stack = new LinkedList();
		}
		void push(int element) {
			int last = stack->size();
			stack->add(element, last);
		};

		int pop() {
			if (stack->isEmpty()) {
				return -1;
			}
			int data = stack->remove(0);
			return data;
		};

		int peek() const {
			if (stack->isEmpty()) {
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