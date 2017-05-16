
#include <screen.h>

#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H


class FiguraGeometrica
{
private:

public:
    char brush;

    FiguraGeometrica();
    ~FiguraGeometrica();
      // a funcao draw() eh uma
      // funcao virtual pura
    virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
