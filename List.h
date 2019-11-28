#ifndef list_h
#define list_h

#include "Node.h"

class List
{
private:
  Node *head;
  int size;

public:
  List();
  ~List();
  void insertBeforeFirst(std::string soda, int price);
  void insertAfterLast(std::string soda, int price);
  int readFirst();
  int removeFirst();
  int removeNode(std::string soda, int price);
  void listAll();
  int getSize();
};

#endif
