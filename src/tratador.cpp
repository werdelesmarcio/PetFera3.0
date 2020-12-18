#include "tratador.hpp"

Tratador::Tratador(string codigo, Cargo funcao, string nome,
                   string cpf, string telefone, string email, string docProfissional) : Funcionario(codigo, funcao, nome, cpf, telefone, email),
                                                                                        docProfissional(docProfissional)
{
    cout << "\n------------------Tratador Inserido------------------" << endl;
    cout << "Codigo: " << getCodigo() << " - "
         << "Cargo: " << getFuncao() << endl;
    cout << "Nome: " << getNome() << " - "
         << "CPF: " << getCpf() << endl;
    cout << "Telefone: " << getTelefone() << " - "
         << "E-Mail: " << getEmail() << endl;
    cout << "Documento Profissional: " << getdocProfissional() << endl;

}

string
Tratador::getdocProfissional()
{
    return this->docProfissional;
}

void Tratador::setdocProfissional(string docProfissional)
{
    this->docProfissional = docProfissional;
}
