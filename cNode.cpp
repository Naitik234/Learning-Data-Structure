#include <iostream>
#include "cNode.h"

using namespace std;

cNode::cNode()
{
}

cNode::cNode(int d):data(d){
}

int cNode::getData(){
			return data;
		}

cNode* cNode::setData(int data){
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

cNode::~cNode()
{
}
