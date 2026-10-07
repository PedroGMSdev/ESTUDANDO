//Estrutura de repetição WHILE (enquanto/faça)

#include<stdio.h>

int main(){
    int contador = 1;
    int numero;
    int maior = 0;
    int menor;
    int soma = 0; 
    
    while(contador <= 10){
        printf("Escolha o %dº número da soma: ", contador);
        scanf("%d", &numero);

        if (numero > maior){ //faz com que a cada número digitado o programa verifique se é maior que o guardado, e se não for, salva.
            maior = numero;
        }
        
        if (numero < menor){
            menor = numero;
        }

        soma += numero;

        printf("A soma está em: %d\n", soma);
        
        contador += 1;
    }

    printf("A soma de todos os números informados é %d\n", soma);
    printf("O maior número informado foi %d\n", maior);
    printf("O menor número informado foi %d", menor);

    return 0;
}