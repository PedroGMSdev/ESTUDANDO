//Estruturas de Repetição DO/WHILE (repita/até)

#include<stdio.h>

int main(){
    int resposta;
    int contador;

    do{
        printf("|===============|\n");
        printf("|    M E N U    |\n");
        printf("|===============|\n");
        printf("| [1] De 1 a 10 |\n");
        printf("| [2] De 10 a 1 |\n");
        printf("| [3] Sair      |\n");
        printf("|===============|\n");
        scanf("%d", &resposta);

        switch (resposta){
            case 1:
                contador = 1;
                while(contador <= 10){
                    printf("%d ", contador);
                    contador++;
                }
            break;
            case 2:
                contador = 10;
                while(contador >= 1){
                    printf("%d ", contador);
                    contador--;
                }
            break;
            case 3:
                printf("Encerrando execução...");
            break;
            default:
                printf("Escolha uma opção válida!");
        }
        printf("\n");
    } while (resposta != 3);

    return 0;
}