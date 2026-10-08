//Estrutura Condicionais SWITCH/CASE (escolha/caso)

#include<stdio.h>
#include<stdlib.h>

int main (){
    printf("--------------------------\n");
    printf("     CEARÁ X FORTALEZA    \n");
    printf("--------------------------\n");

    int ceara, fortaleza, diferenca;

    printf("Quantos gols do CEARÁ? ");
    scanf("%d", &ceara);
    printf("Quantos gols do FORTALEZA? ");
    scanf("%d", &fortaleza);

    diferenca = abs(ceara - fortaleza); //usando a biblioteca <stdlib.h> pode-se usar "abs()" para transformar o resultado da expressão em positiva sempre

    printf("--------------------------\n");
    printf(" DIFERENÇA: %d\n", diferenca);
    
    switch (diferenca){
        case 0:
            printf(" EMPATE\n");
        break;
        case 1:
        case 2:
        case 3:
        case 4:
            printf(" JOGO NORMAL\n");
        break;
        default:
            printf(" GOLEADA\n");
    }

    printf("--------------------------\n");

}