#include "screen.h"
#include "vector"
#include "iostream"


Screen::Screen(int nlin, int ncol)
{
    this->nlin = nlin;
    this->ncol = ncol;
    brush = ' ';
    vector< vector<char> > m(nlin, vector<char>(ncol,0));
    mat = m;
}


void Screen::setPixel(int x, int y)
{
    if((x<nlin && y<ncol) && (x>=0 && y>=0))
        mat[x][y]=brush;
}

void Screen::clear()
{
    mat.erase(mat.begin(),mat.end());
}

void Screen::setBrush(char brush)
{
    this->brush = brush;
}

vector<vector<char> > Screen::getMat()
{
    return mat;
}

int Screen::getLin()
{
    return nlin;
}

int Screen::getCol()
{
    return ncol;
}

ostream &operator<<(ostream &os, Screen &t)
{
    for(int i=0; i<t.nlin; i++){
        for(int j=0; j<t.ncol; j++)
            os.put(t.mat[i][j]);
        os.put('\n');
    }

    return os;
}
