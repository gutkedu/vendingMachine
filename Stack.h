#ifndef STACK_H
#define STACK_H

#include "Node.h"

class Stack
{
private:
    Node *head, *temp;

public:
    Stack();
    ~Stack();
    void push(std::string soda, int price);
    void pop(std::string &ref, int &prec);
    bool isEmpty();
};

#endif