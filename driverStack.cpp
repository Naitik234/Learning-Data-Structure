#include "cNode.cpp"
#include "cStack.cpp"
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    cout << "Test 1" << endl;
    cNode *ptr = new cNode;
    ptr->setData(3);
    cStack stack1(ptr); //checking of constructor
    stack1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 2" << endl;
    if (stack1.isEmpty()) //checking of isEmpty function
        cout << "Stack is Empty" << endl;
    else
        cout << "Stack is not Empty" << endl;
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
    stack1.push(ptrArray[0]).push(ptrArray[1]).push(ptrArray[2]).push(ptrArray[3]); //checking of push function
    stack1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 4" << endl;
    stack1.pop(); //checking of pop function
    stack1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 5" << endl;
    cStack stack2(stack1); //checking of copy constructor
    cout << "stack1 is ";
    stack1.print();
    cout << endl;
    cout << "stack2 is ";
    stack2.print(); //checking of print function
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 6" << endl;
    cStack stack3;
    stack3 = stack1; //checking of assignment operator overloading
    cout << "stack1 is ";
    stack1.print();
    cout << endl;
    cout << "stack3 is ";
    stack3.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    ifstream inFile;
    ofstream oFile;

    cStack s1;
    cStack s2;

    cNode *n1 = new cNode(1);
    cNode *n2 = new cNode(2);
    cNode *n3 = new cNode(3);

    s1.push(n1).push(n2).push(n3);

    oFile.open("data.txt");
    s1.writeToFile(oFile);
    oFile.close();

    inFile.open("data.txt");
    s2.readFromFile(inFile);
    inFile.close();
    cout << "Test 7" << endl;
    s2.print();

    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    return 0;
}