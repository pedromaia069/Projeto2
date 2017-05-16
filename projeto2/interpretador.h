#include <iostream>
#include <cmath>
#include <fstream>
#include <figurageometrica.h>
#include <screen.h>
#include <circulo.h>
#include <reta.h>
#include <retangulo.h>
#include <string>


#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H

/**
 * @brief The Interpretador class - analisa a entra de fluxo e de saida
 * armazenando as figuras geometricas.
 */
class Interpretador
{
private:
    string str;
    char c;
public:
    Interpretador();
    /**
     * @brief interprete - faz o tratamento do que é lido no arquivo de fluxo de entrada e grava no arquivo de saida e no terminal
     * @param saida -  obejto do tipo ofstream onde será armazenado o fluxo de saida
     *
     * @param entrada - obejto do tipo ifstream que será lido
     */
    void interprete(ofstream &saida, ifstream &entrada);
};

#endif // INTERPRETADOR_H
