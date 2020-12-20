#include "tratador.hpp"

//-----------------------------------------------Constructor
Tratador::Tratador(string codigo, Cargo funcao, string nome,
                   string cpf, string telefone, string email,
                   Risco risco) : Funcionario(codigo, funcao, nome, cpf, telefone, email), risco(risco)
{
    this->funcao = tratador;

    /*cout << "\n------------------Tratador Inserido------------------" << endl;
    cout << "Codigo: " << getCodigo() << " - "
         << "Cargo: " << getFuncao() << endl;
    cout << "Nome: " << getNome() << " - "
         << "CPF: " << getCpf() << endl;
    cout << "Telefone: " << getTelefone() << " - "
         << "E-Mail: " << getEmail() << endl;
    cout << "Risco de Exposicao: " << getRisco() << endl;*/
}

//----------------------------------------------- Destrutor
Tratador::~Tratador() {}

//----------------------------------------------- Getters
Risco Tratador::getRisco() const
{
    return this->risco;
}

//------------------------------------------------ Setters
void Tratador::setRisco(Risco risco)
{
    this->risco = risco;
}

//------------------------------------------------ Impressão
ostream &
Tratador::print(ostream &impressao) const
{
    string strRisco;

    if (this->risco == 0)
    {
        strRisco = "Verde";
    }
    else if (this->risco == 1)
    {
        strRisco = "Amarelo";
    }
    else
    {
        strRisco = "Vermelho";
    }

    cout << "\n------------------Tratador Inserido------------------" << endl;
    impressao << "Codigo: " << getCodigo() << " - "
              << "Cargo: " << getFuncao() << "\nNome: " << getNome() << " - "
              << "CPF: " << getCpf() << "\nTelefone: " << getTelefone() << " - "
              << "E-Mail: " << getEmail() << "\nRisco de Exposicao: " << getRisco() << endl;

    return impressao;
}