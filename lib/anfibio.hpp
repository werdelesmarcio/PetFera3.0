#pragma once

#include "animal.hpp"

enum TemPeconha
{
    naoVenenoso,
    Venenoso
};

class Anfibio : public Animal
{
protected:
    TemPeconha resposta;

public:
    Anfibio();
    Anfibio(string descricao,
            string subraca,
            double valor,
            SexoAnimal sexo,
            TemPeconha resposta);
    ~Anfibio();

    TemPeconha getRespostaVeneno() const;
    void setRespostaVeneno(TemPeconha resposta);

private:
    virtual ostream &print(ostream &o) const = 0;
};

//------------------------------------- Anfibio Domestico
class AnfibioDomestico : public Anfibio, public Animal
{
private:
    ostream &print(ostream &o) const;

public:
    AnfibioDomestico(string descricao,
                     string subraca,
                     double valor,
                     SexoAnimal sexo,
                     TemPeconha resposta);
    ~AnfibioDomestico();
};

//------------------------------------ Anfibio Exótico
class AnfibioExotico : public Anfibio, public Animal
{
private:
    ostream &print(ostream &o) const;

public:
    AnfibioExotico(string descricao,
                   string subraca,
                   double valor,
                   SexoAnimal sexo,
                   TemPeconha resposta);
    ~AnfibioExotico();
};

//------------------------------------- Anfibio Nativo
class AnfibioNativo : public Anfibio, public Animal
{
protected:
    string estado;
    bool ameacaExtincao;
    string licenciado;

private:
    ostream &print(ostream &o) const;

public:
    AnfibioNativo(string descricao,
                  string subraca,
                  double valor,
                  SexoAnimal sexo,
                  TemPeconha resposta,
                  string estado, 
                  bool ameacaExtincao, 
                  string licenciado);

    ~AnfibioNativo();
};