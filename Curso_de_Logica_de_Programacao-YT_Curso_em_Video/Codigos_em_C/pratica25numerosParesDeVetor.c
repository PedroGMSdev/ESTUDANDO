//Vetores
//Criar um vetor e mostrar apenas o pares

#include<stdio.h>

int main(){
    int vetor[7];

    for(int i = 0; i < 7; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Os números do VETOR são: ");

    for(int i = 0; i < 7; i++){
        printf("%d ", vetor[i]);
    }

    printf("\nOs números pares do VETOR são: ");

    for(int i = 0; i < 7; i++){
        if (vetor[i] % 2 == 0){
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}