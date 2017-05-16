#include <vector>
#include <iostream>

#ifndef SCREEN_H
#define SCREEN_H

using namespace std;

class Screen
{
private:
  // armazenam o tamanho da tela de desenho
  // no de linhas e de colunas
  int nlin, ncol;

  // guarda o caractere usado para desenhar
  char brush;


  // armazena a matriz da tela
  vector< vector<char> > mat;
public:
  // construtor da classe
  /**
   * @brief Screen - simula uma tela
   * @param nlin  - numero de linhas
   * @param ncol - numero de colunas
   */
  Screen(int nlin, int ncol);

  // desenha um pixel da matriz usando o caratere
  // guardado em 'brush'
  /**
   * @brief setPixel - armazena um char na posição indicada
   * @param x - posicao x do ponto
   * @param y - posicao y do ponto
   */
  void setPixel(int y, int x);

  // limpa a tela
  void clear();

  // muda o caractere de desenho
  void setBrush(char brush);

  vector< vector<char> > getMat();

  // envia a tela para um stream de saida
  friend ostream& operator<<(ostream &os, Screen &t);

  int getLin();
  int getCol();
};

#endif // SCREEN_H
