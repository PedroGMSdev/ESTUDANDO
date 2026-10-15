//Vetores
//Cadastrar o gabarito de uma prova de 5 questões
//Receber nome do aluno e sua nota
//Exibir cada aluno e sua nota de acordo com o gabarito informado
//Cada questão certa vale 2 pontos
//Mostrar média de nota entre todos os alunos

#include<stdio.h>

int main(){
    char gabarito[5];
    char resposta[5];
    char aluno[5][12];
    float pontuacao[5] = {0, 0, 0, 0, 0};
    float nota[5];
    float media;

    printf("----------------------------\n");
    printf("PASSO 1 - Cadastrar Gabarito\n");
    printf("----------------------------\n");

    //receber gabarito
    for(int i = 0; i < 5; i++){
        printf("Informe a alternativa correta da %dª questão: ", i+1);
        scanf(" %c", &gabarito[i]);
    }

    printf("\n");
    printf("----------------------------\n");
    printf("PASSO 2 - Informar Notas dos Alunos\n");
    printf("----------------------------\n");
    printf("\n");

    //receber cada aluno e notas
    for(int i = 0; i < 5; i++){
        printf("----------------------------\n");
        printf("ALUNO %d \n", i+1);
        printf("----------------------------\n");
        printf("Nome: ");
        scanf(" %s", aluno[i]);
        printf("RESPOSTAS DADAS\n");
        printf("Questão 1: ");
        scanf(" %c", &resposta[0]);
        printf("Questão 2: ");
        scanf(" %c", &resposta[1]);
        printf("Questão 3: ");
        scanf(" %c", &resposta[2]);
        printf("Questão 4: ");
        scanf(" %c", &resposta[3]);
        printf("Questão 5: ");
        scanf(" %c", &resposta[4]);

        for (int j = 0; j < 5; j++){
            if (resposta[j] == gabarito [j]){
                pontuacao[i]++;
            }
        }

        media += pontuacao[i];

    }

    printf("\n\n\n");
    printf("----------------------------\n");
    printf("PASSO 3 - Notas Finais\n");
    printf("----------------------------\n");
    for(int i = 0; i < 5; i++){
        printf("aluno = %s       nota = %.1f\n", aluno[i], (pontuacao[i]*2.0));
    }

    media = (media * 2.0) / 5.0;

    printf("----------------------------\n");
    printf("Média da Turma: %.1f\n", media);


    return 0;
}