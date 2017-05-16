#include "figurageometrica.h"
#include <screen.h>

#ifndef CIRCULO_H
#define CIRCULO_H

/**
 * @brief The Circulo class
 * Usada para gerar um circulo ou um anel
 * Herda da classe FiguraGeometrica
 */
class Circulo : public FiguraGeometrica
{
private:

    int raio, x0, y0;
    int fillmode;

public:

    /**
     * @brief Circulo
     * @param x0 - poxicao x do centro do circulo
     * @param y0 - poxicao x do centro do circulo
     * @param raio - raio do circulo
     * @param fillmode - 1 para circulo preenchido e 0 para apenas contorno do círculo
     */
    Circulo(int x0, int y0, int raio, int fillmode);
    void draw(Screen &t);
};

#endif // CIRCULO_H
