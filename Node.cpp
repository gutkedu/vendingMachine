#include "Node.h"

Node::Node(std::string soda, int price, Node *proximo)
{
    this->soda = soda;
    this->price = price;
    nxt = proximo;
    system_clock::time_point today = system_clock::now(); // pega tempo agora
    time_data = system_clock::to_time_t(today);
}

Node::Node()
{
    soda = "";
    price = 0;
    nxt = NULL;
}

Node::~Node()
{
}

std::string Node::getSoda()
{
    return soda;
}

int Node::getPrice()
{
    return price;
}

Node *Node::getNxt()
{
    return nxt;
}

void Node::setSoda(std::string soda)
{
    soda = soda;
}

void Node::setPrice(int price)
{
    this->price = price;
}

void Node::setNext(Node *proximo)
{
    nxt = proximo;
}

time_t Node::getTime()
{
    return time_data;
}
