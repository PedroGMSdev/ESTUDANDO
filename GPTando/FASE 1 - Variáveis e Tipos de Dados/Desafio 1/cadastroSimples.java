
//GPTando - Mini-Missões - Fase 1 - Missão 1

import java.util.Scanner;

public class CadastroSimples {
    public static void main (String[] args){
       Scanner entrada = new Scanner (System.in);
       
       System.out.print ("Digite seu nome: ");
       String nome = entrada.nextLine();
       
       System.out.print ("Digite sua idade: ");
       String idade = entrada.nextLine();
       
       System.out.println ("Olá, " + nome + "! Você tem " + idade + " anos.");
    }
}
