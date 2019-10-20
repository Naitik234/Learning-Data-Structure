#pragma once
#include"cQue.h"
class cPriorityQue:public cQue
{

public:
	cPriorityQue();
	cPriorityQue(cNode* &ptr);
	bool isNotEmpty()const;
	bool isEmpty()const;
	cPriorityQue& add(cNode* &ptr);
	cNode* remove();
	cPriorityQue(const cPriorityQue &src);
	cPriorityQue& operator=(const cPriorityQue &robj);
	void Print() const;
	~cPriorityQue();
};

