#include "anfibio.hpp"
#include "animal.hpp"

#include <iomanip>

Anfibio::Anfibio(string descricao,
                 string subraca,
                 double valor,
                 SexoAnimal sexo,
                 TemPeconha resposta) : Animal(descricao,
                                               subraca,
                                               valor,
                                               sexo),
                                        resposta(resposta) {}

Anfibio::~Anfibio() {}

TemPeconha Anfibio::getRespostaVeneno() const
{
    return this->resposta;
}

void Anfibio::setRespostaVeneno(TemPeconha resposta)
{
    this->resposta = resposta;
}

//--------------------------------------- Anfibio Domestico
AnfibioDomestico::AnfibioDomestico(string descricao,
                                   string subraca,
                                   double valor,
                                   SexoAnimal sexo,
                                   TemPeconha resposta) : Anfibio(descricao, subraca,
                                                                  valor, sexo,
                                                                  resposta)
{
    this->Animal::TipoAnimal = anfibioDomestico;
}


AnfibioDomestico::~AnfibioDomestico() {}


ostream &AnfibioDomestico::print(ostream &o) const
{
    string strVet;
    if (getVeterinario() == nullptr)
    {
        strVet = "Sem veterinario";
    }
    else
    {
        strVet = getVeterinario()->getNome();
    }
    std::string strTra;
    if (getTratador() == nullptr)
    {
        strTra = "Sem tratador";
    }
    else
    {
        strTra = getTratador()->getNome();
    }

    string strSexo = (this-> Animal::sexo == 0) ? "Macho" : "Fêmea";
    string strTipoVen = (this->Animal::TemPeconha == 0) ? "Não Venenoso" : "Venenoso";

    o << " | Preço = R$ " << fixed << setprecision(2) << this->valor
      << " | Sexo = " << this->sexo
      << " | Descricao = " << this->descricao
      << " | Periculosidade = " << TemPeconha
      << " | Veterinario = " << strVet
      << " | Tratador = " << strTra << endl;
    return o;
}
//-----------------------------------------------Anfibio Exotico
AnfibioExotico::AnfibioExotico(string descricao,
                                   string subraca,
                                   double valor,
                                   SexoAnimal sexo,
                                   TemPeconha resposta) : Anfibio(descricao, subraca,
                                                                  valor, sexo,
                                                                  resposta)
{
    this->Animal::TipoAnimal = anfibioDomestico;
}


AnfibioExotico::~AnfibioExotico() {}


ostream &AnfibioDomestico::print(ostream &o) const
{
    string strVet;
    if (getVeterinario() == nullptr)
    {
        strVet = "Sem veterinario";
    }
    else
    {
        strVet = getVeterinario()->getNome();
    }
    std::string strTra;
    if (getTratador() == nullptr)
    {
        strTra = "Sem tratador";
    }
    else
    {
        strTra = getTratador()->getNome();
    }

    string strSexo = (this-> Animal::sexo == 0) ? "Macho" : "Fêmea";
    string strTipoVen = (this->Animal::TemPeconha == 0) ? "Não Venenoso" : "Venenoso";

    o << " | Preço = R$ " << fixed << setprecision(2) << this->valor
      << " | Sexo = " << this->sexo
      << " | Descricao = " << this->descricao
      << " | Periculosidade = " << TemPeconha
      << " | Veterinario = " << strVet
      << " | Tratador = " << strTra << endl;
    return o;
}
