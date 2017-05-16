#include <iostream>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"
using namespace std;

int main()
{
    retangulo ret(0,0,3,4);
    float area = ret.area();

    cout<<"Retangulo inicial: ";
    cout<<endl<<"Area incial = "<<area<<endl;
    ret.imprime();


    ret.translada(-3,4);
    area = ret.area();
    cout<<endl<<"Area transladada = "<<area<<endl;
    cout<<"Retangulo transladado: ";
    ret.imprime();


    ret.rotaciona();
    ret.rotaciona();
    ret.rotaciona();
    area = ret.area();
    cout<<endl<<"Area rotacionada = "<<area<<endl;
    cout<<"Retangulo rotacionado: ";
    ret.imprime();



}
