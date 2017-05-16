#include "circulo.h"
#include <iostream>
#include <screen.h>
#include <cmath>
using namespace std;

Circulo::Circulo(int x0, int y0, int raio, int fillmode)
{
   this->x0= x0;
    this->y0=y0;
    this->raio=raio;
    this->fillmode =fillmode;
}

void Circulo::draw(Screen &t)
{
    int x, y, modulo;
    int col = t.getCol();
    int lin = t.getLin();
   for (int i=0; i<col;i++){
        for(int j=0; j<lin;j++){
            x=abs(x0-i);
            y=abs(y0-j);
            modulo = sqrt(x*x+y*y);
            if(fillmode == 1){
                if(modulo <= raio)
                    t.setPixel(j,i);
            } else
                if(modulo == raio)
                    t.setPixel(j,i);

         }
    }
}


