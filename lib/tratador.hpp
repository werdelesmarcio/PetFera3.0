#pragma once

#ifndef _TRATADOR_H_
#define _TRATADOR_H_

#include <iostream>

//------------------------------------ Includes do projeto
#include "funcionario.hpp"

using namespace std;
using std::string;

//----------------------------------- Nível de exposição ao risco
enum Risco{
    verde, 
    amarelo, 
    vermelho
};

class Tratador : public Funcionario
{
private:
    Risco risco;

    ostream& print(ostream& o) const;

public:
//------------------------------------ Constructor
    Tratador(string codigo, string nome,
                string cpf, string telefone, string email, Risco risco);

//------------------------------------ Destrutor
    ~Tratador();

//------------------------------------ Getters
    Risco getRisco() const;
    
//------------------------------------ Setters
    void setRisco(Risco risco);
};

#endif