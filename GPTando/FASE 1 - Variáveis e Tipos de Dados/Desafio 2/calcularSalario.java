
//GPTando - Mini-Missões - Fase 1 - Missão 2

import java.util.Scanner;

public class CalcularSalario {
    public static void main (String[] args){ //NÃO ESQUECER que o [] é junto ao STRING e não ao ARGS
        Scanner entrada = new Scanner (System.in);

        System.out.println ("Digite seu salário mensal: ");
        String input = entrada.nextLine ();//vai ler a entrada acima como uma String
        input = input.replace(",", "."); //vai pegar a String que o usuário informou e, caso tenha colocado a vírgula, ler como ponto
        double salarioMensal = Double.parseDouble (input); //vai pegar a String informada acima e transformar em um número real

        System.out.println ("Digite quantidade de meses trabalhados: ");
        int mesesTrabalhados = Integer.parseInt (entrada.nextLine ());

        double salarioTotal = salarioMensal * mesesTrabalhados;

        System.out.println ("Seu salário total, nesses " + mesesTrabalhados + " meses, é de " + salarioTotal + "." );
    }

}
