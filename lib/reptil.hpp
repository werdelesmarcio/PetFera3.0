#pragma once

#include "animal.hpp"

enum TemPeconha
{
    naoVenenoso,
    Venenoso
};

class Reptil : public Animal
{
protected:
    TemPeconha veneno;
    double comprimento;

public:
    Reptil(string descricao,
           string subraca,
           double valor,
           SexoAnimal sexo,
           TemPeconha veneno,
           double comprimento);
    virtual ~Reptil();

    TemPeconha getTemPeconha() const;
    double getComprimento() const;

    void setVeneno(TemPeconha veneno);
    void setComprimento(double comprimento);

private:
    virtual ostream &print(ostream &o) const = 0;
};

//---------------------------------------- Réptil Exotico
class ReptilExotico : public Reptil, public Animal
{
protected:
    string origem;

private:
    ostream &print(ostream &o) const;

public:
    ReptilExotico(string descricao,
                  string subraca,
                  double valor,
                  SexoAnimal sexo,
                  TemPeconha veneno,
                  double comprimento,
                  string origem);
    ~ReptilExotico();
};

//----------------------------------------- Réptil Nativo
class ReptilNativo : public Reptil, public Animal
{
protected:
    string estado;
    bool ameacadoExtincao;
    string licenciado;

private:
    ostream &print(ostream &o) const;

public:
    ReptilNativo(string descricao,
                 string subraca,
                 double valor,
                 SexoAnimal sexo,
                 TemPeconha veneno,
                 double comprimento,
                 string estado,
                 bool ameacadoExtincao,
                 string licenciado);
                 
    ~ReptilNativo();
};

//----------------------------------------- Réptil Doméstico
class ReptilDomestico : public Reptil, public Animal
{
private:
    ostream &print(ostream &o) const;

public:
    ReptilDomestico(string descricao,
                    string subraca,
                    double valor,
                    SexoAnimal sexo,
                    TemPeconha veneno,
                    double comprimento);

    ~ReptilDomestico();
};
