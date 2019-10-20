#include<iostream>
#include"cList.h"

using namespace std;

cList::cList():head(NULL),count(0){
}

cList::cList(cNode* &ptr):head(ptr),count(1){
}

bool cList::isEmpty()const{
    if(head)
        return false;
    else
        return true;
    
}
bool cList::isNotEmpty()const{
    if(head)
    return true;
    else
    return false;
}

cList::cList(const cList &src){
    this->head=src.head;
    this->count=src.count;
    if(src.head){
        cNode *sptr,*dptr;
        dptr=head=new cNode(*src.head);
        sptr=src.head->next;
        while(sptr){
            sptr->next=new cNode(*sptr);
            sptr=sptr->next;
            dptr=dptr->next;
        }
    }

}

cList& cList::operator=(const cList &robj){
    if(this==&robj)
    return*this;
    if(true)
    {
        cList temp;
        temp.head=head;
    }
    if(true)
    {
        cList temp=robj;
        head=temp.head;
        temp.head=NULL;
    }
    return *this;
}

cList& cList::insert(cNode* &ptr){
    if(head)
    {
        ptr->next=head;
        head=ptr;
    }
    else
    {
        head=ptr;
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

    cNode *rptr=head;
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
    if(head){
        cNode *ptr=head;
        head=head->next;
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
    cNode *rptr=head;
    for(int i=1;i<index;++i)
    rptr=rptr->next;
    cNode *ptr=rptr->next;
    rptr->next=ptr->next;
    ptr->next=NULL;
    --count;
    return ptr;
}

cNode& cList::operator[](int index){
  if(index<=0) 
  return *head;
  if(index>=count)
      index=count-1;
      
      cNode *rptr=head;
      for(int i=1;i<index;++i)
      return *rptr;
}

cList& cList::swapNodesAt(int index1,int index2){
    if(index1<0)
    index1=0;
    if(index2<0)
    index2=0;
    if(index1>count)
    index1=count-1;
    if(index2>count)
    index2=count-1;
    if(index1==index2)
    return *this;
    if(index1<index2)
    {
        cNode *ptr = removeAt(index1);
        insertAt(index2-1, ptr);
        ptr=removeAt(index2);
        insertAt(index1,ptr);
    }
    else
    {
        cNode* ptr=removeAt(index2);
        insertAt(index1-1,ptr);
        ptr=removeAt(index1);
        insertAt(index2,ptr);
    }
    return *this;
    
}

cList& cList::operator+(const cList &src){
    if(src.count==0)
    return *this;
    cList temp =src;
    if(!head){
        head=temp.head;
        count=temp.count;
    }
    else{
        cNode *ptr=head;
        for(int i=0;i<count;++i)
        ptr=ptr->next;
        
        ptr->next=temp.head;
        count += temp.count;
    }
    temp.head=NULL;
    return*this;
}

void cList::print()const{
     if(!head)
		cout<<"\n Stack is Empty!";
		else{
			cNode *ptr=head;
			while(ptr)
			{
				ptr->print();
				ptr=ptr->next;
			}
		}
}

int cList::getCount(){
    return count;
}

cList::~cList(){
     cNode *ptr=head;
     while(ptr){
         ptr=ptr->next;
         delete head;
         head=ptr;
     }
     count=0;
}