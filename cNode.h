#pragma once
#include<fstream>
using namespace std;
class cNode
{
	int data;
	int priority;
public:
	cNode *next;
	cNode();
	cNode(int d);
	cNode(int d, int p);
	cNode(ifstream &inFile);
	cNode(ofstream &ofile);
	int getData()const;
	void setData(int data);
	void print()const;
    int getPriority() const;
	bool isSimilar(cNode* &ptr);
	void setPriority(int prior);
    void writeNodeToFile(ofstream &outData); 
    void readNodeFromFile(ifstream &inData);
	~cNode();
};

