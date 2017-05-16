#include "interpretador.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include <figurageometrica.h>
#include <screen.h>
#include <circulo.h>
#include <reta.h>
#include <retangulo.h>
#include <string>
#include <vector>
using namespace std;

Interpretador::Interpretador()
{
    str="";
}
/**
 * @brief Interpretador::interprete
 * @param saida - Objeto para o qual o programa irá realizar o fluxo de saida
 * @param entrada - Objeto para o qual o programa fará o fluxo de entrada
 */
void Interpretador::interprete(ofstream &saida, ifstream &entrada)
{
    Screen *t; // tela que será usada

    vector < FiguraGeometrica* > fig; // vetor de figuras geometricas
    char brush; // define a brush que será utilizada
    bool flag = false; // flag para definir se a tela foi inciada corretamente e poder desenhar.

    if(entrada.is_open() && saida.is_open()){//verifica se os arquivos de fluxo foram abertos corretamente.
          while(entrada.good()){//verifica o fluxo de entrada

              entrada>>str;

              if(str == "dim"){//cria a tela se o rpimeiro comnado for o dim se não for finaliza o programa
                  int larg, alt;
                  entrada>> larg >> alt;
                  if (larg>0 && alt>0){
                      t = new Screen(larg,alt);
                      flag = true;
                  }else
                      exit(0);
              }

              if(flag){//verifica se a tela foi iniciada
                  if(str == "brush"){// configura a brush
                      entrada>>str;
                      if(str.size()==1)
                          t->setBrush(str[0]);

                  }

                  if(str == "line"){//configura a linha
                      int x0, x1, y0,y1;
                      entrada >> x0 >> y0 >> x1 >> y1;
                      fig.push_back(new Reta(x0,y0,x1,y1));
                  }

                  if(str == "rectangle"){//configura o retangulo
                      int x0, y0, larg, alt;
                      entrada>> x0>>y0>>larg>>alt;
                      fig.push_back(new Retangulo(x0,y0,larg,alt));

                  }
                   if(str == "circle"){//configura o circulo
                       int x0, y0, raio, fillmode;
                       entrada>>x0>>y0>>raio>>fillmode;
                       fig.push_back(new Circulo(x0,y0,raio,fillmode));
                   }
              }

          }
        //loop para desenhar as figuras adicionadas
        for(unsigned it = 0; it<fig.size() ;it++){
            fig[it]->draw(*t);
            delete fig[it];
        }
        saida << *t;
        cout << *t;
        delete t;

        entrada.close();
    }
}
