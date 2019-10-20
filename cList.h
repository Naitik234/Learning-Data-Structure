#pragma once
#include"cNode.h"

class cList{
   
   int count;
   cNode* head;
   public:
      cList();
      cList(cNode* &ptr);
      cList(const cList &src);
      cList& operator=(const cList &src);
      cList& insert(cNode* &ptr);
      cList& insertAt(int index,cNode* &ptr);
      cNode* remove();
      cNode* removeAt(int index);
      bool isEmpty() const;
      bool isNotEmpty() const;
      cNode& operator[](int index);
      cList& swapNodesAt(int index1,int index2);
      cList& operator+(const cList &src);
      cList& reverse();
      void print()const;
      int getCount();
      ~cList();

};