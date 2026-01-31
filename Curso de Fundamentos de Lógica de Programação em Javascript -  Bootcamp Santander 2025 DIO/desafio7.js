function calcularRanking (vitorias, derrotas){
    let saldo = vitorias - derrotas
    return saldo
}

let vitorias = parseInt(prompt("Quantas vitórias você tem?"))
let derrotas = parseInt(prompt("Quantas derrotas você tem?"))

let saldoVitorias = calcularRanking(vitorias, derrotas)

let nivel = 0;

if (saldoVitorias >= 101){
    nivel = "Imortal"
} else if (saldoVitorias >= 91){
    nivel = "Lendário"
} else if (saldoVitorias >= 81){
    nivel = "Diamante"
} else if (saldoVitorias >= 51){
    nivel = "Ouro"
} else if (saldoVitorias >= 21){
    nivel = "Prata"
} else if (saldoVitorias >= 11){
    nivel = "Bronze"
} else {
    nivel = "Ferro"
}

console.log(`O Herói tem saldo de ${saldoVitorias} vitórias está no nível de ${nivel}`)