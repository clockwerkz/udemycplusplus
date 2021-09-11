#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>
#include "List.h"

//------------------- Node Struct -------------------------//

struct Node {
	int data;
	Node* next;
};


//---------------- LinkedList Class ----------------------//

class LinkedList : public List {

	public: 
		LinkedList(int s = 16) {
			mHead = nullptr;
			mNumElements = 0;
		}

		void add(int newEntry) {
			Node* newNode = new Node{ newEntry, mHead};
			mHead = newNode;
			mNumElements++;
		};

		void add(int newEntry, int position) {
			if (position > mNumElements + 1 || position < 0) {
				std::cout << "Position is out of current range of Elements" << std::endl;
				return;
			}
			if (position == 0) {
				return add(newEntry);
			}
			Node* prevPtr = mHead;
			for (int i=0; i < position - 1; i++)
			{
				prevPtr = prevPtr->next;
			}
			std::cout << "Previous Node: " << prevPtr->data << std::endl;
			Node* newNode = new Node{ newEntry, prevPtr->next };
			prevPtr->next = newNode;
			mNumElements++;
		};

		void set(int newEntry, int position) {
			if (position > mNumElements + 1 || position <= 0) {
				std::cout << "Position is out of current range of Elements" << std::endl;
				return;
			}
			Node* ptr = mHead;
			for (int i = 1; i < position; i++) {
				ptr = ptr->next;
			}
			ptr->data = newEntry;
		};

		bool contains(int entry) const {
			Node* ptr = mHead;
			while (ptr != nullptr) {
				if (ptr->data == entry) {
					return true;
				}
			}
			return false;
		};
	
		int find(int entry) const {

			return -1;
		};

		int remove(int position) {
			return -1;
		};

		void makeEmpty() {
		
		};

		int size() const {
			return mNumElements;
		};

		bool isEmpty() const {
			return false;
		};

		void printList() const {
			int count = 0;
			Node* ptr = mHead;
			while (ptr != nullptr) {
				std::cout << count++ << ": " << ptr->data << std::endl;
				ptr = ptr->next;
			}
		};

		virtual ~LinkedList()
		{
			makeEmpty();
		}

	private:
		Node* mHead;
		int mNumElements;
};


#endif