class cNode
{
	int data;
public:
	cNode *next;
	cNode();
	cNode(int d);
	int getData();
	cNode* setData(int data);
	void print()const;
	~cNode();
};

