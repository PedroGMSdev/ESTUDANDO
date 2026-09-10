
//GPTando - Mini-Missões - Fase 1 - Missão 3

import java.util.Scanner;

public class statusDoAluno {

   public static void main (String[] args){
    Scanner entrada = new Scanner (System.in);

        System.out.println("Digite sua nota final: ");
        float notaFinal = entrada.nextFloat();

        if (notaFinal <6) {
            System.out.println("Reprovado!");
        }
        else {
            System.out.println("Aprovado!");
        }
    }
}