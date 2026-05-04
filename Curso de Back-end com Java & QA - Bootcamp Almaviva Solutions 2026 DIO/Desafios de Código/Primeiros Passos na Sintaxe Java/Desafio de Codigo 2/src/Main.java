/**Desafio
 Você foi contratado como consultor júnior em uma empresa de Tecnologia da Informação que está modernizando seus sistemas. Seu primeiro desafio é ajudar a equipe a padronizar nomes de projetos, que chegam em diferentes formatos e estilos. Para garantir a organização dos arquivos, todos os nomes de projetos devem ser convertidos para letras maiúsculas. Além disso, se o nome do projeto estiver vazio ou contiver apenas espaços, você deve alertar a equipe informando que o nome é inválido. Sua tarefa é criar um programa que receba o nome de um projeto e retorne o nome em letras maiúsculas, ou a mensagem "INVALIDO" caso o nome seja vazio ou apenas espaços.

 Implemente uma solução simples, sem o uso de bibliotecas externas, que leia uma linha contendo o nome do projeto e produza a saída conforme as regras acima. Certifique-se de tratar corretamente casos em que o nome está em branco ou contém apenas espaços.

 Entrada
 Uma única linha contendo o nome do projeto, que pode conter letras, números, espaços e caracteres especiais. O nome pode estar vazio ou conter apenas espaços.

 Saída
 Se o nome do projeto for válido, imprima o nome em letras maiúsculas. Caso contrário, imprima a palavra "INVALIDO".

 Exemplos
 A tabela abaixo apresenta exemplos de entrada e saída:

 Entrada	Saída
 intranet2024	INTRANET2024
 sistema financeiro	SISTEMA FINANCEIRO
 devOps pipeline	DEVOPS PIPELINE
 Cloud-API	CLOUD-API
 */

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String nomeProjeto = scanner.nextLine();

        // TODO: Remova espaços extras do início e fim da string
        String semEspacos = nomeProjeto.trim();
        // Dica: Use um método da classe String para eliminar espaços em branco antes de validar
        if (semEspacos.isEmpty()) {
            System.out.println("INVALIDO");
        } else {
            System.out.println(nomeProjeto.toUpperCase());
        }

        // Se o nome está vazio após o tratamento, imprima "INVALIDO"
        // Caso contrário, imprima o nome em letras maiúsculas
        scanner.close();
    }
}