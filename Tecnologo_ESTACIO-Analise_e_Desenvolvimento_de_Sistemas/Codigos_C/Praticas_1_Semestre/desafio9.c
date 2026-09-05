// DESAFIO Peças do Xadrez: Nível Mestre
// Cadeira: Introdução à Programação de Computadores
// Módulo: Movimentação de Peças de Xadrez

#include<stdio.h>

void torreMovimento(int numero){
    if (numero > 0){
        printf("Direita.\n");
        torreMovimento(numero - 1);
    }
}

void bispoMovimento(int numero){
    if (numero > 0){
        int bispo = 0;
        bispo++;
        while(bispo > 0){
            printf("Cima.\n");
            while (bispo > 0){
                printf("Direita.\n");
                bispo--;
            }
            
        }
        bispoMovimento(numero - 1);
    }
}

void rainhaMovimento(int numero){
    if (numero > 0){
        printf("Esquerda.\n");
        rainhaMovimento(numero - 1);
    }
}

int main(){
    //int rainha, bispo, torre = 0; OBSERVAÇÃO IMPORTANTE: em C, se colocar assim, o valor informado será atribuído apenas à ultima variável, no caso aí, apenas torre terá o valor 0.
    int rainha = 0, bispo = 0, torre = 0, cavalo = 0;

    printf("Torre vai para:\n");
    torreMovimento(5);

    printf("\n");
    printf("Bispo vai para:\n");
    bispoMovimento(5);

    printf("\n");
    printf("Rainha vai para:\n");
    rainhaMovimento(8);

    printf("\n");
    printf("Cavalo vai para:\n");

    for (cavalo; cavalo < 10; cavalo++){
        printf("Cima.\n");
        if (cavalo < 1) continue;
        printf("Direita.\n");
        if (cavalo == 1) break;
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