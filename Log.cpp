#include "Log.h"

Log::Log(/* args */)
{
}

Log::~Log()
{
}

void Log::Transfere()
{
    std::string soda;
    int p;

    while (pilha.isEmpty() == false)
    {
        pilha.pop(soda, p);

        cout << "pop " << endl;

        total_price += p;

        if (soda == "Etirps")
        {
            n_etirps++;
        }
        else if (soda == "Meet")
        {
            n_meet++;
        }
        relatorio.insertAfterLast(soda, p);
    }
}

int Log::get_valor_total()
{
    return total_price;
}

void Log::get_lista_refri()
{
    relatorio.listAll();
}

int Log::get_n_etirps()
{
    return n_etirps;
}

int Log::get_n_meet()
{
    return n_meet;
}
