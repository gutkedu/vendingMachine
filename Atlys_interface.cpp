#include "Atlys_interface.h"
#include <iostream>
#include <string>
#include <stdlib.h>

Atlys_interface::Atlys_interface()
{
    data = (volatile unsigned int *)0x80000a00;
    output = (volatile unsigned int *)0x80000a04;
    direction = (volatile unsigned int *)0x80000a08;
    *direction = 0xffffffff;
    *output = 0x00000000;
}

Atlys_interface::~Atlys_interface()
{
}

//Outra maneira para o if:
//if (*data & 0xXXXXXXXX)

char Atlys_interface::get_input()
{
    while (*data == 0)
        ;

    //if (*data == numero em binario correspondente a GPIO)
    //Inputs: moeda25, moeda50, moeda100, dev, meet, etirps...

    //verificar os enderecos de memoria para os inputs da atlys.

    if (*data = 256) // SW1 - 25 cents
        input_atlys = '1';
    if (*data == 512) // SW2 - '2'
        input_atlys = '2';
    if (*data == 1024) // SW3 - '3'
        input_atlys = '3';
    if (*data == 2048) //SW4 - '4'
        input_atlys = '4';
    if (*data == 4096) // SW - '5'
        input_atlys = '5';

    return input_atlys;
}

void Atlys_interface::print_output(std::string output)
{
    //usar o display para output
}

char Atlys_interface::get_input_menu()
{

    while (*data == 0)
        ;

    if (*data = 256) // SW1 - 25 cents
        choice_menu = '1';
    if (*data == 512) // SW2 - '2'
        choice_menu = '2';
    if (*data == 1024) // SW3 - '3'
        choice_menu = '3';
    if (*data == 2048) //SW4 - '4'
        choice_menu = '4';
    if (*data == 4096) // SW - '5'
        choice_menu = '5';

    return choice_menu;
}

void Atlys_interface::show_datetime()
{
}

char Atlys_interface::get_input_relatorio()
{
}
