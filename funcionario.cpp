#include <iostream>
#include <string>
#include <iomanip>
#include <cassert>
#include <map>

// Includes do projeto
#include "funcionario.hpp"

using std::cout;
using std::endl;

#ifndef DEBUG
#define Debug(x) std::cout << x
#else
#define Debug(x)
#endif

//--------------------------------------------- Chamada das Variáveis
Funcionario::Funcionario(string codigo,
                         Cargo funcao,
                         string nome,
                         string cpf,
                         string telefone,
                         string email) : codigo(codigo),
                                         funcao(funcao),
                                         nome(nome),
                                         cpf(cpf),
                                         telefone(telefone),
                                         email(email)
{
    ativo++;

    cout << "\n------------------Funcionario Inserido------------------" << endl;
    cout << "Codigo: " << getCodigo() << " - "
         << "Cargo: " << getFuncao() << endl;
    cout << "Nome: " << getNome() << " - "
         << "CPF: " << getCpf() << endl;
    cout << "Telefone: " << getTelefone() << " - "
         << "E-Mail: " << getEmail() << endl;

    Debug(this->codigo << " foi criado.[" << this << "]" << endl);
}

Funcionario::Funcionario(const Funcionario &copia)
{
    this->codigo = copia.codigo;
    this->funcao = copia.funcao;
    this->nome = copia.nome;
    this->cpf = copia.cpf;
    this->telefone = copia.telefone;
    this->email = copia.email;
    ativo++;

    Debug(this->codigo << "Foi criado uma copia.[" << this << "]" << endl);
}

//--------------------------------------------- Chamada do Destrutor
Funcionario::~Funcionario()
{
    ativo--;
    cout << "Funcionario " << this->codigo << " excluido." << endl;

    Debug(this->codigo << "Foi removido da memória.[" << this << "]" << endl);
}

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
void Funcionario::setCodigo(string codigo)
{
    this->codigo = codigo;
}

void Funcionario::setFuncao(Cargo funcao)
{
    this->funcao = funcao;
}

void Funcionario::setNome(string nome)
{
    this->nome = nome;
}

void Funcionario::setCpf(string cpf)
{
    this->cpf = cpf;
}

void Funcionario::setTelefone(string telefone)
{
    this->telefone = telefone;
}

void Funcionario::setEmail(string email)
{
    this->email = email;
}
/*
std::ostream& operator<< (std::ostream &o, Funcionario const f){
    o << f.nome << " - " << std::fixed << std::setprecision(2) << f.cpf << " - " << f.funcao;
    return o;
}

int
Funcionario::getAtivo(){
    return ativo;
}

bool
Funcionario::operator==(const Funcionario& outro) const{
    return this-> nome == outro.getNome();
}*/

//--------------------------------------------- Conversor para Enums
std::ostream &operator<<(std::ostream &out, const Cargo value)
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
