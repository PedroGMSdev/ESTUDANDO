// Para exectar no WEB (PLAYCODE) usar:
//let salario = parseFloat(prompt("Digite seu salário:"))

// Para ler os valores de entrada na DIO usar:
let salario = gets()

let imposto = calcularImposto(salario)
function calcularImposto (salario){
let imposto; // Sempre criar uma variável ao abrir uma função
  if (salario <= 3000.00 ){
    imposto = salario * 0.05;
  } else { // OBS.: IMPORTANTE PARA ESSE CASO!
    imposto = (salario - 3000.00) * 0.10; // O desafio pede para calcular 10% APENAS SOBRE O QUE ULTRAPASSA 3000, por isso subtraímos 3000 do salário.
  } 
  
  return imposto;
}

// Para executar na DIO usar:
print(imposto.toFixed(2))

// Para exectar no WEB (PLAYCODE) usar:
//console.log(imposto.toFixed(2))