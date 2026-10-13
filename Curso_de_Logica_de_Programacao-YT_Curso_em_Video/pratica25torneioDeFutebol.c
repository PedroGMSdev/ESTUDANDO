//Vetores
//Receber o nome de 3 times

#include<stdio.h>

int main(){
    char times[3][15];

    printf("---------------------\n");
    printf("CAMPEONATO DE FUTEBOL\n");
    printf("---------------------\n");

    for(int i = 0; i < 3; i++){
        printf("Nome do [%d]º time: ", i+1);
        scanf(" %s", &times[i]);
    }    

    printf("---------------------\n");
    printf(" TABELA DE PARTIDAS  \n");
    printf("---------------------\n");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i != j){
                printf("%s [ ] X [ ] %s\n", times[i], times[j]);
            }
        }
    }

    return 0;
}