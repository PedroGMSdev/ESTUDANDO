//Vetores

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char cadeira[10][3];
    char resposta;
    char reserva[3];

    for(int i = 0; i < 10; i++){
        sprintf(cadeira[i], "B%d", i+1); //A atribuição de string no C não se faz atravéz de "=", e sim por "sprintf". Porém, diferente de "strcpy()", o "sprintf()" não precisa ser associado à biblioteca "<string.h>", pois já faz parte de <stdio.h>.
    }

    do{
        for(int i = 0; i < 10; i++){
            printf("[%s] ", cadeira[i]);
        }
        printf("\n---------------------------------------------------\n");

        printf("Que cadeira gostaria de reservar: ");
        scanf("%3s", reserva); //limita a leitura de apenas 3 casas, impedindo que seja armazenada algo a mais que 3 casas.
        reserva[3] = toupper((unsigned char)reserva[3]);
        printf("Cadeira %s reservada!\n", reserva);

        for(int i = 0; i < 10; i++){
            if (strcmp(reserva, cadeira[i]) == 0){
                strcpy(cadeira[i], "--");
            }
        }

        printf("Deseja reservar outra cadeira? [S/N]");
        scanf(" %c", &resposta);

    } while (resposta != 'N' && resposta != 'n');

    return 0;
}