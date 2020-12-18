#include <iostream>

// Includes do projeto
#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"

#include "sistema.cpp"

void menuPrincipal()
{
    int opcao;
    string nome;
    string cpf;
    string telefone;
    string email;
    string documento;

    do
    {
        cout << "----------------------------------------------------\n"
             << "         PET-FERA - VERSÃO: 3.0 (BETA)              \n"
             << "----------------------------------------------------\n";
        cout << "OPCOES DE INSERCAO:                                 \n"
             << "   [1] - Cadastrar um Animal.                       \n"
             << "   [2] - Cadastrar um Tratador.                     \n"
             << "   [3] - Cadastrar um Veterinario.                  \n"
             << "----------------------------------------------------\n"
             << "   [0] - Cancelar o Cadastro.\n"
             << "Selecione a opcao: ";
        cin >> opcao;

        // limpaTela();

        switch (opcao)
        {
        case 1:
        {
            cabecalhoPrograma();
            cout << "Cadastro de novo Animal.\n";
        }
        break;
        case 2:
        {
            cabecalhoPrograma();
            cout << "Cadastro de novo Tratador.\n";

            cout << "Nome: ";
            cin.ignore();
            getline(cin, nome);

            cout << "CPF: ";
            //cin.ignore();
            getline(cin, cpf);

            cout << "Telefone: ";
            //cin.ignore();
            getline(cin, telefone);

            cout << "Email: ";
            //cin.ignore();
            getline(cin, email);

            cout << "Documento Profissional: ";
            //cin.ignore();
            getline(cin, documento);

            //Novo Tratador
            Tratador Novo("001", tratador, nome,
                          cpf, telefone,
                          email, documento);
        }
        break;
        case 3:
        {
            cabecalhoPrograma();
            cout << "Cadastro de novo Veterinario.\n";

            cout << "Nome: ";
            cin.ignore();
            getline(cin, nome);

            cout << "CPF: ";
            //cin.ignore();
            getline(cin, cpf);

            cout << "Telefone: ";
            //cin.ignore();
            getline(cin, telefone);

            cout << "Email: ";
            //cin.ignore();
            getline(cin, email);

            cout << "Documento Profissional: ";
            //cin.ignore();
            getline(cin, documento);

            //Novo Tratador
            Veterinario Novo("002", veterinario, nome,
                             cpf, telefone,
                             email, documento);
        }
        break;
        case 0:
        {
            cout << "\n\nSAINDO DO SISTEMA\n\n";
            return;
        }
        break;
        default:
            cabecalhoPrograma();
            cout << "OPCAO INVALIDA.\n";
        }

        cout << endl;

        pausar();
        limpaTela();
    } while (opcao != 'X' && opcao != 'x');
}
