#ifndef __LINKLIST_H
#define __LINKLIST_H

template<typename T>
class LinkList {
private:
	class Node {
	public:
		T mData;
		Node* mNext;
		Node* mPrevious;
	};
public:
	class Iterator {
	private:
		Node* mNode;
	public:
		void operator=(Node* node) {
			mNode = node;
		}
		void operator++(int) { // post-increment
			mNode = mNode->mNext;
		}
		void operator++() { //pre-increment
			mNode = mNode->mNext;
		}
		void operator--(int) { // post-decrement
			mNode = mNode->mPrevious;
		}
		void operator--() { //pre-decrement
			mNode = mNode->mPrevious;
		}

		//BigO Notation: O(N)
		//Reason: searchs through list of nodes to see if any or all are NULL, and returns the answer. 
		void operator+=(unsigned rhs) {
			for (unsigned i = 0; i < rhs; i++) {
				mNode = mNode->mNext;
				//_ASSERT_EXPR(mNode != nullptr, L"cannot seek iterator after end");
			}
		}
		bool operator==(Node* node) const {
			return mNode == node;
		}
		bool operator!=(Node* node) const {
			return mNode != node;
		}
		T& operator*() const {
			return mNode->mData;
		}
	};
private:
	Node* mRoot;
	Node* mTail;
	unsigned mSize;

public:
	Node* GetRoot(){
		return mRoot;
	}
	Node* GetTail() {
		return mTail;
	}
	unsigned GetSize() {
		return mSize;
	}

	Node* operator+(int nodeNumber) const {
		Node* node = mRoot;
		for (int i = 0; i < nodeNumber; i++)
		{
			node = node->mNext;
		}
		return node;
	}

	void push_back(T data) {
		Node* node = new Node();
		node->mData = data;
		node->mNext = nullptr;
		node->mPrevious = mTail;

		if (mTail) {
			mTail->mNext = node;
			mTail = node;
		}
		else {
			mRoot = node;
			mTail = node;
		}
		mSize += 1;
	}

	void pop_back() {
		if (mTail == nullptr) { // empty list, do nothing
			return;
		}

		if (mRoot->mNext == nullptr) { // one element, remove it
			delete mRoot;
			mRoot = nullptr;
			mTail = nullptr;
		}
		else { // n elements, remove last
			Node* prev = mRoot;
			while (prev->mNext != mTail) { // look for second-last node
				prev = prev->mNext;
			}
			prev->mNext = nullptr;
			delete mTail;
			mTail = prev;
		}
		mSize -= 1;
	}

	void insert(const Iterator& it, T data) { // insert after
		Node* node = new Node();
		node->mData = data;
		node->mNext = nullptr;

		Node* temp = mRoot;
		while (it != temp && temp != nullptr) {
			temp = temp->mNext;
		}

		if (temp) {
			node->mNext = temp->mNext;
			temp->mNext = node; 
		}
		else {
			delete node;
			// TODO: throw an exception for invalid iterator
			return;
		}
	}

	void remove(const Iterator& it) {
		Node* prev = mRoot;

		if (prev == nullptr) {
			// TODO: throw an exception for invalid iterator
			return;
		}

		while (it != prev->mNext && prev->mNext != nullptr) {
			prev = prev->mNext;
		}

		if (prev->mNext) {
			Node* temp = prev->mNext;
			prev->mNext = temp->mNext;
			delete temp;
		}
		else {
			// TODO: throw an exception for invalid iterator
			return;
		}
		mSize -= 1;
	}

	Node* begin() const {
		return mRoot;
	}

	Node* end() const {
		return nullptr;
	}

	unsigned size() const {
		return mSize;
	}

	LinkList() : mRoot(nullptr), mTail(nullptr), mSize(0) {}
	~LinkList() {
		if (mRoot) {
			Node* next = mRoot->mNext;

			while (next) {
				Node* temp = next;
				next = next->mNext;
				delete temp;
			}
			delete mRoot;
		}
	}
};
#endif