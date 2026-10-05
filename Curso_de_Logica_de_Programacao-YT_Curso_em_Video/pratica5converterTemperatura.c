#include <stdio.h>

int main(){
    float celsius;
    float fahrenheit;

    printf("Quantos Fahrenheit está a temperatura agora?\n");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32)/1.8;

    printf("%.2f graus Fahrenheit equivalem à %.2f graus Celsius.\n", fahrenheit, celsius);

    return 0;
}