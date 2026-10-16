//Vetores

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char cadeira[10][3];
    char resposta;
    char reserva[4];

    for(int i = 0; i < 10; i++){
        sprintf(cadeira[i], "B%d", i+1); //A atribuição de string no C não se faz atravéz de "=", e sim por "sprintf". Porém, diferente de "strcpy()", o "sprintf()" não precisa ser associado à biblioteca "<string.h>", pois já faz parte de <stdio.h>.
    }

    do{
        int encontrada = 0;

        for(int i = 0; i < 10; i++){
            printf("[%s] ", cadeira[i]);
        }
        printf("\n---------------------------------------------------\n");

        printf("Que cadeira gostaria de reservar: ");
        scanf("%3s", reserva); //limita a leitura de apenas 3 casas, impedindo que seja armazenada algo a mais que 3 casas.
        reserva[0] = toupper((unsigned char)reserva[0]); //aqui é usado uma função para converter para maiúcula a letra "b", para que mesmo que o usuário digite de letra minúscula, será identificado a a cadeira certa. Para que apenas o "b" seja convertido, foi informado a posição "0" (reserva[0]).
    
        for(int i = 0; i < 10; i++){
            if (strcmp(reserva, cadeira[i]) == 0){
                encontrada = 1;

                if(strcmp(cadeira[i], "--") == 0){
                    printf("Cadeira %s já reservada!\n", reserva);
                } else {
                    strcpy(cadeira[i], "--");
                    printf("Cadeira %s reservada!\n", reserva);
                }
                
                break;
            }
        }

        if(encontrada == 0){
            printf("Reserva Inválida!\n");
        }

        printf("Deseja reservar outra cadeira? [S/N] ");
        scanf(" %c", &resposta);

    } while (resposta != 'N' && resposta != 'n');

    return 0;
}