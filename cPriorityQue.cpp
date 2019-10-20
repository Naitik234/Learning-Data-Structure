#include <iostream>
#include "cPriorityQue.h"

using namespace std;

cPriorityQue::cPriorityQue()
{
}

cPriorityQue::cPriorityQue(cNode* &ptr):cQue(ptr){
    ptr=NULL;
}

bool cPriorityQue::isEmpty()const{
   return cQue::isEmpty();
}

bool cPriorityQue::isNotEmpty()const{
   return cQue::isNotEmpty();
}

cPriorityQue& cPriorityQue::add(cNode* &ptr){
if(!top){
    top=tail=ptr;
    tail->next=ptr=NULL;
    }
    else {
        if(top->getPriority()<ptr->getPriority())
        cStack::push(ptr);    
        else if(tail->getPriority()>=ptr->getPriority())
        cQue::add(ptr);
        else
        {
            cNode *rptr=top;
            while(rptr->getPriority()>=ptr->getPriority())
            rptr=rptr->next;
            ptr->next=rptr->next;
            rptr->next=ptr;
            ptr=NULL;   
        }   
        }
        return *this;
}

cNode* cPriorityQue::remove(){
    return cQue::remove();
}

cPriorityQue::cPriorityQue(const cPriorityQue &src){
    this->top=src.top;
    this->tail=src.tail;
    if(src.top){
        cNode *sptr,*dptr;
        dptr=top=new cNode(*src.top);
        sptr=top->next;
        while(sptr)
        {
            dptr->next=new cNode(*sptr);
            dptr=dptr->next;
            sptr=sptr->next;
        }
        tail=dptr;
    }
}

cPriorityQue& cPriorityQue::operator=(const cPriorityQue &robj){
    if(this==&robj)
    return *this;
    ((cQue*)this)->operator=((cQue&)robj);    //
    return *this;
}

void cPriorityQue::Print()const{
    return cQue::print();
}

cPriorityQue::~cPriorityQue()
{
}
