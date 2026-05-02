
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        var scanner = new Scanner(System.in);
        //ou Scanner scanner = new Scanner(System.in);

    // MÓDULO - FUNDAMENTOS DA LINGUAGEM DE PROGRAMAÇÃO JAVA
        /** AULA - PADRÕES DE DESENVOLVIMENTO E CONCEITOS

        static final String MENSAGEM_INICIAL = "Olá! Informe seu nome: ";
        System.out.println(MENSAGEM_INICIAL);
        String nome = scanner.nextLine();
        System.out.println("Informe sua idade:");
        int idade = scanner.nextInt();
        System.out.println("Seja bem-vindo, " + nome + "! E sua idade é de " + idade + " anos!");
        System.out.printf("%s, %s anos é uma idade muito boa!\n", nome, idade);

         */
        /** AULA - TRABALHANDO COM OPERADORES DE ATRIBUIÇÃO E LÓGICOS

        System.out.println("Quanto é 2 + 2?");
        // o usuário informa o resultado
        var resultado = scanner.nextInt();
        // vê se o resultado informado é igual ao valor certo
        var correto = resultado == 4;
        // informa o resultado final
        System.out.printf("A resposta certa é 4. Você acertou? (%s)\n\n", correto);

         ----

        System.out.println("Quantos anos você tem?");
        var idade = scanner.nextInt();
        if (idade >= 18){
            System.out.println("Ótimo, você já pode dirigir!");
        } else {
            System.out.println("Que pena! Você não pode dirigir ainda.");
        }

         */
        // AULA - TRABALHANDO COM OPERADORES ARITMÉTICOS
    }

}