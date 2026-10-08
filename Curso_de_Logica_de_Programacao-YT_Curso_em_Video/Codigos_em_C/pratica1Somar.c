# include <stdio.h>

int main(){
    int numero1, numero2, soma;

    printf("Escolha um número: \n");
    scanf("%d", &numero1);

    printf("Escolha outro número: \n");
    scanf("%d", &numero2);
    
    soma = numero1 + numero2;

    printf("A soma entre %d e %d é: %d", numero1, numero2, soma);

    return 0;
}