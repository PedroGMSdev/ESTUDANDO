//Como MODIFICAR uma matriz
#include<stdio.h>

int main(){
    int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    //Percorrer matriz
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            //Condição: se o elemento identificado for maior que 5, torna-se negativo
            if (matriz[i][j] > 5){
                matriz[i][j] = -matriz[i][j];
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//Nesse exemplo, foi feito a modificação apenas negativando todos os valores da matriz que fossem maior que 5.