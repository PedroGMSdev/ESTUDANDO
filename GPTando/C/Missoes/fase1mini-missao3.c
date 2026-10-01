//Loops de Repetição

//CONTADOR DE TREINAMENTO
//imule um treinamento de personagem.
//O programa deve:
//1. Começar com uma variável (int experiencia = 0;)
//2. Usar um for para realizar 5 treinamentos.
//3. A cada treinamento, acrescentar 20 pontos de experiência.
//4. Mostrar

#include <stdio.h>

int main(){
    int experiencia = 0;

    for (int i = 1; i <= 5; i++){
        experiencia += 20;
        printf("Treinamento %d concluído!\n", i);
        if (i == 5){
            printf("Experiência final: %d\n", experiencia);
        } else{
            printf("Experiência: %d\n", experiencia);
        }
    }

    return 0;
}