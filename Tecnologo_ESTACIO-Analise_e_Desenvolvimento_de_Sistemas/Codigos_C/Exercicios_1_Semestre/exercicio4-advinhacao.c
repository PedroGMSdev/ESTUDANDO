#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main() {
    int numero, chute;
    
    srand(time(0)); //gera, em tempo real, um número aleatório
    numero = rand() % 10; //armazena o número gerado (que costuma ser um número grande) na variável, dividindo por 10 e salvo apenas o resto da divisão
    
    printf("Digite um número de 0 a 9: \n");
    scanf("%d", &chute);
    
    if (chute == numero){
        printf("Parabéns! Você acertou. Bom chute!\n");
    } else {
        printf("Não foi dessa vez, tente de novo! O número era %d.\n", numero);
    }
}