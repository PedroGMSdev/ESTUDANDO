// DESAFIO Batalha Naval: Nível Aventureiro
// Cadeira: Introdução à Programação de Computadores
// Módulo: Jogo de Batalha Naval com Vetores e Matrizes

#include<stdio.h>

#define TABULEIRO 10
#define NAVIO 3

int main(){

    int tabuleiro[TABULEIRO][TABULEIRO];
    int agua = 0;

    int navio1[NAVIO] = {3, 3, 3};
    int navio2[NAVIO] = {3, 3, 3};
    int navio3[NAVIO] = {3, 3, 3};
    int navio4[NAVIO] = {3, 3, 3};

    for (int i = 0; i < TABULEIRO; i++){
        for (int j = 0; j < TABULEIRO; j++){
            tabuleiro[i][j] = agua;
        }
    }

    for (int i = 0; i < NAVIO; i++){
        tabuleiro[7][6 + i] = navio1[i];
    }

    for (int i = 0; i < NAVIO; i++){
        tabuleiro[4 + i][2] = navio2[i];
    }

    for (int i = 0; i < NAVIO; i++){
        tabuleiro[7 + i][i] = navio3[i];
    }

    for (int i = 0; i < NAVIO; i++){
        tabuleiro[i][9 - i] = navio4[i];
    }

    int numeroLinha = 1;


    printf("TABULEIRO DE BATALHA NAVAL\n");
    printf("--------------------------\n");
    printf("A - B - C - D - E - F - G - H - I - J\n");
    printf("|   |   |   |   |   |   |   |   |   |\n");

    for (int i = 0; i < TABULEIRO; i++){
        for (int j = 0; j < TABULEIRO; j++){
            printf("%d - ", tabuleiro[i][j]);
        }
        printf(" (%d)", numeroLinha);
        numeroLinha++;
        printf("\n");
    }
    
    
    printf("\n");
    

}