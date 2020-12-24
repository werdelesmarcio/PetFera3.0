#pragma once

#include "animal.hpp"

enum Alimentacao
{
    Carnivoro,
    Herbivoro,
    Onivoro
};

class Mamifero : public Animal
{
protected:
    Alimentacao tipoAlientacao;

public:
    Mamifero(string descricao,
             string subraca,
             double valor,
             SexoAnimal sexo,
             Alimentacao tipoAlimentacao);

    ~Mamifero();

    Alimentacao getAlimentacao() const;
    void setAlimentacao(Alimentacao tipoAlimentacao);

private:
    virtual ostream &print(ostream &o) const = 0;
};

//------------------------------------------- Mamifero Exotico
class MamiferoExotico : public Mamifero, public Animal
{
protected:
    string origem;

private:
    ostream &print(ostream &o) const;

public:
    MamiferoExotico(string descricao,
                    string subraca,
                    double valor,
                    SexoAnimal sexo,
                    Alimentacao tipoAlimentacao,
                    string origem);
    ~MamiferoExotico();
};

//-------------------------------------------- Mamifero Nativo
class MamiferoNativo : public Mamifero, public Animal
{
protected:
    string estado;
    bool ameacadoExtincao;
    string licenciado;

private:
    ostream &print(ostream &o) const;

public:
    MamiferoNativo(string descricao,
                   string subraca,
                   double valor,
                   SexoAnimal sexo,
                   Alimentacao tipoAlimentacao,
                   string estado,
                   bool ameacadoExtincao,
                   string licenciado);
                   
    ~MamiferoNativo();
};

//---------------------------------------------- Mamifero Doméstico
class MamiferoDomestico : public Mamifero, public Animal
{
private:
    ostream &print(ostream &o) const;

public:
    MamiferoDomestico(string descricao,
                      string subraca,
                      double valor,
                      SexoAnimal sexo,
                      Alimentacao tipoAlimentacao);

    ~MamiferoDomestico();
};