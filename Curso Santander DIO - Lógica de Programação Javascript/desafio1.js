let salarioBruto = 2000 //let salarioBruto = Number(prompt("Qual o valor do seu salário?"))
let beneficio = 250 //let beneficio = Number(prompt("Qual o valor do seu benefício?"))
let porcentagem;
if (salarioBruto <= 1100.00){
  porcentagem = 5.00;
}
else if (salarioBruto <= 2500.00){
  porcentagem = 10.00;
}
else {
  porcentagem = 15.00;
}
let imposto = (porcentagem / 100) * salarioBruto
let salarioPago = (salarioBruto-imposto)+beneficio

console.log(salarioPago) //console.log(salarioPago.toFixed(2)) // para mostrar com duas casas decimais

// Na DIO existe funções "gets" e "print" para entrada e saída de dados respectivamente.
// A DIO espera que seja resolvido o problema com:

// Para ler os valores de entrada:
//const salarioBruto = parseFloat(gets());
//const beneficio = parseFloat(gets());

// Para calcular o imposto através da função "calcularImposto":
//const imposto = calcularImposto(salarioBruto);

// Para calcular e imprimir a saída (com 2 casas decimais):
//const saida = salarioBruto - imposto + beneficio;
//print(saida.toFixed(2));

// Função utilizada para o cálculo do imposto (baseado nas aliquotas fornecidas):
//function calcularImposto(salarioBruto) {
//  let porcentagem;
//  if (salarioBruto <= 1100.00){
//    porcentagem = 0.05;
//  } else if (salarioBruto <= 2500.00){
//    porcentagem = 0.10;
//  } else {
//    porcentagem = 0.15;
//  }
//  return porcentagem * salarioBruto;
//}