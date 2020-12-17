#include "lib/veterinario.hpp"

Veterinario::Veterinario(string codigo, Cargo funcao, string nome,
                         string cpf, string telefone, string email, string docProfissional) : Funcionario(codigo, funcao, nome, cpf, telefone, email),
                                                                                              docProfissional(docProfissional)
{
    cout << "\n------------------Veterinario Inserido------------------" << endl;
    cout << "Codigo: " << getCodigo() << " - "
         << "Cargo: " << getFuncao() << endl;
    cout << "Nome: " << getNome() << " - "
         << "CPF: " << getCpf() << endl;
    cout << "Telefone: " << getTelefone() << " - "
         << "E-Mail: " << getEmail() << endl;
    cout << "Documento Profissional: " << getdocProfissional() << endl;

    ativos++;

    cout << "\nTOTAL DE CADASTROS: " << ativos << endl;
}

string
Veterinario::getdocProfissional()
{
    return this->docProfissional;
}

void Veterinario::setdocProfissional(string docProfissional)
{
    this->docProfissional = docProfissional;
}
