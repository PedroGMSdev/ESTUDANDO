//Condicionais, Operadores Lógicos, Combinação de Condições

// VERIFICAÇÃO DE ACESSO
//programa que solicite a idade e se é autorizado e dê o resultade do acesso.

//RESOLUÇÃO COM VALIDAÇÃO QUE IMPEDE IDADE NEGATIVA E AUTORIZAÇÃO QUE NÃO SEJA 0 OU 1
#include <stdio.h>

int main(){
    int idade;
    int autorizado;

    printf("Olá, usuário!\n Informe sua idade: \n");
    scanf("%d", &idade);
    if (idade <= 0){
        printf("Idade inválida!");
    } else if (idade < 18) {
        printf("Acesso Negado! Menor de Idade.");
    } else {
        printf("Você possui autorização?\n Digite:\n 0 - NÃO\n 1 - SIM\n ");
        scanf("%d", &autorizado);

        if (autorizado != 0 && autorizado != 1){
            printf("Autorização Inválida!");
        } else if (autorizado == 1){
            printf("Acesso Autorizado!");
        } else {
            printf("Acesso Negado!");
        }
    }

    return 0;
}
/*RESOLUÇÃO SIMPLES
#include <stdio.h>

int main(){
    int idade;
    int autorizado;

    printf("Olá, usuário!\n Informe sua idade: \n");
    scanf("%d", &idade);
    printf("Você possui autorização?\n Digite:\n 0 - NÃO\n 1 - SIM\n ");
    scanf("%d", &autorizado);

    if (idade >=18 && autorizado){
        printf("Acesso Autorizado!");
    } else {
        printf("Acesso Negado!");
    }

    return 0;
}*/