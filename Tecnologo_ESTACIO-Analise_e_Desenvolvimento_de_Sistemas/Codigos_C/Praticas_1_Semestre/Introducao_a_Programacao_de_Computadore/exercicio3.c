//cadastro de produtos
#include <stdio.h>

int main() {
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;
    float valorA = 10.50;
    float valorB = 20.40;
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;
    double valorTotalA = estoqueA * valorA;
    double valorTotalB = estoqueB * valorB;
    int compararEstoqueA = estoqueA > estoqueMinimoA;
    int compararEstoqueB = estoqueB > estoqueMinimoB;

    printf("Produto %s tem estoque de %u e o valor unitário é de R$ %.2f.\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque de %u e o valor unitário é de R$ %.2f.\n", produtoB, estoqueB, valorB);

    printf("O produto %s tem estoque mínimo? %d\n", produtoA, compararEstoqueA);
    printf("O produto %s tem estoque mínimo? %d\n", produtoB, compararEstoqueB);

}