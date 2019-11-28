#include "Computer_Interface.h"
#include <chrono>
#include <iostream>
#include <string>

using namespace std;
using namespace std::chrono;

Computer_Interface::Computer_Interface()
{
}

Computer_Interface::~Computer_Interface()
{
}

char Computer_Interface::get_input_menu()
{
    std::cout << std::endl
              << "1 - 0,25. \n"
              << "2 - 0,50. \n"
              << "3 - 1,00. \n"
              << "4 - Etirps. \n"
              << "5 - Meet. \n"
              << "6 - Devolucao. \n"
              << "7 - Relatorio. \n"
              << "8 - Sair. \n";

    std::cin >> choice;
    return choice;
}

char Computer_Interface::get_input()
{
    std::cin >> input_pc;
    return input_pc;
}

void Computer_Interface::print_output(std::string output)
{
    std::cout << output << std::endl;
}

char Computer_Interface::get_input_relatorio()
{
    std::cout << std::endl
              << " 1 - Valor total de vendas\n"
              << " 2 - Numero de refrigerantes vendidos\n"
              << " 3 - Gerar relatorio. \n";
    std::cin >> choice;
    return choice;
}

void Computer_Interface::show_datetime()
{
    system_clock::time_point now = system_clock::now();
    time_t TimeNow = system_clock::to_time_t(now);
    cout << ctime(&TimeNow) << endl;
}
