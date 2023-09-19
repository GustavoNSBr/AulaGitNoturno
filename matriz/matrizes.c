#include <stdio.h>

int main(){

    int matriz[2][2];

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    for(int linha = 0; linha <= 1;linha++){
        for(int coluna = 0;coluna <= 1;coluna++){
        printf("%d ", matriz[linha][coluna]); 
        }
        printf("\n");
    }

    return 0;
}