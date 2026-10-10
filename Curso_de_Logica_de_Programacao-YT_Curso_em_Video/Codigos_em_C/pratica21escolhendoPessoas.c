//Estruturas de Repetição DO/WHILE (repita/até)
//Solicitar informações (Sexo, Idade, Cor do Cabelo)
//Enquanto o usuário não escolher sair, continuar solicitando dados
//Desses dados informados:
//Identificar quantos homens tem mais de 18 anos e cabelos castanhos
//Identificar quantas mulheres tem entre 25 e 30 anos e cabelos loiros

#include<stdio.h>

int main(){
    int idade, cabelo, homensCastanhos = 0, mulheresLoiras = 0;
    char sexo, resposta;
    

    do{
        printf("|===========================|\n");
        printf("|    SELETOR DE PESSOAS     |\n");
        printf("|===========================|\n");
        printf("|Qual o sexo? [M/F]  ");
        scanf(" %c", &sexo);
        printf("|Qual a idade?  ");
        scanf("%d", &idade);
        printf("Qual a cor do cabelo?\n");
        printf("---------------------\n");
        printf("[1] Preto\n");
        printf("[2] Castanho\n");
        printf("[3] Loiro\n");
        printf("[4] Ruivo\n");
        scanf("%d", &cabelo);
        printf("\nQuer continuar? [S/N] ");
        scanf(" %c", &resposta);

        if((sexo == 'M' || sexo == 'm') && idade > 17 && cabelo == 2){
            homensCastanhos++;
        }

        if((sexo == 'F' || sexo == 'f') && (idade > 24 && idade < 31) && cabelo == 3){
            mulheresLoiras++;
        }

    } while (resposta != 'N' && resposta != 'n');

    printf("Encerrando execução...\n\n");
    printf("A quantidade de HOMENS, acima de 18 ANOS e de CABELOS CASTANHOS, informada foi: %d\n", homensCastanhos);
    printf("A quantidade de MULHERES, entre 25 e 30 ANOS e de CABELOS LOIROS, informada foi: %d\n", mulheresLoiras);

    return 0;
}