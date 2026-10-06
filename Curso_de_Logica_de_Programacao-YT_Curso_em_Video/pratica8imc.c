#include <stdio.h>

int main(){
    float imc; 
    float massa;
    float altura;

    printf("Informe seu peso corporal (em quilos):\n");
    scanf("%f", &massa);
    printf("Informe sua altura (em metros):\n");
    scanf("%f", &altura);

    imc = massa / (altura * altura);

    printf("De acordo com o cálculo, seu IMC é %.2f e você está:\n", imc);

    if (imc < 17){
        printf("Muito abaixo do peso!\n");
    } else if ((imc >= 17) && (imc < 18.5)){
        printf("Abaixo do peso!\n");
    } else if ((imc >= 18.5) && (imc < 25)){
        printf("No peso ideal!\n");
    } else if ((imc >= 25) && (imc < 30)){
        printf("Com sobrepeso!\n");
    } else if ((imc >= 30) && (imc < 35)){
        printf("Com obesidade!\n");
    } else if ((imc >= 35) && (imc < 40)){
        printf("Com obesidade severa!\n");
    } else {
        printf("Com obesidade mórbida!\n");
    }

    return 0;
}