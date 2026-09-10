
//GPTando - Mini-Missões - Fase 1 - Missão 4

let idade = prompt ("Digite sua idade: ")

if (idade < 12) {
    console.log ("Criança")
}
else if ((idade >= 12) && (idade < 18)) { //O intervalo tem que ser colocado entre parenteses também (()&&())
    console.log ("Adolescente")
}
else if ((idade >= 18) && (idade < 60)){
    console.log ("Adulto")
}
else {
    console.log ("Idoso")
}