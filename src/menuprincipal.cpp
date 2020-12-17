#include <iostream>
#include "sistema.cpp"

// Includes do projeto
#include "lib/funcionario.hpp"
#include "lib/tratador.hpp"
#include "lib/veterinario.hpp"

void menuPrincipal()
{
    int opcao;

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

        pausar();
        limpaTela();
    } while (opcao != 'X' && opcao != 'x');
}

