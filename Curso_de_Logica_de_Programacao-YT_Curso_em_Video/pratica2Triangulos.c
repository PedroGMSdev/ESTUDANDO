#include <stdio.h>

int main(){
    float lado1, lado2, lado3;
    int triangulo, equilatero, isosceles, escaleno;

    printf("Informe o primeiro número: \n");
    scanf("%f", &lado1);

    printf("Informe o segundo número: \n");
    scanf("%f", &lado2);

    printf("Informe o terceiro número: \n");
    scanf("%f", &lado3);

    equilatero = (lado1 == lado2) && (lado2 == lado3);
    escaleno = (lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3);
    isosceles = ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3)) && !equilatero;

    triangulo = (lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado2 + lado1);

    printf("O triângulo é EQUILÁTERO? %d\n", equilatero);
    printf("O triângulo é ESCALENO? %d\n", escaleno);
    printf("O triângulo é ISÓSCELES? %d\n", isosceles);
    printf("\n");
    printf("Ele é um triângulo real? %d\n", triangulo);

    return 0;
}