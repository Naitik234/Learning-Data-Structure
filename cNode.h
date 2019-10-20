#pragma once
class cNode
{
	int data;
	int priority;
public:
	cNode *next;
	cNode();
	cNode(int d);
	cNode(int d, int p);
	int getData()const;
	void setData(int data);
	void print()const;
    int getPriority() const;
	bool isSimilar(cNode* &ptr);
	void setPriority(int prior);
	~cNode();
};

