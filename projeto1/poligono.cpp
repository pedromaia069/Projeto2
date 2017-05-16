#include "poligono.h"
#include "point.h"
#include <iostream>
#include <math.h>

#define PI 3.14159265

using namespace std;

Poligono::Poligono(float a, float b)
{
    vert[0].setXY(a,b);
    vt++;
}

void Poligono::insert(Point ponto)
{
    if(vt<100){
        vert[vt]=ponto;
        vert[vt+1]=vert[0];
        vt++;
    }else {
        cout<<"foi atingido o limeite de 100 vertices"<<endl;
    }
}

int Poligono::getVertices()
{
    return vt;
}

void Poligono::imprime()
{
    for(int i= 0; i<vt;i++){
        cout<<"("<< vert[i].getX() <<","<< vert[i].getY()<<")"<<"->";
    }
    cout<<"("<< vert[vt].getX() <<","<< vert[vt].getY()<<")"<<endl;
}

//esse método de calcular a área foi obtido no site:
//http://www.profcardy.com/cardicas/como-obter-area-de-poligono-por-coordenadas.php
float Poligono::area()
{
    int i;
    int ax,bx;
    float area;
    ax=bx=0;
    if(vt>=3){
        for(i=0;i<vt;i++){
           ax += vert[i].getX()*vert[i+1].getY();
           bx += vert[i].getY()*vert[i+1].getX();
        }
        if(ax>bx)
            area = (ax-bx)/2;
        else
            area = (bx-ax)/2;

        return area;
     }else
        return -1;
}

void Poligono::translada(float a, float b)
{
    int i;
    for(i=0;i<=vt;i++)
        vert[i].translada(a,b);

}

void Poligono::rotaciona()
{
    float teta;
    float x0, y0, xn, yn;
    float nx, ny, normal;
    int i;
    x0 = vert[0].getX();
    y0 = vert[0].getY();


    for(i=1; i<vt; i++){
        xn = vert[i].getX()-x0;//posição de x em relação ao eixo.
        yn = vert[i].getY()-y0;//posição de y em relação ao eixo.
        normal = sqrt((xn*xn)+(yn*yn));//pitagoras
        teta = atan(yn/xn);//calcula o angulo antes de rotacionar
        teta+=PI/6;//adiciona o angulo de 30 graus
        nx = cos(teta)*normal+x0;//calcula o x rotacionado
        ny = sin(teta)*normal+y0;//calcula o y rotacionado

        vert[i].setXY(nx,ny);//atualiza o ponto;

    }

}


