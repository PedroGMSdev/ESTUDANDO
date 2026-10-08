#include <stdio.h>

int main(){
    float valor;
    float imposto;

    printf("Quanto de compras você fez?\n");
    scanf("%f", &valor);

    imposto = valor * 60 / 100;
    printf("Desses %.2f reais de compras, você pagará %.2f reais a mais de imposto.\n", valor, imposto);

    return 0;
}