#include <iostream>
#include <fstream>
#include <istream>
#include <sstream>
#include <string>
#include <vector>

//------------------------------------------------- Includes do projeto
#include "empregado.hpp"

using namespace std;

//------------------------------------------------ Entrada de um empregado ao vetor
bool Empregado::adicionarFuncionario(shared_ptr<Funcionario> funcionario)
{
    this->funcionarios.push_back(funcionario);
    return true;
}

//------------------------------------------------ Instanciar um empregado
bool Empregado::criarFuncionario()
{
    int op;
    string codigo;
    string nome;
    string cpf;
    string telefone;
    string email;

    cout << "Digite 1 para veterinario.\n"
         << "Digite 2 para tratador" << endl;

    cin >> op;

    switch (op)
    {
    case 1:
    {
        string linha;
        getline(cin, linha);

        string docProfissional;

        cout << "Codigo: ";
        getline(cin, codigo);

        cout << "Nome: ";
        getline(cin, codigo);

        cout << "CPF: ";
        getline(cin, cpf);

        cout << "telefone: ";
        getline(cin, telefone);

        cout << "email: ";
        getline(cin, email);

        cout << "Carteira Profissional: ";
        cin >> docProfissional;
        limparTelaFuncionarios();

        return adicionarFuncionario(make_shared<Veterinario>(codigo, nome, cpf, telefone, email, docProfissional));
    }
    case 2:
        int opcaoRisco;
        Risco risco;

        string linha;
        getline(cin, linha);
        string docProfissional;

        cout << "Codigo: ";
        getline(cin, codigo);

        cout << "Nome: ";
        getline(cin, codigo);

        cout << "CPF: ";
        getline(cin, cpf);

        cout << "telefone: ";
        getline(cin, telefone);

        cout << "email: ";
        getline(cin, email);

        cout << "0 para Verde, 1 para Amarelo e 2 para Vermelho: ";
        cin >> opcaoRisco;
        if (opcaoRisco == 0)
        {
            risco = verde;
        }
        else if (opcaoRisco == 1)
        {
            risco = amarelo;
        }
        else
        {
            risco = vermelho;
        }
        limparTelaFuncionarios();

        return adicionarFuncionario(make_shared<Tratador>(codigo, nome, cpf, telefone, email, risco));
    }
    return 0;
}

//---------------------------------------------------- Lista dos Profissionais
void Empregado::listarFuncionarios()
{
    for (auto &fun : this->funcionarios)
    {
        cout << *fun << endl;
    }
}

//---------------------------------------------------- Busca por nome do profissional
shared_ptr<Funcionario> Empregado::pesquisarFuncionario(string nome)
{
    for (auto &fun : this->funcionarios)
    {
        if (fun->getNome() == nome)
        {
            cout << "Funcionario encontrado: " << *fun << endl;
            return fun;
        }
    }
    cout << "Funcionario não encontrado." << endl;
    return nullptr;
}

//------------------------------------------------------ Excluir o empregado
shared_ptr<Funcionario> Empregado::excluirFuncionario(string nome)
{
    int comando = 0;
    for (auto &fun : this->funcionarios)
    {
        if (fun->getNome() == nome)
        {
            shared_ptr<Funcionario> removido = fun;
            cout << "Funcionario removido: " << *fun << endl;
            this->funcionarios.erase(this->funcionarios.begin() + comando);
            return removido;
        }
        comando++;
    }
    return nullptr;
}

//------------------------------------------------------ Salvar os dados dos Funcionarios
void Empregado::salvarFuncionarios()
{
    ofstream ARQUIVO("BancoDadosFuncionarios.ods");
    shared_ptr<Veterinario> v;
    shared_ptr<Tratador> t;
    for (auto &fun : this->funcionarios)
    {
        if (fun->getFuncao() == veterinario)
        {
            v = dynamic_pointer_cast<Veterinario>(fun);
            ARQUIVO << v->getCodigo() << ";" << v->getNome() << ";" << v->getTelefone() << ";"
                    << v->getEmail() << ";" << v->getdocProfissional() << endl;
        }
        if (fun->getFuncao() == tratador)
        {
            t = dynamic_pointer_cast<Tratador>(fun);
            ARQUIVO << t->getCodigo() << ";" << t->getNome() << ";" << t->getTelefone() << ";"
                    << t->getEmail() << ";" << t->getRisco() << endl;
        }
    }
}

//-------------------------------------------------------- Carregar os dados dos funcionarios a partir do arquivo
void Empregado::carregarFuncionarios()
{
    cout << "Dados carregados do Banco de Dados." << endl;
    ifstream ARQUIVO("BancoDadosFuncionarios.ods");
    string linha;
    string palavra;
    while (getline(ARQUIVO, linha))
    {
        stringstream s(linha);
        vector<string> tokens;
        while (getline(s, palavra, ';'))
        {
            tokens.push_back(palavra);
        }
        if (tokens.at(0) == "1")
        {
            Risco risco;
            if (tokens.at(4) == "0")
            {
                risco = verde;
            }
            else if (tokens.at(4) == "1")
            {
                risco = amarelo;
            }
            else
            {
                risco = vermelho;
            }
            adicionarFuncionario(make_shared<Tratador>(tokens.at(1), tokens.at(2), tokens.at(3), risco));
        }
    }
}

void Empregado::alterarFuncionario(shared_ptr<Funcionario> funcionario)
{
    int listar;
    int opcao;
    string nome;
    string novoNome;
    string novoCpf;
    string novoTelefone;
    string novoEmail;
    string novoDocumento;

    do
    {
        cout << "1 - Alterar Nome" << endl
             << "2 - Alterar CPF" << endl
             << "3 - Alterar Telefone" << endl
             << "4 - Alterar Email" << endl
             << "5 - Alterar Documento" << endl
             << "6 - Alterar Nivel de Risco (para Tratador)" << endl
             << "0 - Finalizar alteração" << endl;
        cin >> listar;

        if (listar == 1)
        {
            cin.ignore();
            cout << "Novo nome: ";
            getline(cin, novoNome);
            funcionario->setNome(novoNome);
        }
        else if (listar == 2)
        {
            cin.ignore();
            cout << "Novo CPF: ";
            getline(cin, novoCpf);
            funcionario->setCpf(novoCpf);
        }
        else if (listar == 3)
        {
            cin.ignore();
            cout << "Novo telefone: ";
            getline(cin, novoTelefone);
            funcionario->setTelefone(novoTelefone);
        }
        else if (listar == 4)
        {
            cin.ignore();
            cout << "Novo Email: ";
            getline(cin, novoEmail);
            funcionario->setEmail(novoEmail);
        }
        else if (listar == 5)
        {
            if (funcionario->getFuncao() == 1)
            {
                string novoDocumento;
                shared_ptr<Veterinario> alterado = dynamic_pointer_cast<Veterinario>(funcionario);
                cin.ignore();
                cout << "Novo Documento Profissional: ";
                getline(cin, novoDocumento);
                alterado->setdocProfissional(novoDocumento);
            }
            else
            {
                cout << "Opcao invalida." << endl;
            }
        }
        else if (listar = 6)
        {
            if (funcionario->getFuncao() == 0)
            {
                Risco = novoRisco;
                shared_ptr<Tratador> alterado = dynamic_pointer_cast<Tratador>(funcionario);
                cout << "Novo nivel de risco:\n "
                     << "(1 para VERDE)\n"
                     << "(2 para AMARELO)\n"
                     << "(3 para VERMELHO)\n";
                cin >> opcao;
                if (opcao == 1)
                {
                    novoRisco = verde;
                    alterado->setRisco(novoRisco);
                }
                else if (opcao == 2)
                {
                    novoRisco = amarelo;
                    alterado->setRisco(novoRisco);
                }
                else if (opcao == 3)
                {
                    novoRisco = vermelho;
                    alterado->setRisco(novoRisco);
                }
                else
                {
                    cout << "Opcao invalida." << endl;
                }
            }
            else
            {
                cout << "Opcao invalida." << endl;
            }
        }
    } while (listar != 0);
}

bool Empregado::encFuncionario(string nome)
{
    if (pesquisarFuncionario(nome) == nullptr)
    {
        return false;
    }
    return true;
}