#        CURSO EM VÍDEO
## CURSO DE LÓGICA DE PROGRAMAÇÃO

__________________________________**ALGORÍTMOS**__________________________________

**COMANDO DE SÁIDA**
Servem para EXIBIR informações na tela.

- escreva(" ") = escreve o comando na tela
    igual à:
        - System.out.print(" ") em JAVA

- escreval(" ") = escreve o comando e salta uma linha
    igual à:
        - System.out.println(" ") em JAVA
        - console.log(" ") em JAVASCRIPT

O comando de saída pode exibir um mensagem desejada entre aspas, exibir uma variável sem precisar das aspas, ou a CONCATENAÇÃO que é a junção das duas.
    Exp.:
        - escreva("mensagem")
        - escreva(variavel)
        - escreva("mensagem", variavel)

**VARIÁVEIS**
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

**TIPOS DE VARIÁVEIS**
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

**DECLARAÇÃO E ATRIBUIÇÃO**
Ao declarar no local de variáveis, coloca-se o nome desejado para a varíavel, dois pontos e o tipo dela.
    Exp.:
        var
            nome: caracter
E então, no local de aplicação da lógica, coloca-se o nome da variável criada seguida por "<-" para atribuir um valor desejado à ela.
    Exp.:
        Inicio
            nome <- "Guilherme"

**COMANDO DE ENTRADA**

