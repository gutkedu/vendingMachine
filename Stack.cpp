#include "Stack.h"

Stack::Stack()
{
    head = 0;
}

Stack::~Stack()
{
    while (head)
    {
        temp = head->getNxt();
        delete head;
        head = temp;
    }
    head = 0; // Officially empty
    temp=0;
}

void Stack::push(std::string soda, int price)
{
    temp = new Node(soda, price, head);
    head = temp;
}

void Stack::pop(std::string &s, int &p)
{
    temp = head;

    if (temp)
    {
        head = temp->getNxt();
        s = temp->getSoda();
        p = temp->getPrice();
        delete (temp);
    }
}

bool Stack::isEmpty()
{
    bool flag = false;
    if(head == 0)
    {
        flag = true;
    }
    return flag;
}
