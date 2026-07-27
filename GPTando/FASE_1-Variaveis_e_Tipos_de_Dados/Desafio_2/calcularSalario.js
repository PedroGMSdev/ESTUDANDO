
//GPTando - Mini-Missões - Fase 1 - Missão 2


let salarioMensal = parseFloat(prompt("Digite seu salário mensal: ").replace(",", ".")); //"replace" vai fazer com que mesmo que o usuário escreva a vírgula, seja lido como ponto. 
let mesesTrabalhados = parseInt(prompt("Digite quantidade de meses trabalhado: "));
let salarioTotal = salarioMensal * mesesTrabalhados;

console.log ("Seu salário total, nesses " , mesesTrabalhados, " meses, é de " , salarioTotal, ".");

//Outra opção é colocar o formatador para transformar o "salarioTotal" em moeda, mas também trocando a virgula que separa as variáveis e as strings por "+"
console.log ("Seu salário total, nesses " + mesesTrabalhados + " meses, é de " 
    //e ao adicionar o seguinte código, transforma "salarioTotal" para moeda
    +new Intl.NumberFormat("pt-BR", {style: "currency", currency: "BRL"}).format(salarioTotal) + ".");

//ou trocar todas as aspas duplas da String por uma crase de abertura e fechamento, que faz com que a variável possa se adicionada à ${ }, sem trocar as virgulas.  OBS.: PODEM SER DESCONSIDERADAS AS VIRGULAS QUE SEPARAM OS ELEMENTOS DO CONSOLE, DEIXANDO SÓ AS DA STRING
console.log (`Seu salário total, nesses ${mesesTrabalhados}  meses, é de  
     ${new Intl.NumberFormat("pt-BR", {style: "currency", currency: "BRL"}).format(salarioTotal)}.`);