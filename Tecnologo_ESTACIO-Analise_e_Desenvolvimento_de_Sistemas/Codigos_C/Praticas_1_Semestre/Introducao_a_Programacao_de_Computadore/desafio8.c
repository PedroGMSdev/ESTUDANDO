// DESAFIO Peças do Xadrez: Nível Aventureiro
// Cadeira: Introdução à Programação de Computadores
// Módulo: Movimentação de Peças de Xadrez

#include<stdio.h>

int main(){
    //int rainha, bispo, torre = 0; OBSERVAÇÃO IMPORTANTE: em C, se colocar assim, o valor informado será atribuído apenas à ultima variável, no caso aí, apenas torre terá o valor 0.
    int rainha = 0, bispo = 0, torre = 0, cavalo = 0;

    printf("Torre vai para:\n");

    for(torre; torre < 5; torre++){
        printf("Direita.\n");
    }

    printf("\n");
    printf("Bispo vai para:\n");

    while(bispo < 5){
        printf("Cima.\n");
        printf("Direita.\n");
        bispo++;
    }

    printf("\n");
    printf("Rainha vai para:\n");

    do {
        printf("Esquerda.\n");
        rainha++;
    } while (rainha < 8);

    printf("\n");
    printf("Cavalo vai para:\n");

    for (cavalo; cavalo < 2; cavalo++){
        printf("Baixo.\n");
        while (cavalo == 1){
            printf("Esquerda.\n");
            cavalo++;
        }
    }

        
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