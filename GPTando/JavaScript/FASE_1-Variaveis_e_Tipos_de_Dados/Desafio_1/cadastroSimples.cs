
//GPTando - Mini-Missões - Fase 1 - Missão 1

using System;

class CadastroSimples {
    static void Main (){
        Console.Write ("Digite seu nome: ");
        string nome = Console.ReadLine();
        
        Console.Write ("Digite sua idade: ");
        int idade = int.Parse(Console.ReadLine()); //colocar o int.Parse() faz converter o resultado digitado em inteiro e voltar como uma string, já que o Console.ReadLine volta sempre uma string, então sem ele, daria erro se o usuário escrevesse um inteiro. Assim, dá erro se ele não escrever um inteiro.
        
        Console.Write ("Olá, " + nome + "! Você tem " + idade + " anos.");
    }
}