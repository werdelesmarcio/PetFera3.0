#pragma once

#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <iostream>
#include <map>
#include <string>

#include "pessoa.hpp"

using std::string;

enum Cargo
{
    recepcionista = 0,
    limpeza,
    motorista,
    veterinario
};

class Funcionario : public Pessoa
{
public:
    //----------------------------------------- Constructo
    Funcionario();

    Funcionario(string codigo,
                Cargo funcao,
                string nome,
                string cpf,
                string telefone,
                string email);

    Funcionario(const Funcionario &copia);

    //----------------------------------------- Destrutor
    ~Funcionario();

    //----------------------------------------- Getters
    string getCodigo() const;
    Cargo getFuncao() const;
    string getNome() const;
    string getCpf() const;
    string getTelefone() const;
    string getEmail() const;

    //----------------------------------------- Setters
    void setCodigo(string codigo_);
    void setFuncao(Cargo funcao_);
    void setNome(string nome_);
    void setCpf(string cpf_);
    void setTelefone(string telefone_);
    void setEmail(string email_);

    //----------------------------------------- Lista
    void listarFuncionario();
    Funcionario *addFuncionario(Funcionario *novo);
    Funcionario *remFuncionario(string codigo);

    static int getAtivo();

    friend std::ostream& operator<<(std::ostream &o, Funcionario const f);

    bool operator==(const Funcionario& outro) const;

private:
    string codigo;
    Cargo funcao;
    string nome;
    string cpf;
    string telefone;
    string email;

    static int ativo;
};

#endif
