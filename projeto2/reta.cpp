#include "reta.h"
#include <iostream>
#include <screen.h>
#include <cmath>
#include <vector>
using namespace std;

Reta::Reta(int x0, int y0,int x1, int y1)
{
    this->x0=x0;
    this->x1=x1;
    this->y0=y0;
    this->y1=y1;
}

Reta::~Reta()
{

}

void Reta::draw(Screen &t)
{
      t.setPixel(y0,x0);
      t.setPixel(y1,x1);

      int aux;
      if((x1-x0 < 0)||(y1-y0 <0)){
        aux = x0;
        x0=x1;
        x1=aux;

        aux = y0;
        y0 = y1;
        y1=aux;
      }

      double slope = (double) (y0 - y1)/(x0 - x1);
      double m =  ( (double) slope * x0 - y0)* -1;

      if((x1-x0)>(y1-y0)){
          for(int i = x0; i<= x1;i++){
              int y = slope * i + m;
              t.setPixel(y,i);
          }

      }else if((x1-x0)<=(y1-y0)) {
          for(int i = y0; i< y1;i++){
              int x = i/slope+x0;
              t.setPixel(i,x);
          }
      }

      /*if((x0>x1)&&(y0>y1)){
             if((x0-x1)>(y0-y1)){
                  for(int i = x1; i<= x0;i++){
                      int y = slope * i + m;
                      t.setPixel(y,i);
                  }

             }else if((x0-x1)<=(y0-y1)) {
                  for(int i = y1; i<= y0;i++){
                      int x = i/slope-x1;
                      t.setPixel(i,x);
                   }
              }
       }

      if((x0>x1)&&(y0>y1)){
          cout<<"aqui 2";
             if((x0-x1)>(y0-y1)){
                  for(int i = x1; i<= x0;i++){
                      int y = slope * i - m;
                      t.setPixel(y,i);
                      cout<<"aqui 1";

                  }

             }else if((x0-x1)<=(y0-y1)) {
                  for(int i = y0; i<= y1;i++){
                      int x = i/slope+x1;
                      t.setPixel(i,x);
                      cout<<"aqui";
                   }
              }
       }*/


}



