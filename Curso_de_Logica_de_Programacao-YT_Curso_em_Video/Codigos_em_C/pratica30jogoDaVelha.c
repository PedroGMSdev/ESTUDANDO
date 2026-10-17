//Matrizes

#include<stdio.h>

int main(){
    char tabuleiro[3][3];
    int casa = 1;

    //criar tabuleiro
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tabuleiro[i][j] = casa; 
            casa++;
        }
    }

    //imprimir tabuleiro
    do{
        casa = 1;

        printf("   JOGO DA VELHA\n");
        printf("===================\n");
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf("|  %  ", tabuleiro[i][j]);
            }   
            printf("|\n");
        }
        printf("===================\n");
    } while

    return 0;
}