#include <stdio.h>

int main(){
    float real;
    float dolar;

    printf("Informe quantos reais você quer converter:\n");
    scanf("%f", &real);

    dolar = real / 5.14;

    printf("Seus %.2f reais valem %.2f dolares.\n", real, dolar);

    return 0;
}