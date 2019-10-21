#include "cNode.cpp"
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    cout << "Test 1" << endl;
    cNode *ptr = new cNode(3, 2); //checking of constructor
    ptr->print();                 //checking print function
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    ofstream oFile;
    ifstream inFile;

    cNode *n1 = new cNode(1, 2);
    cNode *n2 = new cNode(2, 3);
    cNode *n3 = new cNode(3, 4);
    cNode *n4 = new cNode();
    cNode *n5 = new cNode();
    cNode *n6 = new cNode();

    oFile.open("data.txt");     //checking file handling functions
    n1->writeNodeToFile(oFile); //
    n2->writeNodeToFile(oFile); //
    n3->writeNodeToFile(oFile); //
    oFile.close();              //

    inFile.open("data.txt");      //
    n4->readNodeFromFile(inFile); //
    n5->readNodeFromFile(inFile); //
    n6->readNodeFromFile(inFile); //

    cout << "Test 2" << endl;
    n4->print();
    n5->print();
    n6->print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 3" << endl;
    ptr->setData(65);
    ptr->setPriority(2);
    cout << "Data is " << ptr->getData() << " Priority is " << ptr->getPriority();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 4" << endl;
    cNode *ptr1, *ptr2;
    ptr1 = new cNode;
    ptr2 = new cNode;
    ptr1->setData(2);
    ptr2->setData(2);
    ptr1->setPriority(3);
    ptr2->setPriority(3);
    if (ptr1->isSimilar(ptr2)) //checking isSimilar function
        cout << "Nodes are Equal";
    else
        cout << "Nodes are not Equal";
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    return 0;
}