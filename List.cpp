#include "List.h"

List::List()
{
    head = 0;
}

List::~List()
{
    Node *cursor = head;
    while (head)
    {
        cursor = cursor->getNxt();
        delete head;
        head = cursor;
    }
    head = 0; // Officially empty
}

void List::insertBeforeFirst(std::string soda, int price)
{
    head = new Node(soda, price, head);
}

void List::insertAfterLast(std::string soda, int price)
{
    Node *p = head;
    Node *q = head;

    if (head == 0)
        head = new Node(soda, price, head);
    else
    {
        while (q != 0)
        {
            p = q;
            q = p->getNxt();
        }
        p->setNext(new Node(soda, price, 0));
    }
    size++;
}

void List::listAll()
{
    Node *aux = head;
    time_t result = time(nullptr);
    while (aux != 0)
    {
        std::cout << "Refrigerante: " << aux->getSoda() << std::endl;
        std::cout << "Preco: " << aux->getPrice() << std::endl;
        result = aux->getTime();
        std::cout << "Data/Hora: " << ctime(&result) << std::endl;
        aux = aux->getNxt();
    }
}

int List::getSize()
{
    return size;
}