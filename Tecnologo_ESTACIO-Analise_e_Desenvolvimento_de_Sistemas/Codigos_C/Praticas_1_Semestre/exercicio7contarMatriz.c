//Como CONTAR uma matriz
#include<stdio.h>

int main(){
    int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    //Variáveis criadas para contagem
    int impares = 0, pares = 0;

    //Percorrer matriz
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            //Condição: identifica se o número encontrado é par ou impar.
            if (matriz[i][j] % 2 == 0){
                pares++;
            } else{
                impares++;
            }
        }
    }
    //Imprime as quantidade de pares e impares
    printf("A matriz possui %d números impares e %d números pares.", impares, pares);
    return 0;
}

//Neste exemplo, foi percorrido a matriz e usado a condição para contar os pares e impares e exibí-los.