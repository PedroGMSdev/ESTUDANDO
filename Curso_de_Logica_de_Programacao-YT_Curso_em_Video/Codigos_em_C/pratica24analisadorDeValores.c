//Estruturas de Repetição FOR (para/até)
//Receber 5 valores
//Exibir:
//  Soma dos valores
//  Média entre os valores
//  Quantos são divisíveis por 5
//  Quantos são nulos
//  Soma dos pares

#include<stdio.h>

int main(){
    int numero, soma = 0, divisiveis = 0, nulos = 0, pares = 0;
    float media;

    for (int i = 1; i <= 5; i++){
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);

        soma += numero;

        if (numero % 5 == 0){
            divisiveis++;
        }

        if (numero == 0){
            nulos++;
        }

        if (numero % 2 == 0){
            pares += numero;
        }

    }

    media = soma / 5;
    
    printf("A soma entre os valores é: %d\n", soma);
    printf("A média entre os valores é: %.1f\n", media);
    printf("A quantidade de valores divisíveis por 5 é: %d\n", divisiveis);
    printf("A quantidade de valores nulos é: %d\n", nulos);
    printf("A soma dos valores pares é: %d\n", pares);

    return 0;
}