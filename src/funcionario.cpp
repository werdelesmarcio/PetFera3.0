/*#include <iostream>
#include <string>
#include <iomanip>
#include <cassert>
#include <map>
#include <cstring>*/

#include <iostream>

// Includes do projeto
#include "funcionario.hpp"

//---------------------------------------------- Constructor
Funcionario::Funcionario(){};

//--------------------------------------------- Lista de parametros
Funcionario::Funcionario(string codigo, string nome,
                         string cpf, string telefone, string email) : 
                         codigo(codigo), nome(nome),
                         cpf(cpf), telefone(telefone), email(email) {}

//--------------------------------------------- Chamada do Destrutor
Funcionario::~Funcionario() {}

//--------------------------------------------- Chamada dos Getters
string
Funcionario::getCodigo() const
{
    return this->codigo;
}

Cargo Funcionario::getFuncao() const
{
    return this->funcao;
}

string
Funcionario::getNome() const
{
    return this->nome;
}

string
Funcionario::getCpf() const
{
    return this->cpf;
}

string
Funcionario::getTelefone() const
{
    return this->telefone;
}

string
Funcionario::getEmail() const
{
    return this->email;
}

//--------------------------------------------- Chamada dos Setters
void 
Funcionario::setCodigo(string codigo)
{
    this->codigo = codigo;
}

void 
Funcionario::setNome(string nome)
{
    this->nome = nome;
}

void 
Funcionario::setCpf(string cpf)
{
    this->cpf = cpf;
}

void 
Funcionario::setTelefone(string telefone)
{
    this->telefone = telefone;
}

void 
Funcionario::setEmail(string email)
{
    this->email = email;
}

//--------------------------------------------- Módulo das Interfaces
ostream &operator<<(ostream &impressao, Funcionario const &fun)
{
    return fun.print(impressao);
}

int 
Funcionario::getAtivos() const
{
    return this->ativos;
}
