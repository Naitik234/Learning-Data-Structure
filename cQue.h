#pragma once
#include"cStack.h"
class cQue:protected cStack{
	cNode *tail;
public:
	cQue();
	cQue(cNode* &ptr);
	bool isNotEmpty()const;
	bool isEmpty()const;
	cNode* remove();
	cQue& Add(cNode* &ptr);
	void print()const;
	cQue(const cQue &src);
	cQue& operator=(const cQue& obj);
	~cQue();
};

