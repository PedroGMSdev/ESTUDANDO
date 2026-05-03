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

__________________________________**ESTRUTURAS DE CONTROLE EM JAVA**__________________________________

**ESTRUTURA CONDICIONAL IF / ELSE / ELSE IF**
- if = se
- else = senão
- else if = senão, se

if (variável e condição){
        apresentar...
} else if (variável e condição){
        apresentar...
} else {
        apresentar...
}

OBS.: melhor usado quando se tem poucas condições, ou uma lógica direta, de sim/não ou poucas variações. Melhor para validações e regras rápidas, e ruim quando começa a virar vários "else if" encadeados.

ATENÇÃO: o ELSE não precisa de uma condição especificada, pois, se todas as outras condições apresentadas falhar ele será apresentado. Sendo assim, é interessante, um programa profissional, que o else seja usado para uma mensagem de erro, já que ele considera todas as outras opções possíveis que não esteja listada nas outras condições.

OBS.: ".equals" pode substituir o "==" em um if/else para caso a comparação for de strings. É interessante deixar o "==" para quando for comparado números.
        Exp.:
                if (variável == 2){}
                        ou
                if (variável.equals("valor")){}

DICA: existe uma ferramenta em if/else que se chama ELVIS OPERATOR, que pode ser usada caso tenha apenas duas opções. Essa ferramenta consiste em colocar "?" uma opção ":" outra opção.
        Exp.:
                var day = option == 1 ? "Domingo" : "Sábado";
                ou seja, vai ser atribuído à variável "day" o valor de "Domingo" se for igual a opção 1, senão, vai ser atribuído o valor "Sábado", se for qualquer coisa diferente da opção 1.
                Então, ou uma coisa ou outra, apenas!

**ESTRUTURA CONDICIONAL SWITH / CASE**
- swith = dependendo de
- case = caso

swith (variável){
        case valor1:
                apresentar...;
        caso valor2:
                apresentar...;
}

OBS.: Mais indicado quando você compara uma variável só, com vários valores possíveis. Melhor para menus, status, enums... ruim para lógicas complexas, condições compostas.

OBS.: quando rodar o SWITH, o programa identificará o caso indicado e rodará a partir dele, até que tenha passado por todos os outros CASEs. Para que isso não aconteça, para que ele rode APENAS o caso que você desejava, você pode indicar um BREAK, que fará ele encerrar o swith.
        Exp.:
                swith (fruta){
                        case 1:
                                System.out.println("Maçã");
                                break;
                        case 2:
                                System.out.println("Banana");
                                break;
                }

OBS.: outra ferramenta no SWITH é o DEFAULT, que indica que se a ação foi qualquer outra diferente das ações informadas, ela também terá sua ação.
        Exp.:
                swith (escolha){
                        case 1:
                                System.out.println("Sim");
                                break;
                        case 2:
                                System.out.println("Não");
                                break;
                        default:
                                System.out.println("Escolha errada");

                }

OBS.: você pode agrupar casos para o mesmo resultado.
        Exp.:
                swith (jutsuNinja){
                        case 1:
                        case 2:
                                System.out.println("Naruto");
                                break;
                        case 3:
                        case 4:
                                System.out.println("Sasuke");
                                break;
                }

OBS.: a configuração do CASE no Swith pode ser escrita atravéz de "->" para sinalizar a ação.
        Exp.:
                swith (semana){
                        case 1 -> System.out.println("Domingo");
                        case 2 -> System.out.println("Segunda");
                        case 3 -> System.out.println("Terça");
                        case 4 -> System.out.println("Quarta");
                        case 5 -> System.out.println("Quinta");
                        case 6 -> System.out.println("Sexta");
                        case 7 -> System.out.println("Sábado");
                        default -> System.out.println("Opção Inválida");
                }
DICA: essa forma també, pode ser agrupada:
        Exp.:
                case 1, 7 ->{}

OBS.: você pode utilizar um swith para atribuir valor à uma variável.
        Exp.:
                var variavel = swith (option){
                        case 1 -> "Pedro"
                        case 2 -> "Guilherme"
                }

**ESTRUTURA DE REPETIÇÃO FOR**
- for = para

OBS.: indicado para quando você sabe quantas vezes vai repetir. Melhor para listas, arrays, loops contados... forçar FOR quando não sabe quantas vezes vai repetir, não sabe o limite, fica um código feio.

OBS.: em JAVA, as condições do FOR precisam ser divididas por ";".
        Exp.:
                for (var i = 1; i < 10; i++){
                        System.out.println(i);
                }

**ESTRUTURA DE REPETIÇÃO WHILE / DO WHILE**
- while = enquanto
- do while = faça enquanto

while (condição){
        execute...
}
ou seja, enquanto a condição não for atendida, será repetido a execução.

OBS.: WHILE é muito usado quando você não sabe quantas vezes vai rodar. Melhor para esperar algo acontecer, mas pode virar um loop infinito se vacilar.

do {
        execução...
} while (condição);
ou seja, faça PELO MENOS UMA VEZ e depois repita até atingir a condição.

OBS.: use DO WHILE quando a ação precisa acontecer antes da verificação. Melhor para menus e input de usuário, mas quase sempre é subtituível por WHILE, então, só use quando fizer sentido.












































- quando você cria uma class, você pode estipular argumentos (args) onde serão informados valores.

- Continuar de:
        => Estruturas de Controle em Java
                => Exercícios