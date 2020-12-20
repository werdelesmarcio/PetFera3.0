#pragma once

#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <iostream>
#include <map>
#include <string>

using std::string;

enum Cargo
{
    tratador,
    veterinario
};

class Funcionario
{
public:
    int ativos;

//----------------------------------------- Constructo
    Funcionario();
    Funcionario(string codigo, Cargo funcao, string nome,
                string cpf, string telefone, string email);

//----------------------------------------- Destrutor
    virtual ~Funcionario();

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

//----------------------------------------- Métodos internos
    int getAtivos() const;

    friend std::ostream& operator<<(std::ostream &o, Funcionario const &f);

private:
    virtual ostream& print(ostream&) const = 0;

protected:
    string codigo;
    Cargo funcao;
    string nome;
    string cpf;
    string telefone;
    string email;
};

#endif
