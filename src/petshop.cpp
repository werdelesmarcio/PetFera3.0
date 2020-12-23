#include "petshop.hpp"

#include <iostream>

#include "banner.cpp"
//#include "sistema.cpp"

void Petshop::menu()
{
    int opcao = 0;
    int opcaoFuncionario = 0;
    string numero;
    string nome;
    string nomeFunc;

    limparTela();

    this->empregados.carregarFuncionarios();
    do
    {
        Banner();

        cout << "Selecione a opcao: ";
        cin >> opcao;

        if (opcao == 1)
        {
            limparTela();
            Banner();
            cout << "Cadastrar Animal (NAO IMPLEMENTADO)" << endl;
            pausar();
        }
        else if (opcao == 2)
        {
            limparTela();
            Banner();
            cout << "Cadastrar Funcionario: " << endl;
            this->empregados.criarFuncionario();
            pausar();
        }
        else if (opcao == 3)
        {
            limparTela();
            Banner();
            cout << "Alterar Funcionario: " << endl;
            cin >> nomeFunc;
            this->empregados.alterarFuncionario(this->empregados.pesquisarFuncionario(nomeFunc));
            pausar();
        }
        else if (opcao == 4)
        {
            limparTela();
            Banner();
            cout << "Excluir Funcionario: " << endl;
            cout << "Digite o nome do funcionario a ser excluido: ";
            cin >> nome;
            this->empregados.excluirFuncionario(nome);
            pausar();
        }
        else if (opcao == 5)
        {
            limparTela();
            Banner();
            cout << "Salvando Arquivo" << std::endl;
            this->empregados.salvarFuncionarios();
            pausar();
        }
        else if (opcao == 6)
        {
            limparTela();
            Banner();
            cout << "Listar Funcionarios:" << endl;
            this->empregados.listarFuncionarios();
            pausar();
        }  

        limparTela();      

    } while (opcao != 0);
}

void Petshop::pausar()
{
    cout << "Pressione qualquer tecla para continuar...";
    cin.get();
    cin.ignore();
}

void Petshop::limparTela()
{
#if defined _WIN32
    system("cls");
#elif defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
#elif defined(__APPLE__)
    system("clear");
#endif
}