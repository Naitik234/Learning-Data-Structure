#include"cNode.h"

class cList{
   
   int count;
   cNode* top;
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
      int getCount();
      ~cList();

};