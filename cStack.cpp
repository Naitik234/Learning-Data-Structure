#include<iostream>
using namespace std;
#include"cNode.cpp"
class cStack{                  //class for stack which uses push and pop to add or remove data
	cNode* top;
	
	public:
		//default constructor
		cStack():pop(NULL){
		}
		//constructor that initializes member elements
		cStack& (cNode& *ptr):top(ptr){
			top->next=NULL;
			ptr=NULL;
			return *this;
		}
		//to check weather stack is empty or not
		bool isNotEmpty()const{
		if(top)
		return true;
		else
		return false;
		}
		//to check weather stack is empty or not
		bool isEmpty()const{
		if(top)
		return false;
		else
		return true;
		}
		//Used to add a new node in stack
		cStack& push(cNode& *ptr){
			ptr->next=top;
			top=ptr;
			ptr=NULL;                     //
			return *this;
		}
		//Used to remove a node from stack
		cNode* pop(){
			cNode *ptr=top;
			top=top->next;
			ptr->next=NULL;
			return ptr;
		}
		//print the data of all nodes 
		void print()const{
		if(!top)
		cout<<"\n Stack is Empty!";
		else{
			cNode *ptr=top;
			while(ptr)
			{
				ptr->print();
				ptr=ptr->next;
			}
		}
		}
		//copy constructor
		cStack(const cStack &src){
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
		//assignment operator overloading
		cStack& operator=(const cStack& obj){
			if(this==obj)
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
		//destructor
		~cStack(){
			cNode *ptr=top;
			while(ptr)
			{
				ptr=ptr->next;
				delete top;
				top=ptr;
			}
		}
		
};
