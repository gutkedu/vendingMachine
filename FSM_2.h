#ifndef FSM_H
#define FSM_H

#include "Log.h"


class FSM_2
{
private:
    /* data */
    int money, state;
    int total_price, netirps, nmeet;
    char input;
    Log log;

public:
    FSM_2();
    ~FSM_2();
    void addMoney(int money);
    int getMoney();
    void returnCoin(void);
    void saldoAtual(void);
    void control(char input);
    void report(char input);
};

#endif
