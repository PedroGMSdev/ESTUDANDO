
//GPTando - Mini-Missões - Fase 1 - Missão 2

using System;
using System.Globalization; //necessário para o CultureInfo reconhecer a moeda do país

class CadastroSimples{
    static void Main(){

        Console.Write ("Digite seu salário mensal: ");
        string input = Console.ReadLine ();
        input = input.Replace (",", ".");
        double salarioMensal = double.Parse (input);

        Console.Write ("Digite quantidade de meses trabalhados: ");
        int mesesTrabalhados = int.Parse (Console.ReadLine ());

        double salarioTotal = salarioMensal * mesesTrabalhados;

        //Console.Write ("Seu salário total, nesses " + mesesTrabalhados + " meses, é de " + salarioTotal + ".");
        
        //pode adicionar ToString para dar o modelo de moeda
        Console.Write ("Seu salário total, nesses " + mesesTrabalhados + " meses, é de " + salarioTotal.ToString("C", new CultureInfo ("pt-BR")) + ".");

        //Outra opção é usar interpolação:
        //Console.Write ($"Seu salário total, nesses {mesesTrabalhados} meses, é de {salarioTotal}.");
        //assim como em JavaScript, adicionar $ e trocar as aspas das strings e "+", por apenas uma apas dupla na abertura e no fechamento
        
        //ou adicionar C na interpolação para dar o modelo moeda
        //Console.Write ($"Seu salário total, nesses {mesesTrabalhados} meses, é de {salarioTotal("C", new CultureInfo ("pt-BR"))}.");


    }

}


