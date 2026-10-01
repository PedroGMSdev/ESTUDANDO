Algoritmo "triangulos"

//Aula 4
// Identifica o tipo de triangulo

Var
lado1, lado2, lado3: real
equilatero, isosceles, escaleno, triangulo: logico

Inicio
escreva("Informe o primeiro lado: ")
leia(lado1)
escreva("Informe o segundo lado: ")
leia(lado2)
escreva("Informe o terceiro lado: ")
leia(lado3)

equilatero <- (lado1 = lado2) e (lado2 = lado3)
escaleno <- (lado1 <> lado2) e (lado1 <> lado3) e (lado2 <> lado3)
isosceles <- ((lado1 = lado2)ou(lado1 = lado3)ou(lado3 = lado2)) e não equilatero

escreval("O triangulo é EQUILÁTERO? ", equilatero)
escreval("O triangulo é ISÓSCELES? ", isosceles)
escreval("O triangulo é ESCALENO? ", escaleno)

triangulo <- (lado1 < lado2 + lado3) e (lado2 < lado1 + lado3) e (lado3 < lado2 + lado1)

escreval("Ele é um triangulo real? ", triangulo)


Fimalgoritmo