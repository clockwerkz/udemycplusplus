#ifndef LINK_STACK_H
#define LINK_STACK_H
#include "Stack.h"
#include <iostream> //Including for test purposes - TODO remove print statements and remove this include

struct Node {
	int data;
	Node *next;
};


class LinkStack : public Stack {
	public:
		void push(int element) {
			Node* newNode = new Node{ element, mTop };
			mTop = newNode;
		};
		
		int pop() {
			if (isEmpty()) {
				return -1; //TODO: throw exception
			}
			Node* nodeToDelete = mTop;
			int data = mTop->data;
			mTop = mTop->next;
			delete nodeToDelete;
			std::cout << "mTop is pointing to: " << mTop << std::boolalpha << " nullptr? " << (mTop == nullptr) << std::endl;
		};
		
		int peek() const {
			if (isEmpty()) {
				return -1; //TODO: throw exception
			}
			return mTop->data;
		};
		
		bool isEmpty() const {
			return mTop == nullptr;
		};
		
		void makeEmpty() {
			while (!isEmpty()) {
				pop();
			}
		};
		virtual ~LinkStack() {
			makeEmpty();
		}
	private:
		Node* mTop = nullptr;
};

#endif