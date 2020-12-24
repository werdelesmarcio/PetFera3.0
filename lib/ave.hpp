#pragma once

#include "animal.hpp"

enum PodeVoar
{
    voam,
    naovoam
};

class Ave : public Animal
{
protected:
    PodeVoar voar;
    double tamanhoEnvergadura;

public:
    Ave(string descricao,
        string subraca,
        double valor,
        SexoAnimal sexo,
        PodeVoar voar,
        double tamanhoEnvergadura);
    ~Ave();

    PodeVoar getPodeVoar() const;
    double getTamanhoEnvergadura() const;

    void setPodeVoar(PodeVoar voar);
    void setTamanhoEnvergadura(double tamanhoEnvergadura);

private:
    virtual ostream &print(ostream &o) const = 0;
};

//-------------------------------------------Ave Exotica
class AveExotica : public Ave, public Animal
{
protected:
    string origem;

private:
    ostream &print(ostream &o) const;

public:
    AveExotica(string descricao,
               string subraca,
               double valor,
               SexoAnimal sexo,
               PodeVoar voar,
               double tamanhoEnvergadura,
               string origem);
    ~AveExotica();
};

//-------------------------------------------Ave Domestica
class AveDomestica : public Ave, public Animal
{
private:
    ostream &print(ostream &o) const;

public:
    AveDomestica(string descricao,
                 string subraca,
                 double valor,
                 SexoAnimal sexo,
                 PodeVoar voar,
                 double tamanhoEnvergadura);
    ~AveDomestica();
};
//-------------------------------------------- Ave Nativa
class AveNativa : public Ave, public Animal
{
protected:
    string estado;
    bool ameacadoExtincao;
    string licenciado;

private:
    ostream &print(ostream &o) const;

public:
    AveNativa(string descricao,
              string subraca,
              double valor,
              SexoAnimal sexo,
              PodeVoar voar,
              double tamanhoEnvergadura,
              string estado,
              bool ameacado,
              string licencaIBAMA);
    ~AveNativa();
};