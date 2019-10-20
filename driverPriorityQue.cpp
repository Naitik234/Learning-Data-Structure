#include"cNode.cpp"
#include"cQue.cpp"
#include"cStack.cpp"
#include"cPriorityQue.cpp"
#include<iostream>
using namespace std;
int main(){
    cNode *ptr=new cNode;
    ptr->setData(3);
    ptr->setPriority(1);
    cPriorityQue pQue1(ptr);                //checking of constructor
    pQue1.print();
    cout<<endl<<endl<<endl;
    for(int i=0;i<10;i++)
    cout<<"-";


    cout<<endl;
    if(pQue1.isEmpty())               //checking of isEmpty function
    cout<<"Que is Empty"<<endl;
    else
    cout<<"Que is not Empty"<<endl;
    cout<<endl<<endl<<endl;
    for(int i=0;i<10;i++)
    cout<<"-";


    cout<<endl;
    cNode **ptrArray=new cNode *[4];
    for(int i=0;i<4;++i)
    ptrArray[i]=new cNode;
    ptrArray[0]->setData(2);
    ptrArray[1]->setData(0);
    ptrArray[2]->setData(7);
    ptrArray[3]->setData(5);
    pQue1.add(ptrArray[0]).add(ptrArray[1]).add(ptrArray[2]).add(ptrArray[3]);          //checking of add function
    pQue1.print();
    cout<<endl<<endl<<endl;
    for(int i=0;i<10;i++)
    cout<<"-";


    cout<<endl;
    pQue1.remove();                         //checking of remove function
    pQue1.print();
    cout<<endl<<endl<<endl;
    for(int i=0;i<10;i++)
    cout<<"-";


    cout<<endl;
    cPriorityQue pQue2(pQue1);           //checking of copy constructor
    cout<<"pQue1 is ";
    pQue1.print();
    cout<<endl;
    cout<<"pQue2 is ";          
    pQue2.print();                    //checking of print function
    cout<<endl<<endl<<endl;    
    for(int i=0;i<10;i++)
    cout<<"-";


    cout<<endl;
    cPriorityQue pQue3;
    pQue3=pQue1;             //checking of assignment operator overloading
    cout<<"pQue1 is ";
    pQue1.print();
    cout<<endl;
    cout<<"pQue3 is ";
    pQue3.print();
    cout<<endl<<endl<<endl;    
    for(int i=0;i<10;i++)
    cout<<"-";

    return 0;
}