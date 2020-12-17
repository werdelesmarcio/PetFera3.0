#pragma once

#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <iostream>
#include <map>
#include <string>

using std::string;

enum Cargo
{
    tratador = 0,
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

    //----------------------------------------- Cópia
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

    //----------------------------------------- Interfaces
    void listarFuncionario();
    void cadastrarFuncionario();
    void removerFuncionario();

    //----------------------------------------- Métodos internos
    Funcionario *addFuncionario(Funcionario *novo);
    Funcionario *remFuncionario(string codigo);

    int getAtivos();

    //friend std::ostream& operator<<(std::ostream &o, Funcionario const f);
    //bool operator==(const Funcionario& outro) const;

protected:
    string codigo;
    Cargo funcao;
    string nome;
    string cpf;
    string telefone;
    string email;
};

#endif
