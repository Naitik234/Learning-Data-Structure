#include "cNode.h"

cNode::cNode()
{
}

cNode::cNode(int d):data(d){
}

cNode::int getData(){
			return data;
		}

cNode::cNode* setData(int data){
        	this->data=data;
		}
		
cNode::void print()const{
			cout<<data<<" ";
		}
cNode::int getPriority()const{
	return priority;
}

cNode::void setPriority(int Prior){
	this->priority=prior;
}

cNode::~cNode()
{
}
