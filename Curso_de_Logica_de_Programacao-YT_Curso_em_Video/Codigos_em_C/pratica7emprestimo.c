#include <stdio.h>

int main(){
    float emprestado;
    float ajustado;
    int parcelas;
    float parcelado;

    printf("Qual valor deseja?\n");
    scanf("%f", &emprestado);
    printf("Em quantas parcelas quer pagar?\n");
    scanf("%d", &parcelas);
    
    ajustado = emprestado + (emprestado * 20 / 100);
    parcelado = ajustado / parcelas;

    printf("Você receberá %.2f reais, e pagará %.2f reais em %d parcelas de %.2f reais.\n", emprestado, ajustado, parcelas, parcelado);

    return 0;
}