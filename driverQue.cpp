#include "cNode.cpp"
#include "cStack.cpp"
#include "cQue.cpp"
#include <iostream>
using namespace std;
int main()
{
    cout << "Test 1" << endl;
    cNode *ptr = new cNode;
    ptr->setData(3);
    cQue que1(ptr); //checking of constructor
    que1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 2" << endl;
    if (que1.isEmpty()) //checking of isEmpty function
        cout << "Que is Empty" << endl;
    else
        cout << "Que is not Empty" << endl;
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 3" << endl;
    cNode **ptrArray = new cNode *[4];
    for (int i = 0; i < 4; ++i)
        ptrArray[i] = new cNode;
    ptrArray[0]->setData(2);
    ptrArray[1]->setData(0);
    ptrArray[2]->setData(7);
    ptrArray[3]->setData(5);
    que1.add(ptrArray[0]).add(ptrArray[1]).add(ptrArray[2]).add(ptrArray[3]); //checking of add function
    que1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 4" << endl;
    que1.remove(); //checking of remove function
    que1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 5" << endl;
    cQue que2(que1); //checking of copy constructor
    cout << "que1 is ";
    que1.print();
    cout << endl;
    cout << "que2 is ";
    que2.print(); // //checking of print function
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 6" << endl;
    cQue que3;
    que3 = que1; //checking of assignment operator overloading
    cout << "que1 is ";
    que1.print();
    cout << endl;
    cout << "que3 is ";
    que3.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    return 0;
}