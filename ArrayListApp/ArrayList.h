#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <iostream>
#include "List.h"

class ArrayList : public List {
	public:
		ArrayList(int s = 16) : MAX_SIZE(s)
		{
			mArray = new int[MAX_SIZE];
			mNumElements = 0;
		}

		void add(int newEntry) {
			if (mNumElements >= MAX_SIZE)
			{
				std::cout << "Cannot add any more elements. List is full" << std::endl;
				return;
			}
			mArray[mNumElements++] = newEntry;
		}

		void add(int newEntry, int position) {
			if (mNumElements >= MAX_SIZE)
			{
				std::cout << "Cannot add any more elements. List is full" << std::endl;
				return;
			}
			if (position < 0 || position >= MAX_SIZE) {
				std::cout << "Position is out of array bounds" << std::endl;
				return;
			}
			for (int i = mNumElements; i > position; i--) {
				mArray[i] = mArray[i - 1];
			}
			mArray[position] = newEntry;
			mNumElements++;
			
		}

		void set(int newEntry, int position) {
			if (position < 0 || position >= MAX_SIZE) {
				std::cout << "Position is out of array bounds" << std::endl;
				return;
			}
			mArray[position] = newEntry;
		}

		bool contains(int entry) const {
			for (int i = 0; i < mNumElements; i++) {
				if (mArray[i] == entry) {
					return true;
				}
			}
			return false;
		}

		int find(int entry) const {
			for (int i = 0; i < mNumElements; i++) {
				if (mArray[i] == entry) {
					return i;
				}
			}
			return -1;
		}

		int remove(int position) {
			if (position < 0 || position >= MAX_SIZE) {
				std::cout << "Position is out of array bounds" << std::endl;
				return -1;
			}
			int elementToRemove = mArray[position];
			for (int i = position; i < mNumElements; i++) {
				mArray[i] = mArray[i + 1];
			}
			mNumElements--;
			return elementToRemove;
		}

		void makeEmpty() {
			delete mArray;
			mArray = new int[MAX_SIZE];
			mNumElements = 0;
		}

		int size() const {
			return mNumElements;
		}
		bool isEmpty() const{
			return mNumElements == 0;
		}
		void printList() const {
			for (int i = 0; i < mNumElements; i++) {
				std::cout << mArray[i] << std::endl;
			}
		}

	private:
		int* mArray;
		const int MAX_SIZE;
		int mNumElements;
};

#endif