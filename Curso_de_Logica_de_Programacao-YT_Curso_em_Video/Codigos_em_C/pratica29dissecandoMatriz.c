//Matrizes
//Receber uma matriz 4 x 4
//Dar a opção de escolha do que será exibido
//Mostrar a opção escolhida

#include<stdio.h>

int main(){
    int matriz[4][4];
    int opcao;        

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o valor [%d,%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    do{
        printf("\nMENU DE OPÇÕES\n");
        printf("===================\n");
        printf("[1] Mostrar a Matriz\n");
        printf("[2] Diagonal Principal\n");
        printf("[3] Triangulo Superior\n");
        printf("[4] Triangulo Inferior\n");
        printf("[5] Sair\n");
        printf("===================\n");
        printf("OPÇÃO: ");
        scanf("%d", &opcao);
        printf("===================\n");

        switch (opcao){
            case 1:
                for(int i = 0; i < 4; i++){
                    for(int j = 0; j < 4; j++){
                        printf("%3d ", matriz[i][j]);
                    }
                    printf("\n");
                }
            break;
            case 2:
                for(int i = 0; i < 4; i++){
                    for(int j = 0; j < 4; j++){
                        if (i == j){
                            printf("%3d ", matriz[i][j]);
                        } else { //Aplicando esse "else" na condição, quando for imprimir a matriz, no lugar de imprimir só as informadas, será impresso o espaço, mantendo a ordem da matriz, sem os números indesejados.
                            printf("    ");
                        }
                    }
                    printf("\n");
                }
            break;
            case 3:
                for(int i = 0; i < 4; i++){
                    for(int j = 0; j < 4; j++){
                        if (i < j){
                            printf("%3d ", matriz[i][j]);
                        } else {
                            printf("    ");
                        }
                    }
                    printf("\n");
                }
            break;
            case 4:
                for(int i = 0; i < 4; i++){
                    for(int j = 0; j < 4; j++){
                        if (i > j){
                            printf("%3d ", matriz[i][j]);
                        } else {
                            printf("    ");
                        }
                    }
                    printf("\n");
                }
            break;
            case 5:
                printf("Encerrando execução...");
            break;
            default:
                printf("\nOpção Inválida!\n");

        }


    } while (opcao != 5);

    return 0;
}