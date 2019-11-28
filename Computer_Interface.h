#ifndef COMPUTER_INTERFACE
#define COMPUTER_INTERFACE
#include "Interface.h"

class Computer_Interface : public Interface
{
private:
    char input_pc;
    char choice;

public:
    Computer_Interface();
    ~Computer_Interface();
    char get_input();
    char get_input_menu();
    void print_output(std::string);
    char get_input_relatorio();
    void report();
    void show_datetime(void);
};

#endif
