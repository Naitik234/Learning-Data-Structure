# Priority cQue Class Reference

````c++
class cPriorityQue:public cQueue
````

Priority cQue class is a linear data structure derived from the `cQue` class where the nodes are stored in the deck according to descending order of their priority. New nodes are added at their respected priority and nodes with the highest priorities are popped first.

## Data Members

This class has no data members.

## Methods

This class has the following methods:

- Public:
  - `cPriorityQue()` : Default constructor, sends a call to the default constructor of the `cQue` class
  - `cPriorityQue(cNode* &ptr):cQue(ptr)` : Single parameterized constructor, sends a call to the single parameterized constructor of the `cQue` class
  - `cPriorityQue(const cQue &src)` : Copy Constructor, sends call to the copy constructor of the `cQue` class, deep copies the nodes of the `src` object into the calling object
  - `cPriorityQue& add(cNode* &ptr)` : Adds a new node to the deck of the calling object, finds the correct index according to the priority of the new node and inserts it into the deck
  - `~cPriorityQue()` : Destructor, sends a call to the destructor of the `cQue` object
  - `cNode* remove()` : Removes the first node in the deck which has the highest priority
  - `bool isEmpty() const` : Precondition, returns `true` if the deck of the calling object is empty, returns `false` otherwise
  - `void print()` : For debugging purposes, calls the `print` method on the `cQue` parent class
