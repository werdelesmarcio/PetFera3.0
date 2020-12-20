#pragma once

#ifndef _EMPREGADOS_H_
#define _EMPREGADOS_H_

#include <vector>
#include <memory>
#include <iomanip>

//------------------------------------------- Includes do projeto
#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"

class Empregado{
private:
    vector<std::shared_ptr<Funcionario>> funcionarios; //--- Ponteiro para Funcionarios
    //void limparTelaFuncionarios();

public:
    bool criarFuncionario();
    void listarFuncionarios();
    void salvarFuncionarios();
    void carregarFuncionarios();
    bool encFuncionario(string nome);

    shared_ptr <Funcionario> pesquisarFuncionario(string nome);
    shared_ptr <Funcionario> excluirFuncionario(string nome);
    bool adicionarFuncionario(shared_ptr <Funcionario> addFuncionario);
    void alterarFuncionario(shared_ptr<Funcionario> alterFuncionario);
};

#endif