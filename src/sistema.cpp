#include <iostream>
#include <stdlib.h>

using namespace std;

/* * Estrutura que identifica qual Sistema Operacional
 *   o sistema Pet-Fera está instalado para poder executar
 *   o system pause.
 * */
void pausar()
{
    std::cin.clear(); 
    getchar();
}

/* * Estrutura que identifica qual Sistema Operacional
 *   o sistema Pet-Fera está instalado para poder executar
 *   o system clear e limpar a tela.
 * */
void limpaTela()
{
#if defined(_WIN32) && !defined(DEBUG)
    system("cls");
#elif (defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__)) && !defined(DEBUG)
    system("clear");    
#elif defined(__APPLE__) && !defined(DEBUG)
    system("clear");
#endif
}

void cabecalhoPrograma()
{
    cout << "----------------------------------------------\n"
         << "               CADASTRANDO...                 \n"
         << "----------------------------------------------\n";
}

