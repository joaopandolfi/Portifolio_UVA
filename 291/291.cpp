#include <stdio.h>
#include <string.h>
 
int mapa [5][5];
int caminho[10];

void imprime(){
    int i;
    for(i = 0; i <= 8; i++ )
        printf("%d", caminho[i]);
    printf("\n");
}
 
void calculaRecursivo(int x, int y){
    int i;
    caminho[y] = x+1;
 
    if(y == 8){
        imprime();
        return;
    }
 
    for(i = 0; i < 5; i++)
        if(mapa[x][i]) {
            mapa[x][i] = mapa [i][x] = 0;
            calculaRecursivo(i, y + 1);
            mapa [x][i] = mapa [i][x] = 1;
        } 
}

void inicializa(){
    mapa[0][0]= mapa[0][3] = 0;
    mapa[1][1] = mapa[1][3]= 0;
    mapa[2][2] = 0;
    mapa[3][0] = mapa[3][1] = mapa[3][3] = 0;
    mapa[4][4] = 0;
}

int main (){
    int i;
    for(i = 0; i < 5; i++ ) {
        for( int j = 0; j < 5; j++ ) {
            mapa[i][j] = 1;
        }
    }
 
    inicializa();
    calculaRecursivo(0, 0);
    return 0;
}