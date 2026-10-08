________________**CURSO EM VÍDEO**___________________
# CURSO DE LÓGICA DE PROGRAMAÇÃO

## COMANDOS EXTRAS
        `--->>> comandos do Visualg e suas finalidades
### limpaTela
        `--->>> como o nome diz, limpa toda a tela de execução.

## ALGORÍTMOS

### COMANDO DE SÁIDA
Servem para EXIBIR informações na tela.

#### escreva(" ")
        `--->>> escreve o comando na tela
    igual à:
        - System.out.print(" ") em JAVA
        - printf(" ") em C

#### escreval(" ")
        `--->>> escreve o comando e salta uma linha
    igual à:
        - System.out.println(" ") em JAVA
        - console.log(" ") em JAVASCRIPT
        - printf("\n") em C, onde o "\n" sinaliza que será quebrado a linha e pulado para a próxima

OBS.: O comando de saída pode exibir um mensagem desejada entre aspas, exibir uma variável sem precisar das aspas, ou a CONCATENAÇÃO que é a junção das duas.
    Exp.:
        - escreva("mensagem")
        - escreva(variavel)
        - escreva("mensagem", variavel)

### VARIÁVEIS
Espaço para colocar um valor, como se fosse um armário.

Para nomear uma variável deve se ter:
    identificador : tipo

O IDENTIFICADOR deve:
- Deve começar com uma letra.
- Os próximos podem ser LETRAS ou NÚMEROS.
- NÃO pode utilizar NENHUM SÍMBOLO, exceto underline (_). OBS.: nas linguagens pode ser utilizado também o traço (-).
- NÃO pode conter ESPAÇOS EM BRANCO. OBS.: nas linguagens, palavras com espaços podem ser separadas por "_" ou "-".
- NÃO pode conter letras com acentos.
- NÃO pode ser uma PALAVRA RESERVADA, ou seja, palavras que o programa já use como padrão. Exp.: Algoritmo, Finalgoritmo, Var...

### TIPOS DE VARIÁVEIS
No PORTUGOL, existem 4 TIPOS PRIMITIVOS DE VARIÁVEIS:
- Inteiro
    Exp.: 1, 3, -5, 198, 0...
- ReaL
    Exp.: 0.5, 5.0, 9.8, -77.3, 3.1415...
OBS.: os números reais não são escritos com vírgula na programação, e sim com ponto.

OBS.: em JAVASCRIPT os números INTEIROS e REAIS são identificados pelo mesmo tipo, o NUMBER. Em JAVA, cada tipo precisa ser identificado diferentemente, e o reais ainda mais, de acordo com a precisão pretendida nos cálculos, como:
    - Inteiro = int
    - Reais = float, double ou BigDecimal.
- Caractere
    Exp.: "Guilherme", "Algoritmo", "123"...
OBS.: são conhecidos como STRING.
- Lógico
    Exp.: Verdadeiro ou Falso
OBS.: conhecidos como booleanos, ou "boolean"

### DECLARAÇÃO E ATRIBUIÇÃO
Ao declarar no local de variáveis, coloca-se o nome desejado para a varíavel, dois pontos e o tipo dela.
    Exp.:
        var
            nome: caracter
E então, no local de aplicação da lógica, coloca-se o nome da variável criada seguida por "<-" para atribuir um valor desejado à ela.
    Exp.:
        Inicio
            nome <- "Guilherme"

### COMANDO DE ENTRADA
Servem para RECEBER algum tipo de dado do usuário e salvá-lo para ser reutilizado depois.

#### leia ()
        `--->>> recebe o conteúdo que o usuário digitar e salva dentro da variável que foi informada dentro dos parenteses.
    Exp.:
        escreva ("Qual seu nome?")
        leia (nome)
    
    igual à:
        em JAVASCRIPT:
            let nome = prompt("Digite seu nome:")
        em JAVA:
            Scanner scanNome = new Scanner(System.in);

            System.out.print("Digite seu nome:");
            String nome = scanNome.nextLine();
        em C:
            scanf("%d", nome);
                    `--->>> onde o %d vai mudar de acordo com o tipo de dado.

## OPERADORES ARITMÉTICOS

- Adição (+)
    Exp.:
        5 + 2 = 7
- Subtração (-)
    Exp.:
        5 - 2 = 3
- Multiplicação (*)
    Exp.:
        5 * 2 = 10
- Divisão (/)
    Exp.:
        5 / 2 = 2.5
- Divisão Inteira (\)
    Exp.:
        5 \ 2 = 2 (pega apenas a parte inteira do resultado da divisão, sem contar os "quebrados")
- Exponenciação (^)
    Exp.:
        5 ^ 2 = 25
- Módulo ou Resto (%)
    Exp.:
        5 % 2 = 1 (resta 1 na divisão de 5 dividido por 2)

OBS.: Assim como na matemática, os operadores são resolvidos com base nas prioridades.
    Exp.:
        1° - Parenteses ()
        2° - Exponenciação ^
        3° - Multiplicação e Divisão * e /
        4° - Adição e Subtração + e -

### FUNÇÕES ARITMÉTICAS

- Abs = retorna o Valor Absoluto, ou seja, o número sem sinal.
    Exp.:
        escreva(Abs(-8)) = 8
        escreva(Abs(10)) = 10
    igual à:
        em JAVA e em JAVASCRIPT:
            Math.abs(-8);
- Exp = retorna o valor da Exponeciação desejada, se informada os dois números desejados...
    Exp.:
        Exp(3,2) = 3² = 3 x 3 = 9
    igual à:
        em JAVASCRIPT:
            Math.pow(3,2);
            ou
            3 ** 2;
        em JAVA:
            Math.pow(3,2);
... ou de "e" em Exponecianção, ou seja, o valor de "e" elevado a "x", omde é tem o valor fixo de 2,718 e será multiplicado por ele mesmo na quantidade vezes de "x".
    Exp.:
        Exp(1) -> e¹ -> 2,718
        Exp(2) -> e² -> 7,389 (2,718 x 2,718)
    igual à:
        em JAVA e em JAVASCRIPT:
            Math.exp(1) = 2.718

- Int = retorna o Valor Inteiro do número, removendo a parte decimal (os "quebrados" depois da vírgula).
    Exp.:
        Int(7.9) = 7
        Int(3.1) = 3
    igual à:
        em JAVA:
            int valor = (int) 7.9; -> resultado é 7
        em JAVASCRIPT:
            Math.trunc(3.1) -> resultado é 3
        OBS.: em JAVASCRIPT, existe o "parseInt" que NÃO É A MESMA COISA, pois apenas transforma de texto para número inteiro.
OBS.: também conhecido como TRUNCAMENTO (truncar) essa função NÃO ARREDONDA o número, ela apenas DESCONSIDERA OS DECIMAIS.
    Exp.:
        7.9 arredondado é igual à 8.
        7.9 truncado é igual à 7.
- RaizQ = retorna a Raiz Quadrada de um número.
    Exp.:
        RaizQ(9) = 3
        RaizQ(25) = 5
    igual à:
        em JAVA e em JAVASCRIPT:
            Math.sqrt(9) = 3
- Pi = retorna o valor de Pi.
    Exp.:
        2 * Pi = 2 * 3,14
    igual à:
        em JAVA:
            double area = Math.PI * 5 * 5;
        em JAVASCRIPT:
            let area = Math.PI * 5 * 5
OBS.: como PI é um valor constante, não se coloca entre parenteses.
    Exp.:
        Math.PI() = ERRADO!
        Math.PI = CERTO!
- Sen = retorna o Seno de um ângulo, em RADIANOS (rad).
    Exp.:
        Sen(30) = seno de 30 RADIANOS
    igual à:
        em JAVA e em JAVASCRIPT:
            Math.sin(30);
- Cos = retorna o Cosseno de um ângulo, em RADIANOS (rad).
    Exp.:
        Cos(30) = cosseno de 30 RADIANOS
    igual à:
        em JAVA e em JAVASCRIPT:
            Math.cos(30);
- Tan = retorna a Tangente de um ângulo, em RADIANOS (rad).
    Exp.:
        Tan(30) = tangente de 30 RADIANOS
    igual à:
        em JAVA e em JAVASCRIPT:
            Math.tan(30);
- GraupRad = essa função transforma o de GRAUS para Radianos, facilitando assim o cálculo acima.
    Exp.:
        GraupRad(180) = PI
        GraupRad(90) = PI / 2
        GraupRad(30) = PI / 6
    igual à:
        em JAVASCRIPT:
            multiplica o angulo desejado vezes o PI dividido por 180.
                Exp.:
                    let rad = 30 * (Math.PI / 180)
        em JAVA:
            Math.toRadians(30);
OBS.: após aplicar a fórmula de transformação de Graus para Radianos, aí sim pode aplicar as funções de Seno, Cosseno e Tangente.

## OPERADORES RELACIONAIS
        `--->>> servem para comparar variáveis ou expressões. Eles são:
            - maior que (>)
            - menor que (<)
            - maior ou igual a (>=)
            - menor ou igual a (<=)
            - igual a (=)
            - diferente de (<>)

## OPERADORES LÓGICOS
        `--->>> servem para comparar valores lógicos.
            - E/AND
            - OU/OR
            - NÃO/NOT

## ORDEM DE PRECEDÊNCIA
        `--->>> é a ordem que segue para ser resolvidos os operadores:
                1°: Aritiméticos
                        1°: ( ) (entre parenteses)
                        2°: ^ (exponencial)
                        3°: * e / (multiplicação e divisão)
                        4°: + e - (adição e subtração)
                2°: Relacionais
                        TODOS
                3°: Lógicos
                        1°: E
                        2°: OU
                        3°: NÂO

## ESTRUTURAS CONDICIONAIS
        `--->>> estipulam blocos de códigos que serão executados a partir de escolhas ou condições.

### ESTRUTURA SIMPLES
        `--->>> quando a estrutura de repetição possui apenas UMA única condição.

#### SE (se)
        `--->>> informa o que acontecerá SE condição informada for verdadeira.
    Igual à:
        em Java, C e Javascript:
            - if

    Quando vai inserir uma condição, deve-se informar a condição esperada entre "( )".
        Exp.:
            se (idade >= 18) entao
                escreva ("Maior de idade")

#### ENTÃO e FIMSE (entao/fimSe)
        `--->>> sinaliza o começo e o final do processo de condicional.
                Exp.:
                    se (idade >= 18) entao
                        escreva ("Maior de idade e pode votar")
                    fimSe
                    senao se ((idade < 18) e (idade >=16)) entao
                        escreva ("Menor de idade mas pode votar")
                    fimSE
                    senao
                        escreve ("Menor de idade e não pode votar")
                    fimSe
        OBS.: além da identação, que é muito importante para organizar o código, o "entao" e o "fimSe" não podem deixar de ser usados pois são o que informam onde começa e onde termina as condições. Cada "se", "senao se" e "senao" precisam ter seu "fimSe".
    Igual à:
        em Java, C e Javascript:
            - são utilizados "{ }" para informar onde começa e onde termina.

### ESTRUTURA COMPOSTA
        `--->>> quando a estrutura de repetição possui MAIS DE UMA condição alvo e uma saída para caso essa condição não seja verdadeira.

#### SENÃO (senao)
        `--->>> informa o que acontecerá caso a condição informada não for verdadeira. Diferente do "se", o "senao" não precisa ser atribuído uma condição, pois será executada em qualquer resultado que não seja a escolhida em "se".
    Igual à:
        em Java, C e Javascript:
            - else

### ESTRUTURA ANINHADA
        `--->>> quando há uma estrutura de repetição DENTRO de outra estrutura de repetição.

#### SENÃO SE (senao se)
        `--->>> quando há mais de uma condição, pode se informar com o "senao se". Assim como o "se", o "senao se" precisa ser atribuído uma condição.
    Igual à:
        em Java, C e Javascript:
            - else if

### ESTRUTURA CONDICIONAL ESCOLHA/CASO
        `--->>> quando o número de escolhas é utilizada quando há muitos testes com valores numéricos simples.
            Exp.:
                Escolha (variável)
                    Caso valor
                        Executar...
                    Caso valor
                        Executar...
                    Outro caso ------>>> usado para caso nenhum dos casos citados acima aconteçam.
                        Executar...
                FimEscolha
    Igua à:
        em C:
            - switch/case

    OBS.: Essa estrutura não serve para uso com estruturas de comparação.

## ESTRUTURAS DE REPETIÇÃO
        `--->>> usada para repetir um bloco de código de acordo com uma ou mais condições.

### ENQUANTO/FAÇA
        `--->>> escolhe uma condição e, ENQUANTO essa condição for verdadeira, o código estipulado será realizado, caso contrário, a repetição se encerrará e voltará ao código.
            Exp.: 
                Enquanto (expressão) faça
                    Código...
                FimEnquanto

    Igual à:
        em C:
            - while

    OBS.: para evitar repetição (loop) infinita, acrescente dentro do bloco de código algo que faça mudar o valor da condição, senão ela nunca ficará falsa.
            Exp.: 
                quantidade <- 0
                Enquanto (quantidade < 5) faça
                    Código...
                    quantidade <- quantidade + 1
                FimEnquanto
                        `--->>> a "quantidade" começa em zero, mas a cada repetição é acrescentado +1, e quando ela chegar à 5, que não é "< 5", a repetição irá se encerrar.

### REPITA/ATÉ
        `--->>> o bloco de código informado será executado, pelo menos uma vez, até que a condição seja verdadeira.
            Exp.:
                Repita
                    Código...
                Ate (expressão)

    Igual à:
        em C:
            - do/while
