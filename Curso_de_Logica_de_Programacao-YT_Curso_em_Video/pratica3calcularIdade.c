#include <stdio.h>

int main (){
    int ano_nasc;
    int ano_atual;
    int idade;

    printf("Informe o ano de nascimento:\n");
    scanf("%d", &ano_nasc);

    printf("Informe o ano atual:\n");
    scanf("%d", &ano_atual);

    idade = ano_atual - ano_nasc;

    printf("Sua idade é %d anos.\n", idade);

    return 0;

}