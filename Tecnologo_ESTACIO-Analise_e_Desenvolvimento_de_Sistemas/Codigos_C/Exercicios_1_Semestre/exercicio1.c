// cadastro de aluno
#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    printf("Digite sua matricula:\n");
    scanf("%d", &matricula);

    printf("Digite seu nome:\n");
    scanf("%s", nome);

    printf("--------------------------------\n");
    printf("Olá, %s!\n", nome);
    printf("Matrícula: %d\n",matricula);
    printf("Idade: %d. Altura: %.2f\n", idade, altura);
    printf("--------------------------------\n");

}