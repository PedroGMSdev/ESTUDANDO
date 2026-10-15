//Estruturas de Repetição FOR (para/até)
//Inicia em 0, depois 1, e a partir do terceiro número, os números seguem uma sequencia onde o próximo
//número é a soma do número anterior com o SEU número anterior.

#include<stdio.h>

int main(){
    int numero1 = 0;
    int numero2 = 1;
    int soma = 0;
    
    printf("%d %d ", numero1, numero2);

    for (int i = 0; i < 15; i++){
        soma = numero2 + numero1;   
        printf("%d " , soma);
        numero1 = numero2;
        numero2 = soma;

    }


    return 0;
}