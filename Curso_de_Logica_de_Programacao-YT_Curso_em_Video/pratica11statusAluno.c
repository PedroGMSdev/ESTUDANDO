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

    if (media >= 9){
        printf(" CLASSIFICAÇÃO: A \n");
    } else if (media >= 8){
        printf(" CLASSIFICAÇÃO: B \n");
    } else if (media >= 7){
        printf(" CLASSIFICAÇÃO: C \n");
    } else if (media >= 6){
        printf(" CLASSIFICAÇÃO: D \n");
    } else if (media >= 5){
        printf(" CLASSIFICAÇÃO: E \n");
    } else {
        printf(" CLASSIFICAÇÃO: F \n");
    }

    printf("--------------------------\n");

    return 0;
}