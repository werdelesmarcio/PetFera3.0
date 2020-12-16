#pragma once

#ifndef _PESSOA_H_
#define _PESSOA_H_

#include <iostream>
#include <map>
#include <string>

using std::string;

class Pessoa
{
public:
    //----------------------------------------- Constructo
    Pessoa();

    Pessoa(string nome, 
           string cpf, 
           string telefone, 
           string email);

    Pessoa(const Pessoa &copia);

    //----------------------------------------- Destrutor
    ~Pessoa();

    //----------------------------------------- Getters
    string getNome();
    string getCpf();
    string getTelefone();
    string getEmail();    

    //----------------------------------------- Setters
    void setNome(string nome_);
    void setCpf(string cpf_);
    void setTelefone(string telefone_);
    void setEmail(string email_);

private:
    string nome; 
    string cpf; 
    string telefone; 
    string email;
};

#endif
