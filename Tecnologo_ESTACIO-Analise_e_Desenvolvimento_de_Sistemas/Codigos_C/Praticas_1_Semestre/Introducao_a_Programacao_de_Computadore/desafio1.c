// DESAFIO Super Trunfo em C: Nível Novato
// Cadeira: Introdução à Programação de Computadores
// Módulo: Super Trunfo em C, Fundamentos e Técnicas Avançadas

#include <stdio.h>

int main(){
    char estado1;
    char codigoCarta1[15];
    char nomeCidade1[50];
    int populacao1;
    float areaKM1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigoCarta2[15];
    char nomeCidade2[50];
    int populacao2;
    float areaKM2;
    float pib2;
    int pontosTuristicos2;

    printf("VAMOS PARA A PRIMEIRA CARTA\n");
    printf("---------------------------------------------\n");

    printf("Informe o estado: (A a H)\n");
    scanf(" %c", &estado1);

    printf("Informe o código da carta:\n");
    scanf("%s", codigoCarta1);

    printf("Informe o nome da cidade:\n");
    scanf("%s", nomeCidade1);

    printf("Informe o número de habitantes:\n");
    scanf("%d", &populacao1);

    printf("Informe a área em km²:\n");
    scanf("%f", &areaKM1);

    printf("Informe o PIB:\n");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    printf("AGORA VAMOS PARA A SEGUNDA CARTA\n");
    printf("---------------------------------------------\n");

    printf("Informe o estado: (A a H)\n");
    scanf(" %c", &estado2);

    printf("Informe o código da carta:\n");
    scanf("%s", codigoCarta2);

    printf("Informe o nome da cidade:\n");
    scanf("%s", nomeCidade2);

    printf("Informe o número de habitantes:\n");
    scanf("%d", &populacao2);

    printf("Informe a área em km²:\n");
    scanf("%f", &areaKM2);

    printf("Informe o PIB:\n");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    printf("---------------------------------------------\n");
    printf("Dados da carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areaKM1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("---------------------------------------------\n");
    printf("Dados da carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaKM2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);


    return 0;
}