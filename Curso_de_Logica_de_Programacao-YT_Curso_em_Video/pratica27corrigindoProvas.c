//Vetores
//Cadastrar o gabarito de uma prova de 5 questões

#include<stdio.h>

int main(){
    char resposta[5][1];

    printf("PASSO 1 - Cadastrar Gabarito\n");
    printf("----------------------------\n");

    for(int i = 0; i < 5; i++){
        printf("Informe a alternativa correta da %dª questão: ", i+1);
        scanf(" %c", resposta[i]);
    }

    printf("----------------------------\n");
    printf("ALUNO 1");
    printf("----------------------------\n");


    return 0;
}