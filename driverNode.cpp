#include"cNode.cpp"
#include<iostream>
using namespace std;
int main(){





    cNode *ptr1,*ptr2;
    ptr1=new cNode;
    ptr2=new cNode;
    ptr1->setData(2);
    ptr2->setData(2);
    ptr1->setPriority(3);
    ptr2->setPriority(3);
    if(ptr1->isSimilar(ptr2))
    cout<<"Nodes are Equal";
    else
    cout<<"Nodes are not Equal";
    
    return 0;
}