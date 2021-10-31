/*
Function declarations for cCricularLinkedList
*/
#pragma once
#include "cNode.h"
#include <iostream>
using namespace std;
class cCircularList
{
	cNode * headNode;
	int count;
public:
	cCircularList();
	cCircularList(cNode *& ptr);
	cNode * remove();
	cNode * removeAt(int index);
	cCircularList &insert(cNode *&ptr);

	cCircularList & insertAt(int index, cNode *&ptr);
	void print() const;
	cNode& operator[](int Index);
	cCircularList& swapNodesAt(int index1, int index2);
	void sorting();
	cCircularList(const cCircularList& src);
	cCircularList& operator =(const cCircularList& robj);
	cCircularList & reverse();
	cCircularList& flip();
	~cCircularList();
};
