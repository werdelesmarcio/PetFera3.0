#include <iostream>
#include <fstream>

// Includes do projeto
#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "empregado.hpp"
#include "petshop.hpp"

#include "sistema.cpp"

void menuPrincipal()
{
    int opcao;
    string nome;
    string cpf;
    string telefone;
    string email;
    string documento;
    pausar();
    limpaTela();



    

    if (opcao == 1)
    {
        cout << "Cadastros de Animais nao implementado.\n";
    }
    else if (opcao == 2)
    {
        cout << "Cadastrar um novo Funcionario.\n";
        
    }
    else if (opcao == 3)
    {
    }
    else if (opcao == 4)
    {
    }
    else if (opcao == 0)
    {
    }
    else
    {
        cout << "Opcao invalida..." << endl;
    }
}

/*do
    {
       

        // limpaTela();

/*        switch (opcao)
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
            Tratador Novo("001", tratador, nome, cpf, telefone, email, documento);

            /* std::ofstream Empregados_FILE;
            std::string TEXTO = "Dados salvos";
            Empregados_FILE.open("./database.txt", std::ios::app);
            if (Empregados_FILE.is_open())
            {
                Tratador Novo("001", tratador, nome,
                              cpf, telefone,
                              email, documento);
                Empregados_FILE << TEXTO;
            }
            else
            {
                cout << "Erro ao acessar arquivo" << endl;
            }
            Empregados_FILE.close();*/

/*   break;
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
            Veterinario Novo("002", veterinario, nome, cpf, telefone, email, documento);
        }
        break;
        case 4:
        {
          //  ostream& Tratador::listaTratador(ostream& o) const;
        }break;
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
    } while (opcao != 'X' && opcao != 'x');*/
