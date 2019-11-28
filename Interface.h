#ifndef INTERFACE_H
#define INTERFACE_H
#include <iostream>
#include <string>

class Interface
{
public:
    virtual void print_output(std::string) = 0;
    virtual char get_input() = 0;
    virtual char get_input_menu() = 0;
    virtual char get_input_relatorio() = 0;
    virtual void show_datetime() = 0;
};

#endif
