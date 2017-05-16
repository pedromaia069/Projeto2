#include "retangulo.h"
#include <iostream>
#include <screen.h>
#include <cmath>
#include <vector>
#include <reta.h>
using namespace std;

Retangulo::Retangulo(int x0, int y0, int largura, int altura)
{
    this->x0=x0;
    this->y0=y0;
    this->largura=largura;
    this->altura=altura;
    rt.push_back(new Reta(x0,y0,x0+largura,y0));
    rt.push_back(new Reta(x0,y0,x0,y0+altura));
    rt.push_back(new Reta(x0+largura,y0,x0+largura,y0+altura));
    rt.push_back(new Reta(x0,y0+altura,x0+largura,y0+altura));
}

Retangulo::~Retangulo()
{

}

void Retangulo::draw(Screen &t)
{
    for(unsigned i=0;i<rt.size();i++){
        rt[i]->draw(t);
        delete rt[i];
    }
}
