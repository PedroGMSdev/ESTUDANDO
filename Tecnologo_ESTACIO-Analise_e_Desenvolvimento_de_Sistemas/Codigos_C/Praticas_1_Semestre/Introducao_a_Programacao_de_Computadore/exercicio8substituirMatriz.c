//Como SUBSTITUIR valor de uma matriz
#include<stdio.h>

int main(){
    int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    //Variáveis criadas para contagem
    int impares = 0, pares = 0;

    //Percorrer matriz
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            //Condição: identifica se o número encontrado é múltiplo de 3.
            if (matriz[i][j] % 3 == 0){
                //Serão substituídos pelo valor de "-1".
                matriz[i][j] = -1;
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//Neste exemplo, como no MODIFICADOR, ao encontrar a condição indicada o valor é trocado por outro.