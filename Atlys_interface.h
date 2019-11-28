#ifndef ATYLS_H
#define ATYLS
#include "Interface.h"

class Atlys_interface : public Interface
{
private:
    volatile unsigned int *data;
    volatile unsigned int *output;
    volatile unsigned int *direction;
    char input_atlys;
    char choice_menu;

public:
    Atlys_interface();
    ~Atlys_interface();
    char get_input();
    void print_output(std::string);
    char get_input_menu();
    void report();
    void show_datetime();
    char get_input_relatorio();
};
#endif
