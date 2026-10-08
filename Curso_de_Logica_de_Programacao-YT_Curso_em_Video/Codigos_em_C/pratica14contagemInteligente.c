//Estrutura de repetição WHILE (enquanto/faça)
//Faça um programa que receba o número inicial e o número final da contagem
//Se o número inicial for menor que o final, mostre uma contagem crescente
//Se o número inicial for maior que o final, mostre uma contagem decrescente

#include<stdio.h>

int main(){
    int inicio, fim; 

    printf("CONTAGEM INTELIGENTE\n");
    printf("--------------------\n");
    printf(" Início: ");
    scanf("%d", &inicio);
    printf(" Fim: ");
    scanf("%d", &fim);
    printf("--------------------\n");
    printf("  C O N T A N D O   \n");
    printf("--------------------\n");
    
    if (inicio < fim){
        while (inicio <= fim){
            printf("%d... ", inicio);
            inicio++;
        }
    } else {
        while (inicio >= fim){
            printf("%d... ", inicio);
            inicio--;
        }
    }

    return 0;
}
