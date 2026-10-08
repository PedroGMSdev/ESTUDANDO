//Estruturas de Repetição DO/WHILE (repita/até)

#include<stdio.h>

int main(){
    int contador;
    int numero; 
    int fatorial = 1; 

    printf("Digite um número: ");
    scanf("%d", &numero);

    contador = numero;

    do{
        fatorial = fatorial * contador;
        contador--;
    } while (contador > 1);

    printf("%d! = %d\n", numero, fatorial);
    

    return 0;
}