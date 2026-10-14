//Vetores
//Cadastrar o gabarito de uma prova de 5 questões
//Receber nome do aluno e sua nota
//Exibir cada aluno e sua nota de acordo com o gabarito informado
//Cada questão certa vale 2 pontos
//Mostrar média de nota entre todos os alunos

#include<stdio.h>

int main(){
    char gabarito[5][1];
    char resposta[5][1];
    char aluno[5][12];
    int pontuacao[5];
    float nota;

    printf("PASSO 1 - Cadastrar Gabarito\n");
    printf("----------------------------\n");

    //receber gabarito
    for(int i = 0; i < 5; i++){
        printf("Informe a alternativa correta da %dª questão: ", i+1);
        scanf(" %c", gabarito[i]);
    }

    //receber cada aluno e notas
    for(int i = 0; i < 5; i++){
        printf("----------------------------\n");
        printf("ALUNO %d ", i+1);
        printf("----------------------------\n");
        printf("Nome: ")
    }

    


    return 0;
}