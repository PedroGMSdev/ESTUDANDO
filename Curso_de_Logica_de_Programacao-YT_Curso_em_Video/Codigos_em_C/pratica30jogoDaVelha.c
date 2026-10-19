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

int verificarCampeao(char tabuleiro[3][3]){
    int pontos = 0;
    for(int i = 0; i < 3; i++){ //Linha
        if((tabuleiro[i][0] == 'X' && tabuleiro[i][1] == 'X' && tabuleiro[i][2] == 'X') ||
           (tabuleiro[i][0] == 'O' && tabuleiro[i][1] == 'O' && tabuleiro[i][2] == 'O')){
            pontos = 1;
        }
    }

    for(int i = 0; i < 3; i++){ //Coluna
        if((tabuleiro[0][i] == 'X' && tabuleiro[1][i] == 'X' && tabuleiro[2][i] == 'X') ||
           (tabuleiro[0][i] == 'O' && tabuleiro[1][i] == 'O' && tabuleiro[2][i] == 'O')){
            pontos = 1;
        }
    }

    for(int i = 0; i < 3; i++){ //Diagonal Principal
        if((tabuleiro[0][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][2] == 'X') ||
           (tabuleiro[0][0] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][2] == 'O')){
            pontos = 1;
        }
    }

    for(int i = 0; i < 3; i++){ //Diagonal Secundária
        if((tabuleiro[0][2] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][0] == 'X') ||
           (tabuleiro[0][2] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][0] == 'O')){
            pontos = 1;
        }
    }

    return pontos;
}

int main(){
    char tabuleiro[3][3];
    char jogador1 = 'X';
    char jogador2 = 'O';
    char posicao;
    int jogoAtivo = 1;
    int jogadas = 0;
    int campeao = 0;
    char vencedor;
    int jogadaValida;

    do{
        do{
            criarTabuleiro(tabuleiro);

            while (jogadas < 9){
                mostrarTabuleiro(tabuleiro);
                do{
                    jogadaValida = 0;
                    printf("Vai jogar o [%c] em qual posição?\n", jogador1);
                    scanf(" %c", &posicao);
                    for(int i = 0; i < 3; i++){
                        for(int j = 0; j < 3; j++){
                            if(posicao == tabuleiro[i][j]){
                                tabuleiro[i][j] = jogador1;
                                vencedor = jogador1;
                                jogadas++;
                                jogadaValida = 1;
                            }
                        }
                    }
                    if(jogadaValida == 0){
                    printf("\nJogada Inválida!\n");
                    }
                } while (jogadaValida == 0);
                campeao = verificarCampeao(tabuleiro);
                if(campeao == 1){
                    break;
                }
                if(jogadas >= 9){
                    break;
                }
                
                printf("\n");
                mostrarTabuleiro(tabuleiro);
                do{
                    jogadaValida = 0;
                    printf("Vai jogar o [%c] em qual posição?\n", jogador2);
                    scanf(" %c", &posicao);
                    for(int i = 0; i < 3; i++){
                        for(int j = 0; j < 3; j++){
                            if(posicao == tabuleiro[i][j]){
                                tabuleiro[i][j] = jogador2;
                                vencedor = jogador2;
                                jogadas++;
                                jogadaValida = 1;
                            }
                        }
                    }
                    if(jogadaValida == 0){
                    printf("\nJogada Inválida!\n");
                    }
                } while(jogadaValida == 0);
                campeao = verificarCampeao(tabuleiro);
                if(campeao == 1){
                    break;
                }
            
                if(campeao == 1){
                break;
                }
                printf("\n");
            }
            jogadas = 0;
            mostrarTabuleiro(tabuleiro);
            if(campeao == 1){
                break;
            }
            printf("\n===============================\n");
            printf("|       NINGUÉM GANHOU!       |\n");
            printf("===============================\n\n");
        } while (campeao == 0);
        if(vencedor == 'X'){
            printf("\n===============================\n");
            printf("|     VITÓRIA DO Jogador 1!     |\n");
            printf("===============================\n\n");
        } else {
            printf("\n===============================\n");
            printf("|     VITÓRIA DO Jogador 2!     |\n");
            printf("===============================\n\n");
        }
        jogoAtivo = 0;
    } while(jogoAtivo == 1);

    return 0;
}