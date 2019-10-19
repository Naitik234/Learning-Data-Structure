#include "cPriorityQue.h"

cPriorityQue::cPriorityQue()
{
}

cPriorityQue::cPriorityQue(cNode* &ptr):cQue(ptr){
}

 cPriorityQue::add(cNode* &ptr){
if(!top){
    top=tail=ptr;
    tail->next=ptr=NULL;
    }
    else {
        if(top->priority<ptr->priority)
        cStack::push(ptr);    
        else if(tail->priority>=ptr->priority)
        cQue::add(ptr);
        else
        {
            cNode *rptr=top;
            while(rptr->priority>=ptr->priority)
            rptr=rptr->next;
            ptr->next=rptr->next;
            rptr->next=ptr;
            ptr=NULL;   
        }   
        }
        return *this;
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
    if(this==robj)
    return &this;
    ((cQUe*)this)->operator=((cQue&)robj);    //
    return *this;
}

void cPriorityQue::print()const{
    return cQue::print();
}

cPriorityQue::~cPriorityQue()
{
}
