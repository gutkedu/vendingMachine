#include <iostream>
using namespace std;
#include "Interface.h"
#include "Computer_Interface.h"
#include "Atlys_interface.h"
#include "FSM_2.h"


int main()
{
    char input, choice;
    Interface *intf;
    FSM_2 machine;

#ifndef WIN32
    intf = new Computer_Interface;
#else
    intf = new Atlys_interface;
#endif

    while (choice != '8')
    {
        choice = intf->get_input_menu();
        switch (choice)
        {
        case '1':
            input = '1';
            machine.control(input);
            break;
        case '2':
            input = '2';
            machine.control(input);
            break;
        case '3':
            input = '3';
            machine.control(input);
            break;
        case '4':
            input = '4';
            machine.control(input);
            break;
        case '5':
            input = '5';
            machine.control(input);
            break;
        case '6':
            input = '6';
            machine.control(input);
            break;
        case '7':
            input = intf->get_input_relatorio();
            machine.report(input);
            break;
        default:
            std::cout << "Escolha invalida. \n"
                      << "Escolha denovo...\n";
            break;
        }
    }
}
