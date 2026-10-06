#include <stdio.h>

int main(){
    printf("--------------------------\n");
    printf(" DEPARTAMENTO DE TRÂNSITO \n");
    printf("--------------------------\n");

    int ano_atual;
    int ano_nasc;

    printf("Ano atual (yyyy): ");
    scanf("%d", &ano_atual);
    printf("Ano de Nascimento (yyyy): ");
    scanf("%d", &ano_nasc);

    int idade = ano_atual - ano_nasc;

    printf("-------- STATUS ----------\n");
    printf(" IDADE: %d ANOS\n", idade);
    
    if (idade >= 18){
        printf("APTO A TIRAR A CARTEIRA\n");
    } else {
        printf("INAPTO A TIRAR A CARTEIRA\n");
    }

    printf("--------------------------");

    return 0;
}