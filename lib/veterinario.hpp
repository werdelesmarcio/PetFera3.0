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

    ostream& print(ostream& o) const;

public:
//------------------------------------- Constructor
    Veterinario(string codigo, string nome, string cpf, 
                string telefone, string email, string docProfissional);

//------------------------------------- Destrutor
    ~Veterinario();

//------------------------------------- Getters
    string getdocProfissional() const;

//------------------------------------- Setters
    void setdocProfissional(string docProfissional_);
};

#endif
