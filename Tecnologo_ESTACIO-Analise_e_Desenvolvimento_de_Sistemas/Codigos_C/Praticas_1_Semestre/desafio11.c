// DESAFIO Batalha Naval: Nível Aventureiro
// Cadeira: Introdução à Programação de Computadores
// Módulo: Jogo de Batalha Naval com Vetores e Matrizes

#include<stdio.h>

int main(){

    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    int navio1 = 3;
    int navio2 = 3;
    int navio3 = 3;
    int navio4 = 3;

    tabuleiro[7][6] = navio1;
    tabuleiro[7][7] = navio1;
    tabuleiro[7][8] = navio1;

    tabuleiro[4][2] = navio2;
    tabuleiro[5][2] = navio2;
    tabuleiro[6][2] = navio2;

    tabuleiro[0][9] = navio3;
    tabuleiro[1][8] = navio3;
    tabuleiro[2][7] = navio3;

    tabuleiro[6][1] = navio4;
    tabuleiro[7][2] = navio4;
    tabuleiro[8][3] = navio4;

    int linha = 0;
    int coluna = 0;
    int numeroLinha = 1;

    printf("TABULEIRO DE BATALHA NAVAL\n");
    printf("--------------------------\n");
    printf("A - B - C - D - E - F - G - H - I - J\n");
    printf("|   |   |   |   |   |   |   |   |   |\n");

    for (int i = 0; i < 10; i++){

        for (int j = 0; j < 10; j++){
            printf("%d - ", tabuleiro[linha][coluna]);
            coluna++;
        }

        printf(" (%d)", numeroLinha);
        numeroLinha++;
        printf("\n");
    }

}