// DESAFIO Peças do Xadrez: Nível Novato
// Cadeira: Introdução à Programação de Computadores
// Módulo: Movimentação de Peças de Xadrez

#include<stdio.h>

int main(){
    //int rainha, bispo, torre = 0; OBSERVAÇÃO IMPORTANTE: em C, se colocar assim, o valor informado será atribuído apenas à ultima variável, no caso aí, apenas torre terá o valor 0.
    int rainha = 0, bispo = 0, torre = 0;

    for(torre; torre < 5; torre++){
        printf("Torre vai para direita.\n");
    }

    printf("\n");

    while(bispo < 5){
        printf("Bispo vai para cima.\n");
        printf("Bispo vai para direita.\n");
        bispo++;
    }

    printf("\n");

    do {
        printf("Rainha vai para esquerda.\n");
        rainha++;
    } while (rainha < 8);

        
    printf("\n");
    printf("[][][][][][][][]\n");
    printf("[][][][][][][][]\n");
    printf("[][][][][][][][]\n");
    printf("[][][][][][][][]\n");
    printf("[][][][][][][][]\n");
    printf("[][][][][][][][]\n");
    printf("[][][][][][][][]\n");
    printf("[][][][][][][][]\n");
    
    

}