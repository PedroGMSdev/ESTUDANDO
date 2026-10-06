#include <stdio.h>

int main(){
    printf("--------------------------\n");
    printf(" ESCOLA JAVALI CANSADO \n");
    printf("--------------------------\n");

    float nota1, nota2, media;

    printf("Primeira Nota: ");
    scanf("%f", &nota1);
    printf("Segunda Nota: ");
    scanf("%f", &nota2);

    printf("--------------------------\n");

    media = (nota1 + nota2) / 2;

    printf(" MEDIA: %.1f \n", media);

    if (media >= 7){
        printf(" ALUNO APROVADO \n");
    } else {
        printf(" ALUNO REPROVADO \n");
    }

    printf("--------------------------\n");

    return 0;
}