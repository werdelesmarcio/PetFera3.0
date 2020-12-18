#include <iostream>

// Includes do projeto
#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"

#include "sistema.cpp"

void menuPrincipal()
{
    int opcao;

    //limpaTela();

    do
    {
        cout << "----------------------------------------------------\n"
             << "         PRT-FERA - VERSÃO: 3.0 (BETA)             \n"
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

            //Novo Tratador
            Veterinario Novo("001", tratador, "Jose da Silva",
                             "011.784.000-87", "(84) 9 9454-8545",
                             "josedasilva@petfera.com.br", "CRT-5445");
        }
        break;
        case 3:
        {
            cabecalhoPrograma();
            cout << "Cadastro de novo Veterinario.\n";

            //Novo Veterinário
            Veterinario Novo("001", veterinario, "Marcelo Santos",
                             "011.784.484-87", "(84) 9 8844-8545",
                             "marcelosantos@ig.com.br", "CRMV-4544");
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

        std::cin.clear();
        std::cout << "Pressione qualquer tecla para continuar. . ." << std::endl;
        std::cin.get();

        pausar();
        limpaTela();
    } while (opcao != 'X' && opcao != 'x');
}
