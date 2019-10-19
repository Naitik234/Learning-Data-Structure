#include "cNode.h"
class cStack
{
protected:
	cNode* top;
public:
	cStack();
	cStack(cNode* &ptr);
	bool isNotEmpty()const;
	bool isEmpty()const;
	cStack& push(cNode* &ptr);
	cNode* pop();
	void print()const;
	cStack(const cStack &src);
	cStack& operator=(const cStack& obj);
	~cStack();
};

