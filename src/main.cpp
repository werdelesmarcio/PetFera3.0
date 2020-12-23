#include <iostream>
#include <map>
#include <string>

// Includes do projeto
#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "petshop.hpp"
#include "empregado.hpp"

// #include "menuprincipal.cpp"

using namespace std;

int main(){
    //menuPrincipal();

    Petshop novoPetshop;

    Empregado novoEmpregado;

    novoPetshop.empregados = novoEmpregado;

    novoPetshop.menu();

    return 0;
}


