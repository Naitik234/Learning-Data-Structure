#pragma once
#include"cStack.h"
class cPriorityQue
{

public:
	cPriorityQue();
	cPriorityQue(cNode* &ptr);
	cPriorityQue& add(cNode* &ptr);
	cPriorityQue(const cPriorityQue &src);
	cPriorityQue& operator=(const cPriorityQue &robj);
	void Print() const;
	~cPriorityQue();
};

