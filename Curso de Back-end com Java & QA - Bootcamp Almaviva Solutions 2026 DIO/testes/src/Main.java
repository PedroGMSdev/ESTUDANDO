
//import java.time.OffsetDateTime;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        var scanner = new Scanner(System.in);
        //ou Scanner scanner = new Scanner(System.in);

    /** MÓDULO - FUNDAMENTOS DA LINGUAGEM DE PROGRAMAÇÃO JAVA
        AULA - PADRÕES DE DESENVOLVIMENTO E CONCEITOS

        static final String MENSAGEM_INICIAL = "Olá! Informe seu nome: ";
        System.out.println(MENSAGEM_INICIAL);
        String nome = scanner.nextLine();
        System.out.println("Informe sua idade:");
        int idade = scanner.nextInt();
        System.out.println("Seja bem-vindo, " + nome + "! E sua idade é de " + idade + " anos!");
        System.out.printf("%s, %s anos é uma idade muito boa!\n", nome, idade);


        AULA - TRABALHANDO COM OPERADORES DE ATRIBUIÇÃO E LÓGICOS

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


        AULA - TRABALHANDO COM OPERADORES ARITMÉTICOS

        System.out.println("Qual operação deseja fazer?");
        var operacao = scanner.next();
        System.out.println("Informe o primeiro número:");
        var numero1 = scanner.nextInt();
        System.out.println("Informe o segundo número:");
        var numero2 = scanner.nextInt();

        if (operacao.equals("+")){
            System.out.printf("%s %s %s = %s", numero1, operacao, numero2, numero1 + numero2);
        } else if (operacao.equals("-")){
            System.out.printf("%s %s %s = %s", numero1, operacao, numero2, numero1 - numero2);
        } else if (operacao.equals("*")) {
            System.out.printf("%s %s %s = %s", numero1, operacao, numero2, numero1 * numero2);
        } else if (operacao.equals("/")) {
            System.out.printf("%s %s %s = %s", numero1, operacao, numero2, numero1 / numero2);
        } else {
            System.out.println("Operação inválida!");
        }


        EXERCÍCIOS - FUNDAMENTOS DA LINGUAGEM DE PROGRAMAÇÃO JAVA

        //EXERCÍCIO 1
            //Escreva um código que receba o nome e o ano de nascimento de alguém e imprima na tela a seguinte mensagem: "Olá 'Fulano'! Você tem 'x' anos."
                var anoBase = OffsetDateTime.now().getYear();
                System.out.println("Qual seu nome?");
                var nome = scanner.next();
                System.out.println("Em que ano você nasceu?");
                var nascidoEm = scanner.nextInt();
                var idade = anoBase - nascidoEm;
                System.out.printf("Olá, %s! Você tem %s anos.\n", nome, idade);

        //EXERCÍCIO 2
            //Escreva um código que receba o tamanho do lado de um quadrado, calcule sua área e exiba na tela.
            //fórmula: área = lado x lado
                System.out.println("Informe o tamanho do lado do quadrado:");
                var lado = scanner.nextInt();
                var area = lado * lado;
                System.out.printf("A área total do quadrado é %s.", area);

        //EXERCÍCIO 3
            //Escreca um código que receberá a base e a altura de um retângulo, calcule sua área e exiba na tela.
            //fórmula: área = base  altura
                System.out.println("Qual o tamanho da base do retângulo?");
                var base = scanner.nextInt();
                System.out.println("Qual o tamanho da altura do retângulo?");
                var altura = scanner.nextInt();
                var area = base * altura;
                System.out.printf("A área total do retângulo é %s.", area);

        //EXERCÍCIO 4
            //Escreva um código que receba o nome e a idade de 2 pessoas e imprima a diferença de idade entre elas.
                System.out.println("Olá! Qual o nome da primeira pessoa?");
                var nome1 = scanner.next();
                System.out.println("QuaL sua idade?");
                var idade1 = scanner.nextInt();
                System.out.println("E qual o nome da segunda pessoa?");
                var nome2 = scanner.next();
                System.out.println("E sua idade?");
                var idade2 = scanner.nextInt();
                var diferenca = idade1 - idade2;
                System.out.printf("%s e %s, a diferença de idade entre vocês é de %s anos.", nome1, nome2, diferenca);
     */
    /** MÓDULO - ESTRUTURAS DE CONTROLE EM JAVA

        //EXERCÍCIO 1
            //Escreva um código onde o usuário entra com um número e seja gerada a tabuada de 1 a 10 desse número.
                System.out.println("A tabuada de:");
                var numero = scanner.nextInt();
                for (var i = 1; i <= 10; i++){
                    var resultado = numero * i;
                    System.out.printf("%s x %s = %s \n", numero, i, resultado);
                }

        //EXERCÍCIO 2
            //Escreva um código onde o usuário entra com sua altura e peso, seja feito o cálculo do seu IMC e seja exibida a mensagem de acordo com seu resultado.
            //fórmula = peso / (altura * altura)
                System.out.println("Qual seu peso? (Kg)");
                var peso = scanner.nextDouble();
                System.out.println("Qual sua altura? (m)");
                var altura = scanner.nextDouble();
                var imc = peso / (altura * altura);

                if (imc <= 18){
                    System.out.println("Abaixo do peso");
                } else if (imc <25) {
                    System.out.println("Peso ideal");
                } else if (imc <30) {
                    System.out.println("Levemente acima do peso");
                } else if (imc <35) {
                    System.out.println("Obesidade Grau I");
                } else if (imc <40) {
                    System.out.println("Obesidade Grau II | Severa");
                } else {
                    System.out.println("Obesidade Grau III | Mórbida");
                }

        //EXERCÍCIO 3
            //Escreva um código que o usuário entre com um primeiro número, um segundo número
            //maior que o primeiro e escolhe entre as opções impar ou par, com isso o código
            //deve informar todos os números pares ou impares (de acordo com a seleção inicial)
            //no intervalo de números informados, incluindo os números informados e em ordem decrecente.
                System.out.println("Informe um número:");
                var num1 = scanner.nextInt();
                System.out.println("Agora escolha um número maior que este:");
                var num2 = scanner.nextInt();
                System.out.println("Impar ou par?");
                var tipo = scanner.next();

                if (tipo.equalsIgnoreCase("impar")){
                    for (int i = num2; i >= num1; i--){
                        if (i % 2 != 0){
                         System.out.println(i);
                        }
                    }
                } else if (tipo.equalsIgnoreCase("par")){
                    for (int i = num2; i >= num1; i--){
                        if (i % 2 == 0){
                            System.out.println(i);
                        }
                    }
                } else {
                    System.out.println("Operação Inválida");
                }

        //EXERCÍCIO 4
            //Escreva um código onde o usuário informe um número inicial, posteriormente irá informar
            //outros N números, a execução do código irá continuar até que o número informado dividido
            //pelo número tenha resto diferente de 0 na divisão, números menores que o primeiro número
            //devem ser ignorados.
                System.out.println("Informe o número inicial:");
                int numeroInicial = scanner.nextInt();

                int numero;

                 do {
                      System.out.println("Informe um número:");
                      numero = scanner.nextInt();

                      if (numero < numeroInicial) {
                            System.out.println("Número ignorado (menor que o inicial)");
                      }

                 } while (numero < numeroInicial || numero % numeroInicial == 0);

        */

    /** MÓDULO - ABSTRAÇÃO COM CLASSE E ENCAPSULAMENTO*/

        //AULA - CRIANDO UMA CLASSE
            var homem = new Pessoa();
            homem.nome = "Pedro";
            homem.idade = 35;

            var mulher = new Pessoa();
            mulher.nome = "Thatiany";
            mulher.idade = 37;

            System.out.printf("O homem se chama %s e a mulher %s, de idades %s e %s anos.", homem.nome, mulher.nome, homem.idade, mulher.idade);
    }
}