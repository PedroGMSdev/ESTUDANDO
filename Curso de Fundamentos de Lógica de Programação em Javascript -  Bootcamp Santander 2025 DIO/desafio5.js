// Desafios JavaScript na DIO têm funções "gets" e "print" acessíveis globalmente:
//- "gets" : lê UMA linha com dado(s) de entrada (inputs) do usuário;
//- "print": imprime um texto de saída (output), pulando linha.

//Entrada:
// 3
// 5
// 3
// 0

// Para exectar no WEB (PLAYCODE) usar:
//const n = parseInt(prompt("Digite a quantidade de clientes:"))

// Lê a primeira linha da entrada (3 = número de cliente) e converte para número inteiro.
// Este valor representa a quantidade de entradas (número de transações a serem lidas).
const n = parseInt(gets());

// Inicializa a variável que vai acumular o total de transações.
let totalTransacoes = 0;//Informa que o total de transações começa em 0.

// Para exectar no WEB (PLAYCODE) usar:
//const transacoes = parseInt(prompt("Digite a quantidade de transacoes:"))

// TODO (PARA FAZER): Implemente um loop que vai se repetir 'n'(equivalente ao valor da constante n) vezes, para ler e somar cada transação.
for (let i=0; i < n; i++){// Para cada iteração(i) do loop: i começa em 0, enquando i for menor que n, aumente i em +1
    const transacoes = parseInt(gets());// Lê a próxima linha da entrada e converte para número inteiro.
    totalTransacoes += transacoes;// Adiciona o valor da transação lida ao total de transações, fazendo o papel de acumulador.

    //Na primeira iteração (i=0), totalTransacoes = 0 + transacoes lido na 1ª linha
        //Volta 1, lê a linha 2, pega o valor 5 e soma com o totalTransacoes (que é = 0) -> (0 + 5 = 5)
    //Na segunda iteração (i=1), totalTransacoes = 5 + transacoes lido na 2ª linha
        //Volta 2, lê a linha 3, pega o valor 3 e soma com o totalTransacoes (que passou a ser = 5) -> (5 + 3 = 8)
    //Na terceira iteração (i=2), totalTransacoes = 8 + transacoes lido na 3ª linha
        //Volta 3, lê a linha 4, pega o valor 0 e soma com o totalTransacoes -> (8 + 0 = 8)
    //Na quarta iteração (i=3), o loop termina, pois i não é mais menor que n (3 < 3 = falso), saindo do loop.
}

// Exibe o total de transações no formato especificado.
print(`${totalTransacoes} transacoes no total`);

// Para exectar no WEB (PLAYCODE) usar:
//console.log(totalTransacoes)