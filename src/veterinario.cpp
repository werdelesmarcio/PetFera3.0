#include "veterinario.hpp"
#include <iostream>

using std::allocator;

//----------------------------------------------- Constructor
Veterinario::Veterinario(string codigo, /*Cargo funcao, */ string nome,
                         string cpf, string telefone, string email,
                         string docProfissional) : Funcionario(codigo, /*funcao, */ nome, cpf, telefone,
                                                               email),
                                                   docProfissional(docProfissional)
{
    this->funcao = veterinario;

    /*cout << "\n------------------Veterinario Inserido------------------" << endl;
    cout << "Codigo: " << getCodigo() << " - "
         << "Cargo: " << getFuncao() << endl;
    cout << "Nome: " << getNome() << " - "
         << "CPF: " << getCpf() << endl;
    cout << "Telefone: " << getTelefone() << " - "
         << "E-Mail: " << getEmail() << endl;
    cout << "Documento Profissional: " << getdocProfissional() << endl;*/
}

//------------------------------------------------ Evocação do Destrutor
Veterinario::~Veterinario() {}

//------------------------------------------------ Getters
string
Veterinario::getdocProfissional() const
{
    return this->docProfissional;
}

//------------------------------------------------ Setters
void Veterinario::setdocProfissional(string docProfissional)
{
    this->docProfissional = docProfissional;
}

//------------------------------------------------ Impressão dos dados
ostream &
Veterinario::print(ostream &impressao) const
{
    cout << "\n------------------Veterinario Inserido------------------" << endl;
    impressao << "Codigo: " << getCodigo() << " - "
              << "Cargo: " << getFuncao() << "\nNome: " << getNome() << " - "
              << "CPF: " << getCpf() << "\nTelefone: " << getTelefone() << " - "
              << "E-Mail: " << getEmail()
              << "\nDocumento Profissional: " << getdocProfissional() << endl;
    return impressao;
}
