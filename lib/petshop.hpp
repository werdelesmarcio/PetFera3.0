#pragma once

#ifndef _PETSHOP_H_
#define _PETSHOP_H_

#include <iostream>
#include <vector>

#include "empregado.hpp"

using std::vector;

class Petshop{
public:
    Empregado empregados;
    
    void menu();
    void pausar();
    void limparTela();

};

#endif