//Estrutura de repetição DO/WHILE (repita/até)

#include<stdio.h>

int main(){
    int contador = 1;
    int numero;
    int maior = 0;
    int menor;
    int soma = 0; 
    char resposta;
    
    do{
        printf("Escolha o %dº número da soma: ", contador);
        scanf("%d", &numero);
        soma += numero;        
        contador += 1;

        printf("Gostaria de somar mais um? ");
        scanf(" %c", &resposta);
    } while (resposta != 'n');

    printf("A soma de todos os números informados é %d\n", soma);

    return 0;
}