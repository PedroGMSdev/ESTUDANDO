//Estrutura de Repetição DO/WHILE (repita/até)

#include<stdio.h>

int main(){
    char resposta;

    do{
        printf("Você está de castigo!\n");
        printf("Já arrumou o quarto? [s/n] ");
        scanf(" %c", &resposta);
    } while (resposta != 's');

    printf("Ok! Está liberado!");

    return 0;
}