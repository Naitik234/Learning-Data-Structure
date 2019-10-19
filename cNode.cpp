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

cNode::~cNode()
{
}
