#include <iostream>
#include "sistema.cpp"

#include "funcionario.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"

void menuPrincipal()
{
    int opcao;
    string nome;
    string cpf;
    string telefone;
    string email;
    string documento;

    limpaTela();

    do
    {
        cabecalhoPrograma();
        cout << "OPCOES DE INSERCAO:                                 \n"
             << "   [1] - Cadastrar um Animal.                       \n"
             << "   [2] - Cadastrar um Tratador.                     \n"
             << "   [3] - Cadastrar um Veterinario.                  \n"
             << "----------------------------------------------------\n"
             << "   [0] - Cancelar o Cadastro.\n"
             << "Selecione a opcao: ";
        cin >> opcao;

        limpaTela();

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

            cout << "Nome:";
            cin.ignore();
            getline( cin, nome );

            cout << "CPF:";
            //cin.ignore();
            getline( cin, cpf );

            cout << "Telefone:";
            //cin.ignore();
            getline( cin, telefone );

            cout << "email:";
            //cin.ignore();
            getline( cin, email );

            cout << "documento profissional:";
            //cin.ignore();
            getline( cin, documento );

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

            cout << "Nome:";
            cin.ignore();
            getline( cin, nome );

            cout << "CPF:";
            //cin.ignore();
            getline( cin, cpf );

            cout << "Telefone:";
            //cin.ignore();
            getline( cin, telefone );

            cout << "email:";
            //cin.ignore();
            getline( cin, email );

            cout << "documento profissional:";
            //cin.ignore();
            getline( cin, documento );

            //Novo Veterinário
            Veterinario Novo("001", veterinario, nome,
                             cpf, telefone,
                             email, documento);            
        }
        break;
        case 0:
        {
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

