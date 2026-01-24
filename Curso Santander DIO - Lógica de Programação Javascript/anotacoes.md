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

________________________________**FUNÇÕES**________________________________

Uma função é um conjunto de código com uma ação já pronta.

	function NOME DA FUNÇÃO (VARIÁVEL ASSOCIOADA){
		AÇÃO PROGRAMADA
	}

OBS.: a função precisa sempre ser chamada para ser executada, seja pelo comando, ação ou por uma variável.

	Exp.: 
		function torrar(){
			console.log("Torrando pão")
		}

		torrar()
OBS.: o comando "torrar()" pode ser colocado antes ou depois da função.

DICA: sempre que for criar uma função, procure criar uma função para cada ação esperada.
	Exp.:
		function envia(){}

		function salvar(){}

		function apagar(){}

**FUNÇÕES COM PARÂMETROS**

Uma função que passam parâmetros, é quando você informa um valor ou variável que quer atrelar à função.
	Exp.:
		Se eu criar uma função "torrar", quando eu for chamar ela, posso associá-la à uma variável, e no comando da chamada informar o valor ou variável que terá dentro.
	
	//posso informar que a função será atrelada à varíavel "pão".
		
		function torrar(pao){
			console.log("Torrada feita com " + pao)
		}

	//quando for chamar a função, posso usar os "()" para informar um valor ou uma variável que quero colocar dentro.

		torrar("pão de forma")
		torrar("pão integral")

OBS.: Uma variável aberta dentro de uma função "morre" ao termino da execução da função. Caso tente ser chamada fora da função, dará erro. O contrário já não acontece. Uma variável criada fora da função pode ser chamada dentro, sem problemas, desde que seja informada com "var" ao invés de "let", o que não é muito recomendada.

DICA: Uma função pode receber mais de um parâmetro.
	Exp.:
		function torrar (pao, nome){
			console.log("Torrada feita de " + pao + " e comida por " + nome)
		}

		torrar ("pão de forma", "Guilherme")

OBS.: No Javascript/Node.js, caso um dos valores não seja informado, o segundo valor (provavelmente) será informado com "undefined", ou seja, indefinido. Porém, para isso não acontecer, ao passar o parâmetro pra função, você pode associar uma valor que substituirá o "undefined" por ele, chamado de "valor default".
	Exp.:
		function  torrar (pao, nome = "cliente"){
			console.log("Torrada feita de " + pao + " e comida por " + nome)
		}

		torrar ("pão de forma")

	RESULTADO: Torrada feita de pão de forma e comida por cliente.
	
DICA: Caso tenha colocado o parâmetro que pode deixar de ser informado no meio, ao invés de informar ' , "Guilherme"' que dará erro, você pode informar o valor como ' undefined, "Guilherme"'.

DICA: Existe uma ferramenta que se chama INTERPOLAÇÃO DE STRINGS, muito usada com as funções, onde você substitui o jeito iniciante de concatenação, trocando as aspas duplas (" ") por crase (` `) e o sinal de + variável por ${variável}.
	Exp.:
		Ao invés de:
	"Olá, " + variavelNome + "! Você tem " + variavelIdade + " anos!"
		Pode usar:
	`Olá ${variavelNome}! Você tem ${variavelIdade} anos!`

EXEMPLO REAL 1: 
	Vamos supor que será feita uma função para fazer um pedido em uma lanchonete. Nessa lanchonete, para finalizar o pedido precisa-se pegar o PEDIDO, o NOME DO CLIENTE e o VALOR DO PEDIDO.
		
		function fazerPedido (pedido, cliente = "Cliente", valor = 99.90){
			console.log("O cliente " + cliente)
			console.log("solicitou " + pedido)
			console.log("que ficará no total de " + valor)
		}

		//Ao chamar a função, damos os dados que queremos que conste.
		fazerPedido("pizza de 4 queijos" , "Guilherme", 30.00 )
		//Os valores informados vão substituir, respectivamente na ordem, os valores dos parâmetros.

EXEMPLO REAL 2:
	Para solicitar um login, será solicitado o usuário, nome e a senha.

	function criarDatabase (nome, usuario, senha){
		console.log(`connect:DBCONNECT;user=${usuario};pass=${senha};initial_database=${nome}`)
	}

	criarDatabase ("Guilherme", "CapivaraZaroia", "1234")

	RESULTADO:
		connect:DBCONNECT;user=CapivaraZaroia;pass=1234;initial_database=Guilherme

**FUNÇOES COM RETORNO**

Uma função com retorno é quando uma função além de processar a ação, ela já vem com uma saída. Uma saída significa que ela devolverá um valor para quem chamou ela, através do "return". Esse valor pode ser um número, uma string, um objeto, um array... Esse retorno da função pode ser usado em alguma parte do código.
	Exp.:
	//Para a função:
		function soma(numero1, numero2){
			let somatorio = numero1 + numero2
		}
	//O resultado se perderia dentro da função, sem poder ser utilizado fora, durante o código. Mas, se for informado o "return" e for criado uma variável fora para ser armazenada essa devolução, se tornará uma variável com retorno que o código pode utilizar seu valor. , Depois, se quiser, pode ser chamado a variável para ver seu resultado.
		function soma(numero1, numero2){
			let somatorio = numero1 + numero2
			return somatorio
		}

		let resultado = soma(5, 10)

		console.log(resultado)

EXEMPLO REAL:
	Supondo que será criada uma função que receberá um NOME COMPLETO cadastrado, mas a função pegará apenas o primeiro nome do cadastro para tratar o usuário.

	Será pedido: cadastre nome completo. Então, depois, a função:
		function pegarPrimeiroNome (nome){
			let primeiroNome = nome.split(" ")[0]
	//OBS.: o SPLIT quebra uma string, criando várias strings menores, no local informado dentro do parenteses (" "), que no caso acima sinaliza que em cada espaço será quebrado a string.
	//OBS.: o [0] significa que após quebrar em várias strings menores (na verdade chamado de transformar em um vetor), a variável puxará apenas a primeira string da divisão. Caso quisesse apenas dividir e puxar tudo, é só não colocar o [0].
			
			return primeiroNome
		}

		let nomeDoUsuario = pegarPrimeiroNome ("Pedro Guilherme Martins de Sousa")

		console.log("Olá! Seja bem vindo, " + nomeDoUsuario)

OBS.: toda função, que não tiver um retorno, volta como "undefined".

________________________________**DESAFIO 5: DESAFIO DE CÓDIGO 4**________________________________

Explorando Transações com Javascript

Desafio
Em um movimentado banco, os caixas precisam de ajuda para calcular o total de transações realizadas em um dia. Cada cliente pode realizar múltiplas transações, e o gerente deseja saber quantas transações foram feitas ao longo do dia. Ajude-os a contar!

Entrada
A entrada deve receber uma string que representa o número de clientes, seguido por uma sequência de transações, onde cada linha contém um número inteiro representando quantas transações cada cliente fez.

A primeira linha contém um número inteiro N (1 ≤ N ≤ 100), representando o número de clientes, e as N linhas seguintes contêm um número inteiro T (0 ≤ T ≤ 100) para cada cliente.

Saída
Deverá retornar uma string com o total de transações realizadas por todos os clientes, seguido pela mensagem "transacoes no total".

Exemplos
A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.

Entrada:
3
5
3
0
Saída: 8 transacoes no total

Entrada:
2
10
15
Saída: 25 transacoes no total

Entrada:
2
1
2
Saída: 3 transacoes no total

**DESTRINCHANDO O DESAFIO**

A ENTRADA representa os informes dos dados que o banco repassou.

A primeira linha representa a quantidade de clientes do dia.

As demais linhas, a quantidades de transações que cada um fez.

A SAÍDA é o resultado esperado.

Então...
	Na ENTRADA
		3 -> número de clientes, ou seja, 3 clientes.
		5 -> número de transações do cliente 1
		3 -> número de transações do cliente 2
		0 -> número de transações do cliente 3
	Agora, só precisa informar quantidade de transações somando todas as transações, dos 3 clientes.
	SAÍDA = 5 + 3 + 0 = 8 transações.

________________________________**DESAFIO 6: DESAFIO DE CÓDIGO 5**________________________________

Explorando Transações com Javascript

Desafio
Você foi contratado para desenvolver um sistema de saque. Nesse contexto, os clientes podem solicitar saques de quantias específicas, mas o sistema só pode entregar valores em notas de 10, 20 e 50. Seu objetivo é calcular a quantidade de cada nota que será entregue ao cliente.

Entrada
A entrada deve receber uma string representando o valor do saque solicitado, que será um número inteiro positivo, e deve estar entre 10 e 1000. O valor deve ser fornecido sem espaços ou caracteres adicionais.

Saída
Deverá retornar uma string com a quantidade de notas de 50, 20 e 10 que serão entregues, no formato "50:n 20:m 10:k", onde n, m e k são as quantidades de notas de cada denominação. Se não for possível realizar o saque, retorne "Insira uma quantia valida".

Exemplos
A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.

Entrada		Saída
80			50:1 20:1 10:1
90			50:1 20:2 10:0
15			Insira uma quantia valida

________________________________**DESAFIO 7: DESAFIO DE PROJETO 2**________________________________

 # 2️⃣ Calculadora de partidas Rankeadas
**O Que deve ser utilizado**

- Variáveis
- Operadores
- Laços de repetição
- Estruturas de decisões
- Funções

## Objetivo:

Crie uma função que recebe como parâmetro a quantidade de vitórias e derrotas de um jogador,
depois disso retorne o resultado para uma variável, o saldo de Rankeadas deve ser feito através do calculo (vitórias - derrotas)

Se vitórias for menor do que 10 = Ferro
Se vitórias for entre 11 e 20 = Bronze
Se vitórias for entre 21 e 50 = Prata
Se vitórias for entre 51 e 80 = Ouro
Se vitórias for entre 81 e 90 = Diamante
Se vitórias for entre 91 e 100= Lendário
Se vitórias for maior ou igual a 101 = Imortal

## Saída

Ao final deve se exibir uma mensagem:
"O Herói tem de saldo de **{saldoVitorias}** está no nível de **{nivel}**"

________________________________**ESTRUTURAS COM OBJETOS**________________________________

Objeto, em Javascript, é qualquer estrutura capaz de guardar dados ou comportamentos (métodos).

**ESTRUTURA DE DADOS JSON**

JSON é um agrupamento de dados de uma maneira mais organizada. São chaves e valores com o objetivo de transferir dados de um lugar para outro.

JSON = JavaScript Object Notation ou Notação de Objetos em JavaScript

	Exp.:
		Sem JSON:
			let nome = "Guilherme"
			let idade = 35
			let produtos = ["mouse", "teclado", "monitor"]
			let valores = [29.90, 129.99, 899.99]

			function gerarPedido (nome, idade, produtos, valores){
				console.log ("O comprador é " + nome)
				console.log ("A idade é " + idade)
				console.log ("-------------------")
				console.log ("O produto é " + produtos[0])
				console.log ("O valor é " + valores[0])
			}

			gerarPedido (nome, idade, produtos, valores)

A variável é informada entre chaves, chama-se criar objeto.
	let pedido = {}

Dentro do escopo (entre {}) será informada as chaves e os valores. A chave é o identificador e o valor é o conteúdo, separado por dois pontos (:).
	let pedido = {
		nome: "Felipe"
	}

Também pode ser criado um objeto dentro do objeto, facilitando o transporte de dados, levando vários valores dentro da mesma variável.
	let pedido = {
		nome: "Guilherme",
		idade: 35,
		produtos: {
			0: ["mouse", 29.90],
			1: ["teclado", 129.99],
			2: ["monitor", 899.99]
		}
	}
Assim, quando for chamar pode chamar o valor todo ou escolher que pedaço chamar, por exemplo, chamar apenas o valor do monitor.
	console.log(pedido.produtos[2][1])

ATENÇÃO: sempre colocar a vírgula na hora de informar outro identificador.
	Exp.:
		Com JSON:
			let pedido = {
				nome: "Guilherme",
				idade: 35,
				produtos: {
					0: ["mouse", 29.90],
					1: ["teclado", 129.99],
					2: ["monitor", 899.99]
				}
			}

			function gerarPedido (pedido){
				console.log ("O comprador é " + pedido.nome)
				console.log ("A idade é " + pedido.idade)
				console.log ("-------------------")
				console.log (`O produto é ${pedido.produtos[0][0]} de valor ${pedido.produtos[0][1]}`)
			}

			gerarPedido (pedido)

Existe também o processo de DESESTRUTURAÇÃO. Quando se tenta chamar um objeto que está dentro de um objeto (console.log(pedido.produtos)) esse resultado vai voltar como "object object", sem o valor correspondente, a menos que você busque pelas coordenadas de cada valor especificando a posição no vetor.
Porém, você optar pela desestruturação, onde você vai percorrer a lista utilizando a ferramenta FOR/IN, onde PARA (for) uma constante ou variável chamada INDEX (const/let index) PERCORRA (in) o OBJETO (informar qual objeto você quer que seja percorrido), e o INDICADOR que o segundo objeto se encontra. Dentro do ESCOPO do "for", criar uma variável (let) que guardará duas variáveis que serão criadas ao mesmo tempo dentro de colchetes ([,]) que terá de valor (=) o INDEX do objeto.indicador escolhido.
	Exp.:
		for(let index in pedido.produtos){
			let [produtoNome, produtoPreco] = pedido.produtos[index]
		}

Com a desestruturação fica então:
	let pedido = {
				nome: "Guilherme",
				idade: 35,
				produtos: {
					0: ["mouse", 29.90],
					1: ["teclado", 129.99],
					2: ["monitor", 899.99]
				}
			}

			function gerarPedido (pedido){
				console.log ("O comprador é " + pedido.nome)
				console.log ("A idade é " + pedido.idade)
				console.log ("-------------------")
				
				for(let index in pedido.produtos){
					let [produtoNome, produtoPreco] = pedido.produtos[index]
					console.log(`- ${produtoNome}: R$ ${produtoPreco}`)
				}

			}

			gerarPedido (pedido)
OBS.: esse FOR/IN é diferente do FOR dos condicionais. Esse é próprio pra lidar com objetos.

**CLASSES E OBJETOS**

