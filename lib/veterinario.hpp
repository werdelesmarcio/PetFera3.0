#pragma once

#ifndef _VETERINARIO_H_
#define _VETERINARIO_H_

#include <iostream>

//------------------------------------Includes do projeto
#include "funcionario.hpp"

using namespace std;

class Veterinario : public Funcionario
{
private:
    string docProfissional;

public:
    Veterinario(string codigo, Cargo funcao, string nome,
                string cpf, string telefone, string email, string docProfissional);

    string getdocProfissional();

    void setdocProfissional(string docProfissional_);
};

#endif
