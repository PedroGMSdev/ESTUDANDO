#			CURSO SANTANDER D.I.O.
##	FUNDAMENTOS E LÓGICA DE PROGRAMAÇÃO em JAVASCRIPT

__________________________________**TIPOS DE DADOS E VARIÁVEIS**__________________________________

**VARIÁVEIS = let**
VARIÁVEL é uma "caixinha" pra guardar valores.

Exp.:
//saída
console.log("Qual o nome do seu jogador? ");

//declara variável
let nickname = prompt("Jogador");

//concatena uma mensagem fixa + uma variável
console.log("Bem vindo(a), " + nickname + "!")

console.log(nickname + "entrou no servidor!")

**CONSTANTE = const**
Exp.:
console.log("Pokémon GO diz: Tem um novo pokémon na região!")
console.log("Pokémon GO diz: Você foi derrotado por um líder!")

const mensagem = "Pokémon GO diz: "

console.log(mensagem + "Tem um novo pokémon na região!")
console.log(mensagem + "Você foi derrotado por um líder!")


**TIPOS DE VARIÁVEIS**

- String = armazena nomes
	Exp.:
		let nomePokemon = "Pikachu"
- Number = armazena números
	Exp.:
		let nivelPokemon = 20
- Boolean = armazena valores como verdadeiro OU falso (true/false)
	Exp.:
		let selecionavel = true


__________________________________**VETORES E MATRIZES (ARRAYS)**__________________________________

**VETORES** são coleções de valores. Pode-se dizer que são como "armários" que guardam várias caixinhas (VARIÁVEIS) dentro. Os vetores são ARRAYS unidimensionais.

OBS.: as posições dos valores guardados começam do 0 e não do 1.
	Exp.:
		let pokemon = ["Pikachu", "Charmander", "Squirtle", "Bulbasaur"]

		console.log ("Seu Pokémon é um", pokemon[2])

		resultado: Seu Pokémon é um Squirtle
Então, se você chamar a posição 2, o valor que será exibido será o TERCEIRO valor informado (0, 1, 2, 3...)

OBS.: ao colocar o "." depois da variável, você tem várias opções de "manipulação" desses vetores, chamados de METODOS.
	Exp.:
		pokemon.pop()
Existem várias ferramentas, ou seja, vários METODOS que podem ser utilizados, como:
	.pop() = remove o último valor do array.
	.shift() = remove o primeiro valor do array (valor 0).

DICA: você pode jogar no Google "javascript arrays documentação" que aparecerá todas os metodos que você pode usar, como o citado acima.

**MATRIZES** são arrays bidimensionais. Pode se dizer que: se VARIÁVEIS são caixas, VETORES são armarios em linha, e as MATRIZES são armários de linhas e colunas.
	Exp.:
		let timePokemon = [
  			["Pikachu", "Masc", "Level 1"],
  			["Charmander", "Femi", "Level 2"],
  			["Squirtle", "Masc", "Level 3"],
  			["Bulbasaur", "Femi", "Level 4"]
  		]

		console.log ("Seu Pokémon é um", timePokemon[1][0], "de", timePokemon[1][2])

		resultado: Seu Pokémon é um Charmander de Level 2

As matrizes podem ser usadas para armazenar diferentes tipos de dados.
	Exp.:
		let timePokemon = [
  			["Pikachu", 1],
  			["Charmander", 2],
  			["Squirtle", 3],
  			["Bulbasaur", 4]
  		]
Onde serão guardados Strings (Nomes dos Pokémons) e Números (Level dos Pokémons).

OBS.: assim como os VETORES, as MATRIZES também possuem METODOS (caixinhas roxas que aparecem ao colocar o "."). As matrizes também tem as PROPRIEDADES (caixinhas azuis) que tem algumas funcionalidades, assim como os metodos.
	Exp.:
		let timePokemon = [
  			["Pikachu", "Masc", "Level 1"],
  			["Charmander", "Femi", "Level 2"],
  			["Squirtle", "Masc", "Level 3"],
  			["Bulbasaur", "Femi", "Level 4"]
  		]

		console.log (timePokemon.length)

		resultado: 4
Onde essa PROPRIEDADE dará a quantidade de elementos que essa matriz possui.

________________________________**OPERADORES E EXPRESSÕES**________________________________

**OPERADORES ARITMÉTICOS**

+ (ADIÇÃO)
- (SUBTRAÇÃO)
* (MULTIPLICAÇÃO)
/ (DIVISÃO)
% (MÓDULO/RESTO DA DIVISÃO)

OBS.: as expressões aritméticas na programação seguem as mesmas ordem de resolução que na matemática.

**OPERADORES RELACIONAIS**
Também são conhecidos como OPERADORES DE COMPARAÇÃO.

== (IGUAL A) = simboliza que um valor ou variável é igual a outro.
	Exp.: 
		let numero = "1"
		console.log(numero == 1)
	p/ resultado = VERDADEIRO, pois os VALORES são iguais.

=== (IGUAL EM VALOR E FORMATO) = sinaliza que os valores das variáveis são iguais em valor
	Exp.: 
		let numero = "1"
		console.log(numero === 1)
	p/ resultado = FALSO, pois os VALORES são iguais, porém o CONTEÚDO não, pois um é uma STRING e o outro é um NUMBER.

!= / !== (DIFERENTE DE)

DICA: você pode armazenar o valor de uma COMPARAÇÃO dentro de outra variável, para facilitar a consulta. Como por exemplo, caso você esteja criando uma aplicação que exija um cadastro de usuário, e nesse cadastro peça o CPF, porém você quer restringir um usuário, você pode salvar o CPF desse usuário em uma variável, e solicitar que seja feita uma comparação quando o usuário informar o CPF à cadastrar, barrando-o caso o cpf seja igual ao bloqueado.
	Exp.: 
		let cpfBloqueado = "111.222.333-44"
		let cpfUsuario = "222.333.444-55" (cpf informado pelo cadastrante)
		let cpfImpossibilitado = cpfUsuario === cpfBloqueado

	console.log("O usuário está barrado? + cpfImpossibilitado)
	p/ resultado = FALSE, que sinaliza que o CPF informado na hora do cadastro é diferente do CPF que está impedido de cadastrar-se, podendo assim continuar com o cadastramento.
Outro caso, é quando você tem um sistema de acesso restrito e precisa identificar o CPF cadastrado para acessar esse sistema. Caso o CPF informado seja diferente desse cadastrado, o usuário será barrado.
	Exp.:
		let cpfPermitido = "111.222.333-44"
		let cpfUsuario = "222.333.444-55"
		let cpfSemPermissao = cpfUsuario !== cpfPermitido

	console.log("É um usuário inválido?" + cpfSemPermissao)
	p/ resultado = VERDADEIRO, já que o CPF que tem permissão não é o mesmo desse.

> (MAIOR QUE)
< (MENOR QUE)
>= MAIOR OU IGUAL
<= MENOR OU IGUAL

**OPERADORES LÓGICOS**

&& (AND/E) = quando TODAS as exigencias precisam ser atendidas para ser válida.
	Exp.:
		para conseguir viajar para outro país, precisa que a pessoa seja maior de idade E tenha um passaporte verificado:
		((idade >= 18) && (vistoVerificado === true))

|| (OR/OU) = quando PELO MENOS UMA exigência precisa ser atendida para ser válida.
	Exp.:
		para conseguir sair de casa, precisa que o dia não esteja chovendo OU que a pessoa tenha um guarda-chuva:
		((chuva === false) || (item === "guarda-chuva"))
OBS.: o nome dado para essa barrinha é "PAIPE".

! (NOT/NEGAÇÃO) = inverte o resultado, transformando VERDADEIRO em FALSO, e visse-versa.
	Exp.: 
		resultado = true
		!resultado = false

**OPERADORES DE ATRIBUIÇÃO**

= (ATRIBUIÇÃO)

**OPERADORES DE INCREMENTO E DECREMENTO**

++ (INCREMENTO) = soma +1 ao valor que já existe na variável. É como se indicasse que aquela variável agora seria igual a VARIÁVEL +1. Muito usado em contadores, tipo contar de 1 a 10...
-- (DECREMENTO) = o oposto do incremento, o DECREMENTO diminui -1 ao valor que já existe na variável, tipo em uma contagem regressiva.

OBS.: uma opção para CALCULAR E ATRIBUIR é utilizar o operador junto com o sinal de atribuição (=).
	Exp.:
		Após declarar let preco = 10 invés de utilizar:
			1 - let preco = 10
				preco ++
				preco ++
				preco ++
				preco ++
			p/ resultado = 14

			ou

			2 - let preco = 10
				preco = preco +4
			p/ resultado = 14

melhor seria utilizar += que sinalizaria que seria somado (+) ao valor da variável **preco** (=) o valor informado.
	Exp.:
		let preco = 10
		preco += 4
		p/ resultado = 14
Isso pode ser usado com qualquer uma das operações.


________________________________**DESAFIO 1: DESAFIO DE CÓDIGO 1**________________________________

Faça um programa que calcule e imprima o salário a ser transferido para um funcionário.

Para realizar o cálculo receba o valor bruto do salário e o adicional dos benefícios.
O salário a ser transferido é calculado da seguinte maneira:

(valor bruto do salário - percentual de imposto mediante ao salário) + adicional dos benefícios

Para calcular o PERCENTUAL DE IMPOSTO segue as aliquotas:
	De R$ 0.00 a R$ 1100.00 = 5.00%
	De R$ 1100.01 a R$ 2500.00 = 10.00%
	Maior que R$ 2500.00 = 15.00%

**ENTRADA**
A entrada consiste em vários arquivos de testes, que conterá o VALOR BRUTO DO SALÁRIO e ADICIONAL DOS BENEFÍCIOS. Conforme mostrado no exemplo de entrada a seguir.

**SAÍDA**
Para cada arquivo da entrada, terá um arquivo de saída. E como mencionado no DESAFIO, será gerado uma linha com um número que será a diferença entre valor bruto do salário e o percentual de imposto mediante a faixa salarial somado com o adicional dos benefícios. Use o exemplo abaixo para clarear o que está sendo pedido.

Salário: 2000
Benefícios: 250
Resultado: 2050.00


________________________________**DESAFIO 2: DESAFIO DE CÓDIGO 2**________________________________

Você foi contratado para desenvolver um sistema de gerenciamento de contas. O sistema deve identificar o saldo total de todas as contas após uma série de depósitos e saques. Sua tarefa é implementar uma função que calcule esse saldo a partir das operações fornecidas.

**ENTRADA**
A entrada deve receber uma string com várias operações separadas por vírgulas. Cada operação terá o formato "tipo valor", onde "tipo" pode ser "deposito" ou "saque", e "valor" é um número inteiro representando o valor da operação.

**SAÍDA**
Deverá retornar uma string com o saldo total das contas após todas as operações, formatado como um número inteiro.

**EXEMPLOS**
A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.

ENTRADAS:
1°: deposito 100, saque 30, deposito 50
2°: deposito 200, deposito 300, saque 100
3°: saque 50, deposito 100, saque 20

SAÍDAS:
1°: 120
2°: 400
3°: 30

________________________________**DESAFIO 3: DESAFIO DE CÓDIGO 3**________________________________

Você precisa criar um sistema que calcule o imposto sobre o salário de um funcionário de um banco. O imposto é de 10% sobre o valor superior a 3.000. Caso o salário seja inferior ou igual a 3.000, o imposto será de 5%.

**Entrada**
A entrada será o valor do salário do funcionário.

Exemplo: 2000
O valor do salário será um número flutuante.

**Saída**
Deverá retornar o valor do imposto a ser descontado do salário.

Imposto calculado de acordo com as regras estabelecidas.

**Exemplos**
A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.

Entrada	|Saída
2000	|100.00
3500	|50.00
5000	|200.00
Atenção: É extremamente importante que as entradas e saídas sejam exatamente iguais às descritas na descrição do desafio de código.


________________________________**DECISÕES E REPETIÇÕES**________________________________

**ESTRUTURAS CONDICIONAIS**

Será escolhido uma condição que SE apresentar valor X o resultado será A, SENÃO, se apresentar o valor Y, o resultado será B.

IF (SE)
ELSE IF (SENÃO SE)
ELSE (SENÃO)

	Exp.:
//Será criada a variável (let) nivelDeFome:
	let nivelDeFome = parseInt(prompt("Qual seu nível de fome?\n" + "Para Nível 1: Pouca Fome, digite 1\n" + "Para Nível 2: Bastante Fome, digite 2\n" + "Para Nível 3: Fome Para C..., digite 3"))
	OBS.: o "\n" na String faz quebrar a linha.

//Se o nível de fome for 1, que equivale à "Pouca fome":
	if (nivelDeFome === 1){

	//Será executado o seguinte comando:
		console.log("Comprar uma maçã!")

//Se o nível de fome for 2, que equivale à "Bastante fome":
	} else if (nivelDeFome === 2){

	//Será executado o seguinte comando:
		console.log("Comprar um hambúrguer!")

//Se o nível de fome for 3, que equivale à "Fome Para C...":
	} else {

	//Será executado o seguinte comando:
		console.log("Vamos logo para um rodízio!")

//NUNCA ESQUECER DE FECHAR CADA IF E CADA ELSE:
	}	

**ESTRUTURAS DE DECISÃO**

Será apresentado uma situação onde irá ESCOLHER a variável e CASO apresente valor X será executado evento A, CASO apresente valor Y será executado evento B, CASO apresente valor Z será executado evento C...

OBS.: SWITCH/CASE é bem indicado quando você tem muitas variações de condições, pois o IF/ELSE pode deixar o código muito bagunçado com muitas alternativas.

SWITCH (ESCOLHA)
CASE (CASO SEJA)
	Exp.:
//Será criado a variável (let) fruta:

	//Será identificada e escolhida a variável fruta:
		switch (fruta){

		//Caso o valor da variável seja LARANJA
			case "laranja":

			//Será executado a ação:
				console.log ("Vamos fazer um suco de laranja!")

		//Caso o valor da variável seja BANANA:
			case "banana":

			//Será executado a ação:
				console.log ("Vamos fazer uma bananada!")
		
	// NUNCA ESQUECER DE FECHAR O SWITCH:
		}

BREAK (PARAR)
O break pode ser acrescentado para impedir que o SWITCH execute todos os resultados depois de encontrar o CASO equivalente e saia da aplicação SWITCH.
	Exp.:
		let fruta = "banana"

 		switch (fruta){
			case "laranja":
				console.log ("Vamos fazer um suco de laranja!")
        		break
        
			case "banana":
				console.log ("Vamos fazer uma bananada!")
        		break

       		case "maçã":
        		console.log ("Vamos fazer uma vitamina de maçã!")
        		break
		}
OBS.: No caso acima, o SWITCH vai buscar a variável, e quando encontrar o CASE "banana" ele sairá da aplicação SWITCH, evitando que ele execute os outros casos abaixo do escolhido também. Se retirar o BREAK verá que CASE "maçã" também é executado.

IDEIA: Um caso para não utilizar o BREAK é quando você quer atribuir uma condição para que seja executado algum comando.
	Exp.:
		Quero que essas coisas sejam executada nessa ordem quando o valor da variável X for A...
	Exp. aplicado em um jogo (IDEIA):
		Seria interessante o não colocamento do BREAK para que quando o resultado da variável for, por exemplo, "sangramento" o personagem comece a perder pontos de vida a cada turno, comece a ficar desorientado, fique confuso... mas, para isso teria que colocar o pior cenário em primeiro e os mais brandos por último.
			Como:
				- Desmaiar
				- Tonto
				- Sangramento
				-...

DEFAULT
Caso você queira implementar uma opção para caso nenhum dos casos informados sejam escolhidos, pode usar o DEFAULT para que uma outra ação não indicada acima seja executada.
	Exp.:
		let fruta = "pêra"

 		switch (fruta){
			case "laranja":
				console.log ("Vamos fazer um suco de laranja!")
        		break
        
			case "banana":
				console.log ("Vamos fazer uma bananada!")
        		break

       		case "maçã":
        		console.log ("Vamos fazer uma vitamina de maçã!")
        		break

			default:
				console.log ("Vai ficar sem suco mesmo!")
		}
OBS.: Tanto os CASEs quanto o DEFAULT devem ser encerrados com ":", senão não funcionarão.

IDEIA: Esse SWITCH pode ser usado para um evento onde o usuário escolherá no menu o que deseja executar, e ao clicar na opção ser redirecionado para o local.

OBS.: O DEFAULT não precisa obrigatóriamente ser usado, mas acho interessante criar uma boa prática utilizar sempre. Assim também como o BREAK.

DICA: Mais de um CASO pode ser atribuído para a mesma ação.
	Exp.:
		Na variável (let) fruta será informada uma fruta. Dependendo de que fruta seja informada, saberemos se será feito um suco ou uma vitamina.

		let fruta = "banana"

		switch (fruta){
			case "laranja":
			case "maçã":
			case "melancia":
				console.log ("Suco de " + fruta)
				break

			case "banana":
			case "morango":
			case "mamão":
				console.log ("Vitamina de " + fruta)
				break
		}

OBS.: Os exemplos acima foram dado em strings, mas pode ser usado com números também.

**ESTRUTURAS DE REPETIÇÃO**

Escolha de ações que serão executadas depois de certo número de repetições, ou depois de certa quantidade de ações.
	Exp.:
		Você só vai levantar da mesa depois de terminar de comer tudo!

FOR (PARA)
	Exp.:
		PARA (for) uma variável CONTADOR (let contador) que inicialmente é igual a 0 (contador = 0), enquanto ela for menor que 4 (contador < 4), adicione de 1 em 1 até o resultado esperado (contador++).

		for (let contador = 0; contador < 4; contador++){
			//Será executado a seguinte ação ({}): exibir a variável CONTADOR
			console.log (contador)
		}
DICA: É muito comum ver essa variável, na programação, ser retratada por "i" (abreviação de INTERADOR).
	Exp.:
		for (let i = 0; i < 4; i++){
			console.log (i)
		}
OBS.: Para escrever um FOR, você deve informá-lo e entre () informar a regra desejada para ele, e abrir {} onde será informado o que será executado quando atingir a regra desejada.

WHILE (ENQUANTO)
	Exp.:
		ENQUANTO (while) a variável CONTADOR (let contador) for menor que 3 (contador < 3) execute ({}) o comando de exibir olá (console.log ("Olá!"))

		let contador = 0
		while (contador < 3){
			console.log ("Olá!")
		}
DICA: Se não for colocado um interador na variável elá entrará num loop infinito de repetições.
	Exp.: 
		let contador = 0
		while (contador < 3){
			console.log ("Olá!")
			//Será adicionado um interador (contador++) que aumentará +1 à variável, para que essa variável tenha possibilidade de alcançar a regra do WHILE (< 3) e encerre o laço de repetição e saia do looping.
			contador++
		}
OBS.: Em caso da variável não atingir a regra, o WHILE não será executado.
	Exp.:
		let contador = 3
		while (contador < 3){
			console.log ("Olá!")
			//Será adicionado um interador (contador++) que aumentará +1 à variável, para que essa variável tenha possibilidade de alcançar a regra do WHILE (< 3) e encerre o laço de repetição e saia do looping.
			contador++
		}
		//Como o contador já é maior que a regra, o WHILE não será executado, de maneira alguma.

LEMBRETE: contador++ significa que será adicionado +1 ao valor já existente na variável contador.
	contador++ que é igual à
		contador +=1 que é igual à
			contador = contador + 1.

DO-WHILE (PARA...ENQUANTO)
	Exp.:
		FAÇA (do) a seguinte ação ({}), e repita ENQUANTO (while) a regra for ().

		let contador = 3
		do {
			console.log ("Olá!") //Ação escolhida para ser executada.
			contador++ //Interador para evitar um looping infinito.
		} while (contador < 3)
OBS.: Diferente do WHILE, o DO-WHILE executará uma vez, mesmo que a variável não atinja a regra do WHILE.

OBS.: No caso do DO-WHILE, a abertura da ação desejada é aberta logo após o DO, não depois do WHILE.

________________________________**DESAFIO 4: DESAFIO DE PROJETO 1**________________________________

Desafio Classificador de nível de Herói

**O Que deve ser utilizado**

- Variáveis
- Operadores
- Laços de repetição
- Estruturas de decisões

**Objetivo**

Crie uma variável para armazenar o nome e a quantidade de experiência (XP) de um herói, depois utilize uma estrutura de decisão para apresentar alguma das mensagens abaixo:

Se XP for menor do que 1.000 = Ferro
Se XP for entre 1.001 e 2.000 = Bronze
Se XP for entre 2.001 e 5.000 = Prata
Se XP for entre 5.001 e 7.000 = Ouro
Se XP for entre 7.001 e 8.000 = Platina
Se XP for entre 8.001 e 9.000 = Ascendente
Se XP for entre 9.001 e 10.000= Imortal
Se XP for maior ou igual a 10.001 = Radiante

**Saída**

Ao final deve se exibir uma mensagem:
"O Herói de nome **{nome}** está no nível de **{nivel}**"