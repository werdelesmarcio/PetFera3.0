#pragma once;

#ifndef _PETSHOP_H_
#define _PETSHOP_H_

#include <iostream>
#include <vector>

#include "empregado.hpp"

class Petshop{
public:
    Empregado empregado;
    
    void menu();
    void pausar();
    void limparTela();

};




#endif