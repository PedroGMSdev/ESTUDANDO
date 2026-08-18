// DESAFIO Super Trunfo em C: Nível Novato
// Cadeira: Introdução à Programação de Computadores
// Módulo: Super Trunfo em C, Desevolvendo a Lógica do Jogo

#include <stdio.h>

int main(){
    char estado1;
    char codigoCarta1[15];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float areaKM1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigoCarta2[15];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float areaKM2;
    float pib2;
    int pontosTuristicos2;

    printf("---------------------------------------------\n");
    printf("VAMOS PARA A PRIMEIRA CARTA\n");
    printf("---------------------------------------------\n");

    printf("Informe a letra equivalente ao estado: Digite...\nA para Ceará\nB para Pernambuco\nC para Maranhão\nD para Sergipe\nE para Bahia\nF para Rio de Janeiro\nG para São Paulo\nH para Rio Grande do Sul\n");
    scanf(" %c", &estado1);

    printf("Informe o código da carta:\n");
    scanf("%s", codigoCarta1);

    printf("Informe o nome da cidade:\n");
    scanf("%s", nomeCidade1);

    printf("Informe o número de habitantes:\n");
    scanf("%lu", &populacao1);

    printf("Informe a área em km²:\n");
    scanf("%f", &areaKM1);

    printf("Informe o PIB:\n");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    printf("---------------------------------------------\n");
    printf("AGORA VAMOS PARA A SEGUNDA CARTA\n");
    printf("---------------------------------------------\n");

    printf("Informe a letra equivalente ao estado: Digite...\nA para Ceará\nB para Pernambuco\nC para Maranhão\nD para Sergipe\nE para Bahia\nF para Rio de Janeiro\nG para São Paulo\nH para Rio Grande do Sul\n");
    scanf(" %c", &estado2);

    printf("Informe o código da carta:\n");
    scanf("%s", codigoCarta2);

    printf("Informe o nome da cidade:\n");
    scanf("%s", nomeCidade2);

    printf("Informe o número de habitantes:\n");
    scanf("%lu", &populacao2);

    printf("Informe a área em km²:\n");
    scanf("%f", &areaKM2);

    printf("Informe o PIB:\n");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    float densidadePopulacional1 = populacao1 / areaKM1;
    float densidadePopulacional2 = populacao2 / areaKM2;
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;
    float superPoder1 = (float) populacao1 + areaKM1 + pib1 + pontosTuristicos1 + densidadePopulacional1 + pibPerCapita1;
    float superPoder2 = (float) populacao2 + areaKM2 + pib2 + pontosTuristicos2 + densidadePopulacional2 + pibPerCapita2;

    printf("---------------------------------------------\n");
    printf("COMPARAÇÃO DE CARTAS\n");
    printf("---------------------------------------------\n");
    printf("Atributo: POPULAÇÃO\n");
    printf("Carta 1 - %s: %lu\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", nomeCidade2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    printf("---------------------------------------------\n");
    printf("Atributo: ÁREA\n");
    printf("Carta 1 - %s: %f\n", nomeCidade1, areaKM1);
    printf("Carta 2 - %s: %f\n", nomeCidade2, areaKM2);
        if (areaKM1 > areaKM2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (areaKM2 > areaKM1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    printf("---------------------------------------------\n");
    printf("Atributo: PIB\n");
    printf("Carta 1 - %s: %f\n", nomeCidade1, pib1);
    printf("Carta 2 - %s: %f\n", nomeCidade2, pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    printf("---------------------------------------------\n");
    printf("Atributo: PONTOS TURÍSTCOS\n");
    printf("Carta 1 - %s: %d\n", nomeCidade1, pontosTuristicos1);
    printf("Carta 2 - %s: %d\n", nomeCidade2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (pontosTuristicos2 > pontosTuristicos1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    printf("---------------------------------------------\n");
    printf("Atributo: DENSIDADE POPULACINAL\n");
    printf("Carta 1 - %s: %f\n", nomeCidade1, densidadePopulacional1);
    printf("Carta 2 - %s: %f\n", nomeCidade2, densidadePopulacional2);
        if (densidadePopulacional1 < densidadePopulacional2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (densidadePopulacional2 < densidadePopulacional1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    printf("---------------------------------------------\n");
    printf("Atributo: PIB PER CAPITA\n");
    printf("Carta 1 - %s: %f\n", nomeCidade1, pibPerCapita1);
    printf("Carta 2 - %s: %f\n", nomeCidade2, pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (pibPerCapita2 > pibPerCapita1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    printf("---------------------------------------------\n");
    printf("Atributo: SUPER PODER\n");
    printf("Carta 1 - %s: %f\n", nomeCidade1, superPoder1);
    printf("Carta 2 - %s: %f\n", nomeCidade2, superPoder2);
        if (superPoder1 > superPoder2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (superPoder2 > superPoder1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }

    return 0;
}