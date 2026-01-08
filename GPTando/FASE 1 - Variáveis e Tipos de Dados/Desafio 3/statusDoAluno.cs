
//GPTando - Mini-Missões - Fase 1 - Missão 3

using System;

class StatusDoAluno {
    static void Main() {
        Console.Write ("Digite sua nota final: ");
        double notaFinal = double.Parse(Console.ReadLine());

        if (notaFinal< 6) {
            Console.Write("Reprovado!");
        }
        else {
            Console.Write("Aprovado!");
        }
    }
}