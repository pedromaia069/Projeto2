#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int raio;
    cin >> raio;

    int col, lin;
    col = lin = 1 + raio;
    int modulo, x, y;
    char tela1[lin][col],tela2[lin][col],tela3[lin][col],tela4[lin][col];
    for(int i = 0; i<lin; i++){
        for(int j=0; j<col; j++){
            modulo = sqrt(i*i + j*j);
            if(modulo<raio)
                tela1[i][j] = '*';
            else
                 tela1[i][j] = '-';
        }
    }

    for(int i = lin-1; i>=0; i--){
        for(int j=col-1; j>=0; j--){
            x = (lin-1)-i;
            y = (col-1)-j;
            modulo = sqrt(x*x + y*y);
            if(modulo<raio)
                tela2[i][j] = '*';
            else
                 tela2[i][j] = '-';
        }
    }
    for(int i = lin-1; i>=0; i--){
        for(int j=col-1; j>=0; j--){
            x = (lin-1)-i;
            y = (col-1)-j;
            modulo = sqrt(x*x + y*y);
            if(modulo<raio)
                tela2[i][j] = '*';
            else
                tela2[i][j] = '-';
        }
    }

    for(int i = 0; i<lin; i++){
        for(int j=0; j<col; j++){
           cout << tela2[i][j];
        }
        cout << endl;
    }
    return 0;
}
