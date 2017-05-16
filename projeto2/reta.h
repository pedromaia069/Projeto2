#include "figurageometrica.h"
#include <screen.h>

#ifndef RETA_H
#define RETA_H


class Reta : public FiguraGeometrica
{
private:
    int x0, y0, x1, y1;
    char brush;

public:
    /**
     * @brief Reta - simula uma reta
     * @param x0 - posição x do ponto inicial
     * @param y0 - posicao y do ponto inicial
     * @param x1 - posicao x do ponto final
     * @param y1 - posicao y do ponto final
     */
    Reta(int x0, int y0,int x1, int y1);
    ~Reta();
    /**
     * @brief draw - Desenha na tela uma aproximacao de reta
     * @param t - tela onde será desenhada a reta
     */
    void draw(Screen &t);

};

#endif // RETA_H
