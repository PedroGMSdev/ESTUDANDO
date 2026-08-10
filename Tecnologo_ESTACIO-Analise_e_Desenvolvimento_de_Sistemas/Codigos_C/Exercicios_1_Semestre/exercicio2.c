//média de notas
#include <stdio.h>

int main(){
    float nota1, nota2;

    printf("Olá! Vamos calcular sua média.\n");
    printf("-------------------------------------\n");
    printf("Informe a primeira nota:\n");
    scanf("%f", &nota1); //ATENÇÃO!!!! Não esquecer de colocar o & para que seja captado o valor.
    printf("Agora, informe a segunda nota:\n");
    scanf("%f", &nota2);

    float media = (nota1+nota2)/2; //se colocar antes de ser informada dá erro.

    printf("-------------------------------------\n");
    printf("Sua média é: %.1f", media);

    return 0;
}