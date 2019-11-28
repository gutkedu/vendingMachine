#include "FSM_2.h"

#define Computer

FSM_2::FSM_2(/* args */)
{

    state = 0;
    money = 0;
}

FSM_2::~FSM_2()
{
}

/*
state: 1 - 25 centavos
state: 2 - 50 centavos
state: 3 - 75 centavos
state: 4 - 100 centavos
state: 5 - 125 centavos
state: 6 - 150 centavos
state: 7 - 175 centavos
state: 8 - 200 centavos
*/

int FSM_2::getMoney()
{
    return money;
}

void FSM_2::addMoney(int money)
{
    this->money = this->money + money;
}

// Funcao para retornar dinheiro dependendo do estado atual da maquina.
void FSM_2::returnCoin(void)
{
    while (state != 0)
    {
        if (state == 1)
        {
            //Devolucao de 25 cents
            std::cout << "Devolucao 25 cents" << std::endl;
            state--;
            addMoney(-25);
        }
        else if (state >= 2 && state < 4)
        {
            //Devolucao 50 cents
            std::cout << "Devolucao 50 cents" << std::endl;
            state = state - 2;
            addMoney(-50);
        }
        else if (state >= 4)
        {
            //Devolucao 1 real
            std::cout << "Devolucao 1 real" << std::endl;
            state = state - 4;
            addMoney(-100);
        }
        else
        {
            std::cout << "Não há saldo para devolução" << std::endl;
        }
    }
}
/*
input(char) :   1 moeda 25
                2 moeda 50 
                3 moeda 100
                4 etirps
                5 meet
                6 devolucao
*/

void FSM_2::control(char input)
{

    switch (input)
    {
    case '1':    // Moeda 25 centavos
        state++; // avanca 1 estado
        addMoney(25);
        saldoAtual();
        break;

    case '2':              // Moeda 50 centavos
        state = state + 2; // avanca 2 estados
        addMoney(50);
        saldoAtual();
        break;

    case '3':              // Moeda 100 centavos
        state = state + 4; // avanca 4 estados
        addMoney(100);
        saldoAtual();
        break;

    case '4': // seleciona etirps
        if (state >= 6)
        {
            std::cout << "Selecionou Etirps" << std::endl;
            state = state - 6;
            addMoney(-150);
            log.pilha.push("Etirps", 150);
            saldoAtual();
        }
        else
        {
            std::cout << "Dinheiro Insuficiente" << std::endl;
            saldoAtual();
        }
        break;

    case '5': // seleciona meet
        if (state >= 6)
        {
            std::cout << "Selecionou Meet" << std::endl;
            state = state - 6;
            addMoney(-150);
            log.pilha.push("Meet", 150);
            saldoAtual();
        }
        else
        {
            std::cout << "Saldo insuficiente." << std::endl;
            saldoAtual();
        }
        break;

    case '6': // devolucao
        returnCoin();
        break;

    default:
        saldoAtual();
        break;
    }
}

void FSM_2::report(char input)
{
    log.Transfere();
    switch (input)
    {
    case '1':
        int cents, reais;
        total_price = log.get_valor_total();
        reais = total_price / 100;
        cents = total_price % 100;
        std::cout << "\nPreco total em reais: " << reais << "," << cents << std::endl;
        break;
    case '2':
        netirps = log.get_n_etirps();
        nmeet = log.get_n_meet();
        std::cout << "\nNumero de etirps vendidos: " << netirps << std::endl;
        std::cout << "\nNumero de meet vendidos: " << nmeet << std::endl;
        break;
    case '3':
        log.get_lista_refri();
        break;
    default:
        break;
    }
}

//funcao para verificar saldo atual e devolver moedas caso ultrapasse 2 reais.
void FSM_2::saldoAtual(void)
{
    int troco;
    //checando estado 6 (1.50 reais) para devolver moedas.
    if (state > 6)
    {
        troco = (state - 6) * 25; // troco em centavos
        while (troco != 0)
        {
            if (troco == 50) // 50 centavos a mais
            {
                std::cout << "Devolucao 50 cents" << std::endl;
                state = state - 2;
                addMoney(-50);
                troco = troco - 50;
            }
            else if (troco == 25) // 25 centavos a mais
            {
                std::cout << "Devolucao 25 cents" << std::endl;
                state--;
                addMoney(-25);
                troco = troco - 25;
            }
            else if (troco == 100)
            {
                std::cout << "Devolucao 1 real" << std::endl;
                state = state - 4;
                addMoney(-100);
                troco = troco - 100;
            }
        }
    }
    if (state < 6)
    {
        std::cout << "Saldo atual: " << this->money << " centavos, insira 1,50... " << std::endl;
    }
    else
    {
        std::cout << "Escolha a bebida" << std::endl;
    }
}
