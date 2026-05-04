/**Desafio
 Você foi contratado como consultor júnior em uma empresa de Tecnologia da Informação que está modernizando seus sistemas. Seu primeiro desafio é ajudar a equipe a padronizar a identificação de projetos internos. Cada projeto recebe um nome, mas para facilitar buscas e integrações, todos os nomes devem ser convertidos para letras maiúsculas. Além disso, a equipe deseja saber quantos caracteres o nome do projeto possui, para garantir que não ultrapasse o limite permitido pelo sistema legado. Sua tarefa é criar um programa que, dado o nome de um projeto, retorne o nome em letras maiúsculas seguido do número de caracteres, separados por um espaço.

 Implemente uma solução que leia uma linha contendo o nome do projeto e produza uma linha de saída com o nome em maiúsculas e o comprimento do nome, separados por um espaço. Não utilize bibliotecas externas, apenas recursos padrão da linguagem. Considere que o nome do projeto pode conter letras, números e espaços, e nunca estará vazio.

 Entrada
 Uma única linha contendo o nome do projeto, composto por letras, números e espaços.

 Saída
 Uma única linha contendo o nome do projeto em letras maiúsculas, seguido de um espaço e do número de caracteres do nome.

 Exemplos
 A tabela abaixo apresenta exemplos de entrada e saída:

 Entrada	Saída
 intranet portal	INTRANET PORTAL 15
 cloud9	CLOUD9 6
 api v2	API V2 6
 datahub2024	DATAHUB2024 11
*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Lê a linha de entrada contendo o nome do projeto
        String nomeProjeto = scanner.nextLine();

        // TODO: Converta o nome do projeto para letras maiúsculas e calcule seu comprimento
        String nomeMaiusculo = nomeProjeto.toUpperCase();
        // Dica: Use métodos da classe String para manipular o texto.
        // Imprima o nome em maiúsculas seguido de um espaço e do número de caracteres.
        int quantiLetras = nomeProjeto.length();
        System.out.printf("%s %s", nomeMaiusculo, quantiLetras);
        scanner.close();
    }
}