#include <iostream>
#include "cStack.h"

using namespace std;

cStack::cStack():top(NULL){
		}
		
cStack::cStack (cNode* &ptr):top(ptr){
			top->next=NULL;
			ptr=NULL;
		}

bool cStack::isNotEmpty()const{
		if(top)
		return true;
		else
		return false;
		}
		
bool cStack::isEmpty()const{
		if(top)
		return false;
		else
		return true;
		}
		
cStack& cStack::push(cNode* &ptr){
			ptr->next=top;
			top=ptr;
			ptr=NULL;                     //
			return *this;
		}

cNode* cStack::pop(){
			cNode *ptr=top;
			top=top->next;
			ptr->next=NULL;
			return ptr;
		}
		
void cStack::print()const{
		if(!top)
		cout<<"\n Data Structure is Empty!";
		else{
			cNode *ptr=top;
			while(ptr)
			{
				ptr->print();
				ptr=ptr->next;
			}
		}
		}
		
cStack::cStack(const cStack &src){
			this->top=src.top;
			if(src.top){
				cNode *sptr,*dptr;
				dptr=top=new cNode(*src.top);
				sptr=src.top->next;
				while(sptr){
					dptr->next=new cNode(*sptr);
					sptr=sptr->next;
					dptr=dptr->next;
				}
				
			}
		}
		
cStack& cStack::operator=(const cStack& obj){
			if(this== &obj)
			return *this;
			if(true){
				cStack temp;
				temp.top=top;
			}
			if(true){
				cStack temp=obj;         //
				top=temp.top;
				temp.top=NULL;
			}
			return *this;
		}

cStack::cStack(ifstream &inFile) : top(NULL), count(0)
{
  inFile.read((char *)&this->count, sizeof(count));

  if (count > 0)
  {
    cNode *ptr;
    ptr = top = new cNode(inFile);

    for (int i = 1; i < count; ++i)
    {
      ptr->next = new cNode(inFile);
      ptr = ptr->next;
    }

    ptr->next = NULL;
  }
}

void cStack::writeToFile(ofstream &oFile)
{
  if (!oFile.is_open())
  {
    cerr << "\n cStack::writeToFile:File is not open!";
    exit(1);
  }

  oFile.write((char *)&count, sizeof(count));

  if (count > 0)
  {
    cNode *ptr = top;

    for (int i = 0; i < count; ++i)
    {
      ptr->writeNodeToFile(oFile);
      ptr = ptr->next;
    }
  }
}

cStack &cStack::readFromFile(ifstream &iFile)
{
  if (!iFile.is_open())
  {
    cerr << "\n cStack::readFromFile():File is not open!";
    exit(1);
  }

  if (true)
  {
    cStack temp;
    temp.top = this->top;
  }

  iFile.read((char *)&count, sizeof(count));

  top = NULL;

  if (count > 0)
  {
    cNode *ptr;
    ptr = top = new cNode(iFile);

    for (int i = 1; i < count; ++i)
    {
      ptr->next = new cNode(iFile);
      ptr = ptr->next;
    }

    ptr->next = NULL;
  }
  return *this;
}

cStack::~cStack()
{
	cNode *ptr=top;
			while(ptr)
			{
				ptr=ptr->next;
				delete top;
				top=ptr;
			}
}
