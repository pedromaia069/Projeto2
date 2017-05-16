#include "figurageometrica.h"
#include <iostream>
#include <screen.h>
#include <vector>
#include <reta.h>

#ifndef RETANGULO_H
#define RETANGULO_H


class Retangulo : public FiguraGeometrica
{
private:
    int x0, y0, largura, altura;
    vector<Reta*> rt; //array de retas
public:
    /**
     * @brief Retangulo - simula um retangulo
     * @param x0 - posica x do ponto superior esquerdo do retangulo
     * @param y0 - posica y do ponto superior esquerdo do retangulo
     * @param largura - largura do retangulo
     * @param altura - altura do retangulo
     */
    Retangulo(int x0, int y0, int largura, int altura);
    ~Retangulo();

    /**
     * @brief draw - desenha o retangulo na tela
     * @param t - tela onde será desenhado
     */
    void draw(Screen &t);
};

#endif // RETANGULO_H
