#include "petshop.hpp"

#include <iostream>

void Petshop::menu()
{
    int opcao = 0;
    int opcaoFuncionario = 0;
    string numero;
    string nome;
    string nomeFunc;

    this->empregados.carregarFuncionarios();

    cout << " ██████╗░███████╗████████╗░░░░░░███████╗███████╗██████╗░░█████╗░\n"
         << " ██╔══██╗██╔════╝╚══██╔══╝░░░░░░██╔════╝██╔════╝██╔══██╗██╔══██╗\n"
         << " ██████╔╝█████╗░░░░░██║░░░█████╗█████╗░░█████╗░░██████╔╝███████║\n"
         << " ██╔═══╝░██╔══╝░░░░░██║░░░╚════╝██╔══╝░░██╔══╝░░██╔══██╗██╔══██║\n"
         << " ██║░░░░░███████╗░░░██║░░░░░░░░░██║░░░░░███████╗██║░░██║██║░░██║\n"
         << " ╚═╝░░░░░╚══════╝░░░╚═╝░░░░░░░░░╚═╝░░░░░╚══════╝╚═╝░░╚═╝╚═╝░░╚═╝\n"
         << endl
         << " PET-FERA - VERSÃO: 3.1 (BETA)              \n"
         << " Software de gestao de Petshop."
         << "-----------------------------------------------------\n"
         << "Opcoes de insercao de dados                          \n"
         << "   [1] - Cadastrar Animais. (NAO IMPLEMENTADO)       \n"
         << "   [2] - Cadastrar Funcionario.                      \n"
         << "   [3] - Alterar Cadastro de Funcionario.            \n"
         << "   [4] - Excluir Cadastro de Funcionario.            \n"
         << "   [5] - Listar Funcionarios.                        \n"
         << "-----------------------------------------------------\n"
         << "   [0] - Cancelar o Cadastro.\n"
         << "Selecione a opcao: ";
    cin >> opcao;

    while (opcao != 0)
    {
        switch (opcao)
        {
        case 1:
            cout << "Cadastrar Animal (NAO IMPLEMENTADO)" << endl;
            break;
        case 2:
            cout << "Cadastrar Funcionario: " << endl;
            this->empregados.criarFuncionario();
            break;
        case 3:
            cout << "Alterar Funcionario: " << endl;
            cin >> nomeFunc;
            this->empregados.alterarFuncionario(this->empregados.pesquisarFuncionario(nomeFunc));
            break;
        case 4:
            cout << "Excluir Funcionario: " << endl;
            cout << "Digite o nome do funcionario a ser excluido: ";
            cin >> nome;
            this->empregados.excluirFuncionario(nome);
            break;
        default : 
            break;
        }
    }
}