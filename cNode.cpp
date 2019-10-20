#include <iostream>
#include "cNode.h"
#include<fstream>

using namespace std;

cNode::cNode() :data(0),priority(0)
{
}

cNode::cNode(int d):data(d), priority(0){
}

cNode::cNode(int d, int p):data(d), priority(p){
}

cNode::cNode(ifstream &inFile)
{
  inFile.read((char *)this, sizeof(this)*2);
}

cNode::cNode(ofstream &oFile)
{
  oFile.write((char *)this, sizeof(this)*2);
}

int cNode::getData()const{
			return data;
		}

void cNode::setData(int data){
        	this->data=data;
		}
		
void cNode::print()const{
			cout<<data<<" ";
		}
int cNode::getPriority()const{
	return priority;
}

void cNode::setPriority(int Prior){
	this->priority=Prior;
}

bool cNode::isSimilar(cNode* &ptr){
	if(ptr->getData()==this->getData())
	  if(ptr->getPriority()==this->getPriority())
	    return true;
	return false;
}

void cNode::writeNodeToFile(ofstream &outData)
{
  outData.write((char *)this, sizeof(this)*2);
}

void cNode::readNodeFromFile(ifstream &inData)
{
  inData.read((char *)this, sizeof(this)*2);
}

cNode::~cNode()
{
}
