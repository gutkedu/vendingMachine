#ifndef LOG_H
#define LOG_H

#include "List.h"
#include "Stack.h"

class Log: public Stack, List
{
private:
    std::string soda;
    int total_price=0;
    int n_meet=0, n_etirps=0;
    Stack pilha;
    List relatorio;

public:
    friend class FSM_2;
    Log();
    ~Log();
    void Transfere(void);
    int get_valor_total(void);
    void get_lista_refri(void);
    int get_n_meet(void);
    int get_n_etirps(void);
};
#endif
