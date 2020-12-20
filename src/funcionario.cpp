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
Funcionario::Funcionario(string codigo, Cargo funcao, string nome,
                         string cpf, string telefone, string email) : codigo(codigo), funcao(funcao), nome(nome),
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
Funcionario::setFuncao(Cargo funcao)
{
    this->funcao = funcao;
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
std::ostream &operator<<(std::ostream &impressao, Funcionario const &fun)
{
    return fun.print(impressao);
}

int 
Funcionario::getAtivos() const
{
    return this->ativos;
}

//--------------------------------------------- Conversor para Enums
/*std::ostream &operator<<(std::ostream &out, const Cargo value)
{
    static std::map<Cargo, string> nomeCargo;
    if (nomeCargo.size() == 0)
    {
#define INSERT(p) nomeCargo[p] = #p
        INSERT(tratador);
        INSERT(veterinario);
#undef INSERT
    }
    return out << nomeCargo[value];
}


std::ostream& operator<< (std::ostream &o, Funcionario const f){
    o << f.nome << " - " << std::fixed << std::setprecision(2) << f.cpf << " - " << f.funcao;
    return o;
}

bool
Funcionario::operator==(const Funcionario& outro) const{
    return this-> nome == outro.getNome();
}

Funcionario::Funcionario(const Funcionario &copia)
{
    this->codigo = copia.codigo;
    this->funcao = copia.funcao;
    this->nome = copia.nome;
    this->cpf = copia.cpf;
    this->telefone = copia.telefone;
    this->email = copia.email;
    ativos++;
}*/
