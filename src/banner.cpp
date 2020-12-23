#include <iostream>
#include <fstream>

using std::cout;
using std::endl;

void Banner()
{
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
         << "   [5] - Salvar Dados do Funcionarios.               \n"
         << "   [6] - Listar Funcionarios Cadastrados             \n"
         << "-----------------------------------------------------\n"
         << "   [0] - Fechar o programa.\n";

}


/*int opcao;
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

do
    {
       

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

/*break;
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
    } while (opcao != 'X' && opcao != 'x');
    
    */
