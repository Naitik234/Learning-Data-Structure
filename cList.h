#include"cNode.h"

class cList{
   
   int count;
   cNode* head;
   public:
      cList();
      cList(cNode* &ptr);
      cList(const cList &src);
      cList& operator=(const cList src);
      cList& insert(cList* &ptr);
      cList& insertAt(int index,cNode* &ptr);
      cNode* remoe();
      cNode* removeAt(int index);
      bool isEmpty() const;
      bool isNotEmpty() const;
      cNode& operator[](int index);
      cList& swapNodesAt(int index1,int index2);
      int getCount();
      ~cList();

};