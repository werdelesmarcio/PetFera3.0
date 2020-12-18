#include <iostream>
#include <stdlib.h>

using namespace std;

void pausar()
{
    std::cin.clear(); 
    getchar();
}

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
    cout << "----------------------------------------------\n";
}

