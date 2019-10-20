#include "cNode.cpp"
#include "cList.cpp"
#include <iostream>
using namespace std;
int main()
{

    cNode *ptr = new cNode;
    ptr->setData(3);
    cList list1(ptr); //checking of constructor
    list1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    if (list1.isEmpty()) //checking of isEmpty function
        cout << "list is Empty" << endl;
    else
        cout << "list is not Empty" << endl;
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    ptr = new cNode;
    ptr->setData(2);
    cNode *ptr1 = new cNode;
    ptr1->setData(9);
    list1.insert(ptr).insert(ptr1); //checking insert function
    list1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    ptr = new cNode;
    ptr->setData(7);
    list1.insertAt(1, ptr); //checking insertAt function
    list1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    list1.swapNodesAt(0, 2); //checking swapNodesAt function
    list1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    list1[2].print(); //checking index operator overloading function
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    list1.reverse(); //checking reverse function
    list1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    list1.remove(); //checking remove function
    list1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    list1.removeAt(0); //checking removeAt function
    list1.print();     //checking print function
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    /* cout<<endl;
    cNode **ptrArray=new cNode *[4];
    for(int i=0;i<4;++i)
    ptrArray[i]=new cNode;
    ptrArray[0]->setData(2);
    ptrArray[1]->setData(0);
    ptrArray[2]->setData(7);
    ptrArray[3]->setData(5);
    cList list2;
    list2.insert(ptrArray[0]).insert(ptrArray[1]).insert(ptrArray[2]).insert(ptrArray[3]);
    list1+list2;                      //checking addition overloading sunction
    list1.print();
    cout<<endl<<endl<<endl;
    for(int i=0;i<10;i++)
    cout<<"-";  */

    /*cout<<endl;
    cList list3(list1);       //checking copy constructor function
    list3.print();
    cout<<endl<<endl<<endl;
    for(int i=0;i<10;i++)
    cout<<"-"; */

    cout << endl;
    cList list4;
    list4 = list1; //checking = operator overloading function
    list4.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << list1.getCount(); //checking getcount function
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    /* cout<<endl;
    ptr=&list1[0];
    list1.deleteNodes(ptr);      //checking deleteNodes function
    list1.print();
    cout<<endl<<endl<<endl;
    for(int i=0;i<10;i++)
    cout<<"-"; */

    return 0;
}
