//Matrizes

#include<stdio.h>

void criarTabuleiro(char tabuleiro[3][3]){
    int casa = 1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tabuleiro[i][j] = '0' + casa; 
            casa++;
        }
    }
}

void mostrarTabuleiro(char tabuleiro[3][3]){
    printf("   JOGO DA VELHA\n");
    printf("===================\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("|  %c  ", tabuleiro[i][j]);
        }   
    printf("|\n");
    printf("===================\n");
    }
}

int main(){
    char tabuleiro[3][3];
    char jogador1 = 'X';
    char jogador2 = 'O';
    char posicao;
    int jogoAtivo = 1;
    int jogadas = 0;

    //criar tabuleiro

    //imprimir tabuleiro
    do{
        
            criarTabuleiro(tabuleiro);

            while (jogadas < 9){
                mostrarTabuleiro(tabuleiro);
                printf("Vai jogar o [%c] em qual posição?\n", jogador1);
                scanf(" %c", &posicao);
                for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 3; j++){
                        if(posicao == tabuleiro[i][j]){
                            tabuleiro[i][j] = jogador1;
                            jogadas++;
                        }
                    }
                }
                if(jogadas >= 9){
                    break;
                }
                
                printf("\n");
                mostrarTabuleiro(tabuleiro);
                printf("Vai jogar o [%c] em qual posição?\n", jogador2);
                scanf(" %c", &posicao);
                for(int i = 0; i < 3; i++){
                    for(int j = 0; j < 3; j++){
                        if(posicao == tabuleiro[i][j]){
                            tabuleiro[i][j] = jogador2;
                            jogadas++;
                        }
                    }
                }
            }
            mostrarTabuleiro(tabuleiro);

        jogoAtivo = 0;
    } while(jogoAtivo == 1);

    return 0;
}