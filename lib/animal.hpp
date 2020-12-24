#pragma once

#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <ostream>
#include <iomanip>
#include <vector>
#include <memory>

//----------------------------------- Includes do Projeto
#include "tratador.hpp"
#include "veterinario.hpp"

using std::dynamic_pointer_cast;
using std::fixed;
using std::make_shared;
using std::setprecision;
using std::shared_ptr;

enum TipoAnimal
{
    //Enumerador para os Anfibios
    anfibioExotico,
    anfibioNativo,
    anfibioDomestico,

    //Enumerador para as Aves
    aveExotica,
    aveNativa,
    aveDomestica,

    //Enumerador para os Mamíferos
    mamiferoExotico,
    mamiferoNativo,
    mamiferoDomestico,

    //Enumerador para os Répteis
    reptilExotico,
    reptilNativo,
    reptilDomestico,
};

enum SexoAnimal
{
    macho,
    femea
};

class Animal
{
protected:
    TipoAnimal tipo;
    string descricao;
    string subraca;
    double valor;
    SexoAnimal sexo;
    shared_ptr<Veterinario> veterinario = nullptr;
    shared_ptr<Tratador> tratador = nullptr;

public:
    //---------------------------------------Constructor
    Animal(); //Padrão
    Animal(string descricao, 
           string subraca, 
           double valor, 
           SexoAnimal sexo);

    //-------------------------------------- Destrutor
    virtual ~Animal();

    //-------------------------------------- Getters
    string getDescricao() const;
    string getSubraca() const;
    double getValor() const;
    SexoAnimal getSexo() const;

    shared_ptr<Veterinario> getVeterinario() const;
    shared_ptr<Tratador> getTratador() const;

    //------------------------------------- Setters
    void setTipoAnimal(TipoAnimal tipo);
    void setDescricao(string descricao);
    void setSubRaca(string subraca);
    void setValor(double valor);
    void setSexo(SexoAnimal sexo);

    void setVeterinario(shared_ptr<Veterinario> veterinario);
    void setTratador(shared_ptr<Tratador> tratador);

    friend ostream& operator<<(ostream& o, shared_ptr<Animal> const animal);

private:
    //------------------------------------- Impressão
	virtual ostream& print(ostream&) const = 0;
};

#endif
