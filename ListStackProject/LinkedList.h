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
				std::cout << "Position " << position << " is out of current range of Elements (" << mNumElements << ")" << std::endl;
				return;
			}
			Node* newNode = new Node{ newEntry, mHead };
			if (position == 0) {
				mHead = newNode;
			}
			else {
				Node* prevPtr = mHead;
				for (int i=0; i < position - 1; i++)
				{
					prevPtr =  prevPtr->next;
				}
				Node* nextNode = prevPtr->next;
				prevPtr->next = newNode;
				newNode->next = nextNode;
			}
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
			int position = 0;
			Node* ptr = mHead;
			while (ptr != nullptr) {
				if (ptr->data == entry) {
					return position;
				}
				position++;
				ptr = ptr->next;
			}
			return -1;
		};

		int remove(int position) {
			if (position > mNumElements - 1 || position < 0) {
				std::cout << "Position is out of current range of Elements" << std::endl;
				return -1;
			}
			Node* nodeToDelete;
			if (position == 0) {
				nodeToDelete = mHead;
				mHead = mHead->next;

			}
			else {
				Node* prevPtr = mHead;
				for (int i = 0; i < position - 1; i++) {
					prevPtr = prevPtr->next;
				}
				nodeToDelete = prevPtr->next;
				prevPtr->next = prevPtr->next->next;
			}
			int dataToReturn = nodeToDelete->data;
			delete nodeToDelete;
			mNumElements--;
			return dataToReturn;
		};

		void makeEmpty() {
			std::cout << "makeEmpty called\n";
			Node* NodeToDelete;
			Node* ptr = mHead;
			
			while (mHead != nullptr) {
				NodeToDelete = mHead;
				mHead =mHead->next;
				delete NodeToDelete;
			}
			mNumElements = 0;
		};

		int size() const {
			return mNumElements;
		};

		bool isEmpty() const {
			return mNumElements == 0;
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