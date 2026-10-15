//Estruturas de Repetição FOR (para/até)
//Solicitar um número que indicará quantas vezes o usuário informará números 
//Identificar dentre esses números quantos estão no intervalo entre 0 e 10, contabilizar e apresentar o total de números que se encaixaram nessa condição
//Somar todos os impares informados e apresentar o total da soma


#include<stdio.h>

int main(){
    int vezes, numero, zeroAdez = 0, impares = 0;

    printf("Informe quantos números serão informados: ");
    scanf("%d", &vezes);

    for (int i = 0; i < vezes; i++){
        printf("Informe o número: ");
        scanf ("%d", &numero);

        if (numero >= 0 && numero <= 10){
            zeroAdez++;
        }

        if (numero % 2 == 1){
            impares += numero;
        }
    }

    printf("A quantidade de números informados entre 0 e 10 é: %d\n", zeroAdez);
    printf("A soma dos números impares informados é: %d\n", impares);


    return 0;
}