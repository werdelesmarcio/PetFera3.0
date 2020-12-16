#include <iostream>

using namespace std;

/* * Estrutura que identifica qual Sistema Operacional
 *   o sistema Pet-Fera está instalado para poder executar
 *   o system pause.
 * */
void pausar()
{
#if defined _WIN32
    system("pause");
#elif defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("read -n 1 -s -p \"Pressione qualquer tecla para continuar...\"");
#elif defined(__APPLE__)
    system("read -n 1 -s -p \"Pressione qualquer tecla para continuar...\"");
#endif
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

