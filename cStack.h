#pragma once
#include "cNode.h"
class cStack
{
	int count;
protected:
	cNode* top;
public:
	cStack();
	cStack(cNode* &ptr);
	cStack(ifstream &inFile);
	bool isNotEmpty()const;
	bool isEmpty()const;
	cStack& push(cNode* &ptr);
	cNode* pop();
	void print()const;
	cStack(const cStack &src);
	cStack& operator=(const cStack& obj);
	void writeToFile(ofstream &oFile);     
    cStack &readFromFile(ifstream &iFile);
	~cStack();
};

