//Estruturas de Repetição DO/WHILE (repita/até)

#include<stdio.h>

int main(){
    int contador = 1;
    int numero; 
    int negativos = 0; 

    do{
        printf("Digite um número: ");
        scanf("%d", &numero);
        if (numero < 0){
            negativos++;
        }
        contador++;
    } while (contador <= 5);

    printf("Você informou %d números negativos.\n", negativos);
    

    return 0;
}