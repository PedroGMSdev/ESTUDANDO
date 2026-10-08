#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int escolhaJogador, escolhaComputador;

    printf("---------------------------------\n");
    printf("PEDRA, PAPEL E TESOURA\n");
    printf("---------------------------------\n");
    printf("Escolha uma oção: \n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhaJogador);

    srand(time(0)); // inicializa o gerador de números aleatórios com base no tempo atual
    escolhaComputador = rand() % 3 + 1; // ao dividir o número aleatório gerado por "srand" por 3, o resto da divisão será 0, 1 ou 2. Ao somar 1, o resultado final será 1, 2 ou 3.

    printf("---------------------------------\n");

    switch (escolhaJogador) {
        case 1:
            printf("Você escolheu Pedra\n");
            break;
        case 2:
            printf("Você escolheu Papel\n");
            break;
        case 3:
            printf("Você escolheu Tesoura\n");
            break;
        default:
            printf("Escolha inválida!\n");
            return 0;
    }

    switch (escolhaComputador) {
        case 1:
            printf("O computador escolheu Pedra\n");
            break;
        case 2:
            printf("O computador escolheu Papel\n");
            break;
        case 3:
            printf("O computador escolheu Tesoura\n");
            break;
    }

    printf("---------------------------------\n");

    if (escolhaJogador == escolhaComputador){
        printf("Empate!\n");
    } else if ((escolhaJogador == 1) && (escolhaComputador == 3)){
        printf("Você venceu!\n");
    } else if ((escolhaJogador == 1) && (escolhaComputador == 2)){
        printf("O computador venceu!\n");
    } else if ((escolhaJogador == 2) && (escolhaComputador == 1)){
        printf("Você venceu!\n");
    } else if ((escolhaJogador == 2) && (escolhaComputador == 3)){
        printf("O computador venceu!\n");
    } else if ((escolhaJogador == 3) && (escolhaComputador == 2)){
        printf("Você venceu!\n");
    } else if ((escolhaJogador == 3) && (escolhaComputador == 1)){
        printf("O computador venceu!\n");
    } else {
        printf("Escolha inválida!\n");
    }

    return 0;
    
}