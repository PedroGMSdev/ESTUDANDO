// DESAFIO Super Trunfo em C: Nível Mestre
// Cadeira: Introdução à Programação de Computadores
// Módulo: Super Trunfo em C, Fundamentos e Técnicas Avançadas

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
    printf("Dados da carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", areaKM1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB Per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("---------------------------------------------\n");
    printf("Dados da carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaKM2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB Per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("---------------------------------------------\n");
    printf("COMPARAÇÃO DAS CARTAS\n");
    printf("Resultado 1 = Vitória Carta 1\n");
    printf("Resultado 0 = Vitória Carta 2\n");
    printf("---------------------------------------------\n");
    printf("População: %lu\n", populacao1 > populacao2);
    printf("Área: %.2f\n", areaKM1 > areaKM2);
    printf("PIB: %.2f\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1 > densidadePopulacional2);
    printf("PIB Per Capita: %.2f\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder1 > superPoder2);



    return 0;
}