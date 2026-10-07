//Estrutura de repetição WHILE (enquanto/faça)
//Faça um programa que receba o número de alunos que tem em uma sala
//Peça o nome e nota de cada um deles
//Mostre o melhor aluno da sala

#include<stdio.h>
#include<string.h> //biblioteca usada para trabalhar com STRINGS

int main(){
    int alunos;
    int contagem = 1;
    char aluno[10];
    char melhorAluno[10];
    float nota;
    float melhorNota = 0;

    printf("----------------------\n");
    printf("ESCOLA SANTA PACIÊNCIA\n");
    printf("----------------------\n");
    printf("Quantos alunos a turma tem? ");
    scanf("%d", &alunos);
    printf("----------------------\n");

    while(contagem <= alunos){
        printf(" ALUNO %d\n", contagem);
        printf("Nome do Aluno: ");
        scanf("%s", aluno);
        printf("Nota do Aluno: ");
        scanf("%f", &nota);
        printf("----------------------\n");

        if (nota > melhorNota){
            strcpy(melhorAluno, aluno); //"strcpy()" serve para sobrepor o valor de uma string, que não dá pra ser atribuído com "=", como normalmente.
            melhorNota = nota;
        }

        contagem++;
    }

    printf("O melhor aluno é %s com a nota %.1f", melhorAluno, melhorNota);
    
    return 0;
}