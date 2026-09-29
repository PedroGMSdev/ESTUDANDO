//Condicionais, Operadores Lógicos, Combinação de Condições

// VERIFICAÇÃO DE ACESSO
//programa que solicite a idade e se é autorizado e dê o resultade do acesso.

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
}