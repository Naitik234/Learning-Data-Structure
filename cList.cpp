#include"cList.h"

cList::cList():top(NULL),count(0){
}

cList::cList(cNode* &ptr):top(ptr),count(1){
}

bool cList::isEmpty()const{
    if(top)
        return false;
    else
        return true;
    
}
bool cList::isNotEmpty()const{
    if(top)
    return true;
    else
    return false;
}

cList::cList(const cList &src){
    this->top=src.top;
    this->count=src.count;
    if(src.top){
        cNode *sptr,*dptr;
        dptr=top=new cNode(*src.top);
        sptr=src.top->next;
        while(sptr){
            sptr->next=new cNode(*sptr);
            sptr=sptr->next;
            dptr=dptr->next;
        }
    }

}

cList& cList::operator=(const cList &robj){
    if(this==robj)
    return*this;
    if(true)
    {
        cList temp;
        temp.top=top;
    }
    if(true)
    {
        cList temp=robj;
        top=temp.top;
        temp.top=NULL;
    }
    return *this;
}

cList& cList::insert(cNode* &ptr){
    if(top)
    {
        ptr->next=top;
        top=ptr;
    }
    else
    {
        top=ptr;
        ptr->next=NULL;
    }
    
    ptr=NULL;
    ++count;
}

cList& cList::insertAt(int index,cNode* &ptr){
    if(index<=0)
    {
        insert(ptr);
        return *this;
    }
    if(index>count)
    index=count;

    cNode *rptr=top;
    for(int i=1;i<index;++i)
    rptr=rptr->next;

    ptr->next=rptr->next;
    rptr->next=ptr;
    ptr=NULL;
    ++count;
    return *this;
    
}

cNode* cList::remove()
{
    if(top){
        cNode *ptr=top;
        top=top->next;
        ptr->next=NULL;
        --count;
        return ptr;
    }
}

cNode* cList::removeAt(int index){
    if(index<=0)
    return remove();
    if(index>=count)
    index=count-1;
    cNode *rptr=top;
    for(int i=1;i<index;++i)
    rptr=rptr->next;
    cNode *ptr=rptr->next;
    rptr->next=ptr->next;
    ptr->next=NULL;
    --count;
    return ptr;
}

int cList::getCount(){
    return count;
}

cList::~cList(){
     cNode *ptr=top;
     while(ptr){
         ptr=ptr->next;
         delete top;
         top=ptr;
     }
     count=0;
}