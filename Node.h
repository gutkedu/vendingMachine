#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

class Node
{
private:
    Node *nxt;
    std::string soda;
    int price;
    time_t time_data;

public:
    Node(std::string soda, int price, Node *proximo);
    Node();
    ~Node();
    void setSoda(std::string soda);
    void setPrice(int price);
    void setNext(Node *proximo);
    time_t getTime();
    std::string getSoda();
    int getPrice();
    Node *getNxt();
};
#endif

