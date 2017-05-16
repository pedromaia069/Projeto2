#include <iostream>
#include <cmath>
#include <fstream>
#include <figurageometrica.h>
#include <screen.h>
#include <circulo.h>
#include <reta.h>
#include <retangulo.h>
#include <string>
#include <interpretador.h>
using namespace std;

int main()
{


    ifstream entrada; // arquivo de ENTRADA
    ofstream saida;


    entrada.open("L:/PA/entrada.txt");
    saida.open("L:/PA/saida.txt");

    string str;
    Interpretador interpretador;

    interpretador.interprete(saida,entrada);


    /*Circulo c(20,20,5);
    c.setMod(0);
    c.setBrush('*');

    c.draw(tela);


    Reta line(10, 8, 5 ,5);
    line.setBrush('q');
    line.draw(tela);

    Retangulo rt(5, 6, 10, 20);
    rt.setBrush('@');
    //rt.draw(tela);

     cout << tela;*/

   /*

    int raio;
    cin >> raio;
    int x,y,xc, yc, l,c;
    xc = yc = raio;
    int modulo;

    l = c = 2*raio+1;

    char t[l][c];

    for (int i=0; i<l;i++){
        for(int j=0; j<c;j++){
            x=abs(xc-i);
            y=abs(yc-j);
            modulo = sqrt(x*x+y*y);
            if(modulo <= raio){
                t[i][j] = '@';
            }else
                t[i][j] = ' ';
        }
    }
    saida.open("F:/PA/saida.txt");
     if(saida.is_open()){

        for (int i=0; i<l;i++){
            for(int j=0; j<c;j++){
                saida<<t[i][j];
            }
            saida<<endl;
        }
    saida.close();
    }
*/
    return 0;
}
