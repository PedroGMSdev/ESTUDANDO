#			CURSO ALMAVIVA D.I.O.
##	               BACK-END com JAVA & QA

__________________________________**FUNDAMENTOS DA SINTAXE DE LINGUAGEM JAVA**__________________________________

**PADRÕES DE DESENVOLVIMENTO E CONCEITOS**
OBS.: ao sinalizar a classe, sempre colocar com a primeira letra maiúcula.
        Exp.:
                public class Nome {

                }
em caso de nomes compostos, sempre usar o camel case, e a primeira letra maiúscula.
        Exp.:
                public class MinhaClasse {

                }

OBS.: assim como no Javascript, caso queira fazer um comentário de uma linha, você pode estar utilizando o "//", mas no Java, caso queira fazer um comentário de várias linhas, também conhecido como Documentação ou "Java Doc", pode utilizar o /**, colocar o conteúdo do comentário, depois encerrar com */.
        Exp.:
                /** Esse é
                um comentário
                de várias linhas*/

OBS.: quando declarar uma variável Scanner, esta precisa não só ser informada mas também INICIALIZADA.
        Exp.:
                Criando a variável Scanner de nome "scanner":
                        Scanner scanner; => variável apenas criada.
                Inicializando a variável Scanner:
                        Scanner scanner = new Scanner(System.in); => inicializada e pronta para receber o que for digitado.

OBS.: os tipos das variáveis não precisam ser informados em letras maiúsculas no começo (int, double, float, char), porém, diferente de em Javascript, a STRING não é classificada apenas como um simples tipo de dados mas sim uma classe, e toda classe (assim como Scanner) precisa ser informada com a primeira letra maiúscula.
        Exp.:
                 TIPO           |      INFORMAR
                STRING          |       String
                INTEIRO         |       int
                SCANNER         |       Scanner

OBS.: as variáveis podem ser informadas com "var" desde que depois sejam associadas depois ao tipo.
        Exp.:
                var scanner = new Scanner(System.in);
                        `--->>> informou que a variável vai ser do tipo SCANNER.
                var idade = scanner.nextInt();
                        `--->>> informou que a variável vai ser do tipo INT (inteiro).
                var nome = scanner.next();
                        `--->>> o tipo SCAN sempre recebe o que foi digitado e guarda como STRING.

OBS.: uma constante pode ser informada como "static final" antes do informe para sinalizar que ela não poderá ser mudada.

DICA: é uma boa prática usar letras maiúsculas no nome da CONSTANTE, pois o Java não é sensitive case (não leva em consideração letras maiúculas e minúsculas), assim como o padrão snake case.
        Exp.:
                static final String MENSAGEM_INICIAL = "Qual seu nome?";

**KEYWORDS E TIPOS PRIMITIVOS**
Em Java, existem 8 tipos primitivos de dados:
- Números Inteiros (sem decimais):
        > byte:
                `--->>> Serve para economizar memória em grandes volumes de dados (exp.: arquivos binários, streams). Na prática, quase nunca usa no dia a dia, então evite até ter um motivo claro.
                        Exp.:
                                byte idade = 20;
        > short:
                `--->>> Pode aparecer em sistemas mais antigos ou específicos (exp.: hardware, APIs). Também raramente usado. No mundo real, quase ninguém usa direto.
                        Exp.:
                                short ano = 2026;
        > int (padrão):
                `--->>> Mais utilizado quando for um inteiro "normal". Se não souber qual usar, na dúvida, use int.
                        Exp.:
                                int quantidade = 100;
        > long:
                `--->>> Muito usado para números muito grandes (exp.: timestamps, contadores gigantes, dados financeiros em centavos).
                        Exp.:
                                long populacaoMundial = 8000000000L;
                OBS.: como o long tem uma especificação única devido ao "L" no final do número, ele também pode ser informado apenas como "var" que será reconhecido como "long".
                        Exp.:
                                var numero = 200000L;
                                        `--->>> já reconhecido como tipo "long".
- Números Decimais (com vírgula):
        > float:
                `--->>> Pelo risco de erro em cálculos, passou a ser menos usado, quase nunca sendo usado hoje em dia.
                        Exp.:
                                float preco = 19.99f;
                OBS.: o float tem obrigação de ser informado com o "f" no final do número, caso contrário dará erro, ou terá que ser substituído por "double". Devido a essa obrigação erro, ele també pode ser informado apenas como "var" que é reconhecido como "float".
        > double (padrão):
                `--->>> Pode ser usado com qualquer núemro decimal, e mais utilizado que o float pela sua precisão.
                        Exp.:
                                double salario = 2500.75;
- boolean:
        `--->>> Usado para resultados VERDADEIRO(true) ou FALSO(false). Mais utilizado em condições (if) e em flags (estado ligado/desligado)
                Exp.:
                        boolean ativo = true;
- char:
        `--->>> Utilizado para armazenar letras, geralmente quando são apenas uma, deixando as palavras e frases para as Strings.
                Exp.:
                        char letra = 'A';

ATENÇÃO: os nomes dados a variáveis não podem ser nome de palavras chaves (Keywords), ou seja, nomes que são utilizados por alguma ferramenta da linguagem (new, int, true, false, null, public...)

**TRABALHANDO COM OPERADORES DE ATRIBUIÇÃO E LÓGICOS**
- Atribuição (=)
- Comparação:
        > Igual à (==)
        > Diferente de (!=)
        > Maior que (>)
        > Menor que (<)
        > Maior ou igual à (>=)
        > Menor ou igual à (<=)
- Lógico:
        > AND ou E (&&): as duas opções precisam ser verdadeiras.
        > OR ou OU (||): pelo menos uma das opções precisa ser verdadeira.
        > Negação (!)

**TRABALHANDO COM OPERADORES ARITMÉTICOS**
- Adição (+)
- Subtração (-)
- Multiplicação (*)
- Divisão (/)
- Resto (%)
- Raiz Quadrada (Math.sqrt())
        Exp.:
                a raiz quadrade de 144 =
                `--->>> Math.sqrt(12);
- Exponencial (Math.pow())
        Exp.:
                10 elevado a 2 =
                `--->>> Math.pow(10,2)

OBS.: existe a opção de usar a variável diretamente na operação:
        Exp.: 
                variável += 12
                        `-> mesmo que
                                `-> variável = variável + 12
essa pode ser aplicada com qualquer operador:
        - +=
        - -=
        - *=
        - /=
        - ...

OBS.: existe a posibilidade, muito usada em contadores, de utilizar "++", que significa que será somado +1 no valor da variável.
        Exp.:
                ++variável
                        `-> mesmo que
                                `-> variável += 1
                                        `-> mesmo que
                                                `-> variável = variável + 1
essa fórmula de chama INCREMENTO. Ela também pode ser usada com "--", chamada de DECREMENTO. Porém, não pode ser usada com os demais operadores.

ATENÇÃO: caso você use o operador depois da variável (variável++), estará indicando para o sistema que ele:
        - PRIMEIRO: lerá e apresentará o valor da variável.
        - SEGUNDO: só depois ele somará o +1.
isso, em contadores, pode gerar um erro, pois ele apresentará duas vezes o valor inicial.

**TRABALHANDO COM OPERADORES BITWISE (Bit-a-Bit)**

















.equals --->>> pode substituir o == em um if/else para caso a comparação for de strings. É interessante deixar o "==" para quando for comparado números.




































- quando você cria uma class, você pode estipular argumentos (args) onde serão informados valores.

- Continuar de:
        => Estruturas de Controle em Java