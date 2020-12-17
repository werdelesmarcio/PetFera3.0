#pragma once

#ifndef _TRATADOR_H_
#define _TRATADOR_H_

#include <iostream>

//------------------------------------Includes do projeto
#include "funcionario.hpp"

using namespace std;

class Tratador : public Funcionario
{
private:
    string docProfissional;

public:
    Tratador(string codigo, Cargo funcao, string nome,
                string cpf, string telefone, string email, string docProfissional);

    string getdocProfissional();

    void setdocProfissional(string docProfissional_);
};

#endif
