#include <iostream>
#include "sistema.cpp"

#include "funcionario.hpp"

void menuPrincipal()
{
    char opcao;
    limpaTela();

    do
    {
        cout << "----------------------------------------------\n"
             << "         PET-FERA - VERSAO 1.0 (BETA)       \n"
             << "----------------------------------------------\n"
             << "                 OPCOES:                    \n"
             << "----------------------------------------------\n"
             << " [F] - Cadastrar um Funcionario.            \n"
             << " [A] - Cadastrar um Animal.                 \n"
             << " [T] - Cadastrar um Tratador.               \n"
             << " [V] - Cadastrar um Veterinario.            \n"
             << "----------------------------------------------\n"
             << " [U] - Atualizar Cadastro.                  \n"
             << "----------------------------------------------\n"
             << " [X] - Encerrar.\n"
             << "Selecione a opcao: ";
        cin >> opcao;

        limpaTela();

        switch (opcao)
        {
        case 'F':
        case 'f':
        {
            cout << "----------------------------------------------\n"
                 << "         PET-FERA - VERSAO 1.0 (BETA)       \n"
                 << "----------------------------------------------\n"
                 << "Cadastro de novo Funcionario.\n";

        }
        break;
        case 'A':
        case 'a':
        {
            cout << "----------------------------------------------\n"
                 << "         PET-FERA - VERSAO 1.0 (BETA)       \n"
                 << "----------------------------------------------\n"
                 << "Cadastro de novo Animal.\n";
        }
        break;
        case 'T':
        case 't':
        {
            cout << "----------------------------------------------\n"
                 << "         PET-FERA - VERSAO 1.0 (BETA)       \n"
                 << "----------------------------------------------\n"
                 << "Cadastro de novo Tratador.\n";
        }
        break;
        case 'V':
        case 'v':
        {
            cout << "----------------------------------------------\n"
                 << "         PET-FERA - VERSAO 1.0 (BETA)       \n"
                 << "----------------------------------------------\n"
                 << "Cadastro de novo Veterinario.\n";
        }
        break;
        case 'U':
        case 'u':
        {
            cout << "----------------------------------------------\n"
                 << "         PET-FERA - VERSAO 1.0 (BETA)       \n"
                 << "----------------------------------------------\n"
                 << "Em producao.\n";
        }
        case 'X':
        case 'x':
        {
            return;
        }
        break;
        default:
            cout << "----------------------------------------------\n"
                 << "         PET-FERA - VERSAO 1.0 (BETA)       \n"
                 << "----------------------------------------------\n"
                 << "OPCAO INVALIDA.\n";
        }
        cout << endl;

        pausar();
        limpaTela();

    } while (opcao != 'X' && opcao != 'x');
}