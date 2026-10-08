# **CADEIRA**: INTRODUÇÃO A PROGRAMAÇÃO DE COMPUTADORES

## **MÓDULO**: SUPER TRUNFO EM C: FUNDAMENTOS E TÉCNICAS AVANÇADAS
### ORGANIZAÇÃO E CLAREZA NO CÓDIGO
    `--->>> Para uma melhor organização e clareza no código, algumas práticas são indicadas, como:
        - Indentação: espaçamento, ou tabulação, entre cada linha, facilitando a identificação da hierarquia.
        - Comentários: utilizados para identificar funções, explicar tarefas ou fazer notas de lembranças.
        - Nomes Significativos: que facilita a identificação posterior do que se faz, através da nomeação clara do local.

### PROCESSO DE PROGRAMAÇÃO
    `--->>> A ordem de um processo de programação é:
        1. Entendimento do Problema
        2. Planejamento da Solução
        3. Codificação
        4. Compilação (Tradução)
        5. Teste
        6. Depuração
        7. Manutenção

### PASSOS PARA EXECUTAR UM PROGRAMA EM C
    1. Escrita do código-fonte
    2. Compilação
    3. Ligação (Linking)
    4. Execução

### CARACTERÍSTICAS DA LINGUAGEM C
    1. Sintaxe Simples
    2. Portabilidade
    3. Controle de Baixo Nível
    4. Bibliotecas Ricas

### VARIÁVEIS
    tipo NOME = valor;

#### TIPO DE VARIÁVEL
    - int (Números Inteiros)
        Exp.:
            int idade = 25;
    - float (Números Decimais)
        Exp.:
            float altura = 1.75;
    - double (Números Decimais - Mais Casas Decimais)
        Exp.:
            double peso = 90.3;
    - char (Letra/Caracteres)
        Exp.:
            char letra = 'A';
        OBS.: sempre colocar o valor entre ASPAS SIMPLES (' ')
    - char [] (Nome/String/Array)
        Exp.:
            char nome[20] = "Pedro";
        OBS.: Sempre expecificar a quantidade de caracteres que terá na string ([20]) e no valor colocar entre ASPAS DUPLAS (" ")

### ENTRADA E SAÍDA DE DADOS
    - printf (Saída)
        Exp.:
            printf("Olá , ", nome);
        OBS.: O especificador pode interpolar junto com as variáveis usando "%" e a letra indicadora da variável e acordo com seu tipo, como:
            - %d (imprime um inteiro no formato decimal)
            - %i (equivale a %d, também imprime um inteiro no formato decimal)
            - %f (imprime um número de ponto flutuante no formato padrão)
            - %e (imprime um número de ponto flutuante na notação científica)
            - %c (imprime um único caractere)
            - %s (imprime uma cadeia de caractere/string)
                Exp.:
                    printf("A idade do %s é: %d\n", nome, idade);

        OBS.: caso você tenha um número decimal muito grande, e queira restringir a quantidade de caracteres que apareceram depois da vírgula, você coloca "." e a quantidade de casas que quer apresentar, entre o "%" e o "f".
            Exp.:
                printf("O valor da divisão de X e Y é de %.2f", divisao);

    - scanf (Entrada)
        Exp.:
            scanf("%d", &idade);
                `--->>> vai pegar o valor informado no formato "%d" e associará à variável "idade".
        OBS.: tirando o formato %s (string), quando for associar um valor escaneado à uma variável, deve-se colocar o "&" antes da informação da variável, para que seja ligada.

        OBS.: as opções de string e caractere tem peculiaridades que podem gerar erros:
            - string: o "scanf" identifica, quando informado uma string, o uso do espaço para finalizar um informe. Então, caso precise ler um nome composto, ela pegará apenas o primeiro nome informado. A saída para isso é usar uma outra função de leitura, tipo a de leitura de arquivos "get".
            - caractere: assim como a string, o leitor de caractere reconhece o espaço e o ENTER como caractere informativo. Então, caso antes do informe do caractere tenha outro informativo (como "informe idade", depois "informe letra"), você der um ENTER pra validar a informação do anterior, esse ENTER será lido como o valor informado para %c. A saída para isso é utilizar uma função, assim como na string, ou utilizar um ESPAÇO no informativo do formato do "scanf".
                Exp.:
                    scanf(" %c", letra);

### SOLUÇÃO ESTRUTURADA

#### FERRAMENTAS PARA ESTRUTURAÇÃO
        `--->>> usa uma linguagem natural, muito útil para:
                    - planejamento eficiente
                    - visualização da lógica
                    - identificação de problemas
                    - comunicação clara
##### FLUXOGRAMA
        `--->>> representação gráfica de um algorítmo. 
##### PSEUDOCÓDIGO
        `--->>> Algorítmo escrito em palavras. Algumas vantagens do pseudocódigo, como o PORTUGOL, são:
                    - simplicidade
                    - clareza
                    - foco na lógica

#### MODULARIDADE
        `--->>> criar funções ou módulos para facilitar a solução de problemas, dividindo em subproblemas menores.

#### ABSTRAÇÃO
        `--->>> foca em aspectos mais importantes de um problema, ignorando os detalhes irrelevantes.

### OPERADORES MATEMÁTICOS EM C
        `--->>> os operadores básicos da linguagem C, são:
                    - soma (+)
                    - subtração (-)
                    - multiplicação (*)
                    - divisão (/)

### OPERADORES DE ATRIBUIÇÃO EM C
        `--->>> utilizados para atribuir valores simples ou com algum tipo de operação em conjunto às variáveis, os operadores de atribuição da linguagem C, são:
                    - atribuição simples (=)
                    - atribuição com soma (+=)
                    - atribuição com subtração (-=)
                    - atribuição com multiplicação (*=)
                    - atribuição com divisão (/=)

### OPERADORES DE INCREMENTO E DECREMENTO
        `--->>> utilizados para modificar uma variável em 1, de acordo com a intenção, e muito utilizados em contadores, esses operadores são:
                    - incremento (++): soma +1 ao valor.
                    - decremento (--): diminui -1 ao valor.
                    - pré-incremento (++variavel): quando você quer fazer o encremento antes de utilizar o valor da variável.
                    - pré-decremento (--variavel): quando você quer fazer o decremento antes de utilizar o valor da variável.

### MODIFICADORES DE TIPOS DE DADOS EM C
        `--->>> melhoram como controlar, armazenar e manipular os dados. Eles são:
            - unsigned: podem armazenar apenas valores positivos, incluindo o zero. Por não considerar os negativos, ele aumenta a quantidade que se pode ser armazenada de valores positivos em duas vezes.
                Exp.:
                    - int numeroPositivo = 3000000000 (três milhões)
                        `--->>> valor excede o limite de um "int" normal.
                    - unsigned int numeroPositivo = 3000000000
                        `--->>> agora aceito pois ignorou os números negativos e dobrou a capacidade de armazenamento positivo.
                OBS.: ao usar esse modificador, para sinalizá-lo passa a usar "%u" ao invés de "%d".
            - long: aumenta a capacidade de armazenamento dos tipos de dados primitivos. Há também o "long long" que duplica a capacidade do long.
                Ex.:
                    - int numero = 2147483647;
                        `--->>> valor máximo de um inteiro
                    - long int numero = 2147483647;
                        `--->>> valor que excederia ao limite normal, porém, o "long" para o "int" passou a não servir mais, pois nos últimos anos o "int" passou a ter o mesmo armazenamento de "long int" (4 bytes).
                    - long long int numero = 2147483648;
                        `--->>> após a atualização do "int" o "long long" passou a representar o aumento para números inteiros.
                OBS.: o especificador é o "%l" e o especificador do primitivo usado, ou o "%ll" + primitivo.
                    Exp:
                        - long int -> %ld
                        - long long double -> %llf
            - short: quando você trabalha com valores menores.
            - signed: indica que a variável trabalha com valores positivos e negativos. Esse é basicamente o padrão já trabalhado nas variáveis.

### OPERADORES RELACIONAIS (OU COMPARATIVOS)
        `--->>> permitem comparar variáveis ou valores, e estabelecer relações em diferentes condições. Retornam valores booleanos (Verdadeiro ou Falso), com base nas estruturas que foram testadas. Os principais deles são:
            - maior que (>)
            - menor que (<)
            - maior ou igual a (>=)
            - menor ou igual a (<=)
            - igual a (==)
            - diferente de (!=)
        OBS.: em C, ao invés de retornar "true" e "false", a linguagem retorna os números "0" para FALSO e "1" para VERDADEIRO.

OBS.: a CONVERSÃO IMPLÍCITA faz a conversão de um tipo para outro automaticamente para poder trabalhar os dois juntos, como o exemplo de um manuseio de um variável "int" e uma "float", que comumente transforma a "int" para "float" para fazer algum cálculo, comparação ou junção de valores.

OBS.: "fazer um CASH" é a ação de transformar (converter) um tipo de dado intencionalmento, chamado de CONVERSÃO EXPLÍCITA, onde ao adicionar o tipo antes do valor, ele será convertido.
    Exp.: 
        printf("%d > %f", numero1, (int)numero2);
                `--->>> ao colocar o "(int)" antes de "numero2", está indicando que essa variável deverá ser convertida para o tipo inteiro antes de ser trabalhada.

## **MÓDULO**: SUPER TRUNFO EM C: DESENVOLVENDO A LÓGICA DO JOGO
### ESTRUTURAS DE DECISÃO

#### DECISÃO SIMPLES
        `--->>> quando se tem apenas uma alternativa para ver se é verdadeira, e se não for apenas segue o fluxo.
            Exp.:
                se idade for menor que 18, bloquear conteúdo.

#### DECISÃO COMPOSTA
        `--->>> quando apresenta mais de uma alternativa para verificar se é verdadeira, e mais de uma ação a ser executada.

#### IF/ELSE (SE/SENÃO)
        `--->>> muito usado quando não se tem um número exato de possibilidades.
                
### OPERADORES LÓGICOS
        `--->>> permitem comparar mais de um critério na condição. Eles são:
            - E (&&): quando dois critérios precisam ser verdadeiros para que a condição seja ativada.
            - OU (||): quando pelo menos uma dos critérios precisam ser verdadeiros para que a condição seja ativada.
            - NÃO (!): inverte o valor da variável, para considerar se é verdadeiro. Se for falso passa a ser verdadeiro, e se for verdadeiro passa a se falso.
        OBs.: em C, "FALSE" é representado pelo número zero, e "TRUE", normalmente, pelo número 1. Mas, às vezes pode ser representado por algum outro número diferente de zero, nas inversões de "NOT".

#### PRECEDENCIA DE OPERADORES
        `--->>> informa a ordem de resolução e comparação dos operadores. Segue a ordem de prioridade:
            1º: --> "()" e "[]" (resolvendo o primeiro da esquerda para a direita)
            2º: "!", "-" e "++" "--" <-- (resolvendo o primeiro da direita para a esquerda)
            3º: --> "*", "/" e "%" (resolvendo o primeiro da esquerda para a direita)
            4º: --> "+" e "-" ->  resolvendo o primeiro da esquerda para a direita
            5º: --> "<", "<=", ">" e ">=" (resolvendo o primeiro da esquerda para a direita)
            6º: --> "==" e "!=" (resolvendo o primeiro da esquerda para a direita)
            7º: --> "&&" (resolvendo primeiro da esquerda para a direita)
            8º: --> "||" (resolvendo primeiro da esquerda para a direita)
            9º: "=", "+=", "-=", "*=", "/=" e "%=" <-- (resolvendo primeiro da direita para a esquerda)
            10º: --> "," (resolvendo primeiro da esquerda para a direita)

#### CONDIÇÕES ANINHADAS
        `--->>> quando uma condição está dentro de outra, criando uma hierarquia de verificações.
            Exp.: 
                if (condicao1){
                    if (condicao2){
                        
                    }
                }

#### ESTRUTURAS DE DECISÃO ENCADEADAS
        `--->>> verificam várias condições sequencialmente, usando "if/else" sem estar uma dento da outra. Essa é, por assim dizer, a estrutura mais usada de "if/else", onde se uma condição não for verdadeira, tenta a outra, e se nenhuma das demais forem, a última é executada.
            Exp.:
                if (condicao1){

                } else if (condicao2){

                } else {

                }

#### SWITCH/CASE
        `--->>> muito utilizada quando se sabe a quantidade de possibilidade a se levar em conta.
            Exp.:
                switch (variavel){
                    case valor1:
                        Executar...
                    break;
                    case valor2:
                        Executar...
                    break;
                    default:
                        Executar...
                }
        OBS.: se a variável for uma string ou caractere, não se pode esquecer de colocar os valores esperados entre aspas.

##### BREAK
        `--->>> utilizado para informar que, se aquela opção for executada, deve-se encerrar o "switch" ali e continuar o fluxo. Sem o "break", os demais comandos das outras opções também serão executados.

##### DEFAULT
        `--->>> utilizado como uma alternativa para caso nenhuma das possibilidades anteriores tenham sido executadas.

### OPERADOR TERNÁRIO EM C
        `--->>> é uma forma de escrever if/else de uma forma compacta, sem mudar sua funcionalidade, baseando-se em uma única condição. É chamado de ternário porquê envolve 3 partes:
            - uma condição
            - um valor se a condição for verdadeira
            - um valor se a condição for falsa
                Como:
                    condição ? valor-se-verdadeiro : valor-se-falso;
                Exp.:
                    idade >= 18 ? printf("Maior de idade.\n") : printf("Menor de idade.\n");
                        `--->>> se  condição for verdadeira, primeira ação, senão, segunda ação.

## **MÓDULO**: MOVIMENTAÇÃO DE PEÇAS DE XADREZ

### ESTRUTURAS DE REPETIÇÃO
        `--->>> permitem execução repetidas de instuções, cruciais para programas eficazes e de fácil manutenção, evitando retrabalho ou milhares de linhas repetidas no código.

#### WHILE
        `--->>> ENQUANTO uma condição verdadeira (a condição é booleana) para ser executada, e termina quando essa condição se torne falsa.
            Estrutura:
                while (condição){

                }
            Exp.:
                int i = 1;
                while (i <= 5){
                    printf("%d\n", i);
                    i++; ----->>> INCREMENTO
                }
    OBS.: para evitar o loop infinito, dentro das repetições precisa ter um modificador da variável, senão aquele bloco nunca parará de se repetir. No caso acima, o INCREMENTO está sendo usado para aumentar um valor até que a variável fique diferente da condição.
        
#### DO/WHILE
        `--->>> essa variação do "while" diz que, mesmo que a condição seja falsa, a funcionalidade será executada, pelo menos uma vez, ENQUANTO a condição for verdadeira.
            Estrutura:
                do {

                }while (condição);

#### FOR
        `--->>> o "for" é uma estrutura que tem começo, meio e fim, tendo sempre um tamanho expecificado.
        DICA: se você não souber exatamente quantas vezes será repetida, não deve realizar o "for".
            Estrutura:
                for (inicialização;condição;incremento){

                }
                 `--->>> a estrutua define o valor inicial (inicialização), define a condição booleana a ser alcançada e indica o incremento ou decremento para que o loop infinito não seja atingido.
            Exp.:
                for (int i = 1; i <= 5; i++){
                    printf("%d", i);
                }
                 `--->>> para "i" que é igual a 1, enquanto "i" for menor ou igual a 5, execute o "printf", e ao final, acrescente +1.

### LOOPS ANINHADOS
        `--->>> quando é colocado um loop dentro de outro loop, muito usado para:
            - algorítmos de força bruta (como nos algorítmos de ordenação)
            - matrizes
            - criptografia e segurança
    OBS.: para cada loop externo (loop da primeira estrutura) será executado por completo o loop interno (loop da segunda extrutura). Ou seja, se a primeira estrutura precisar se repetir 5 vezes e a segunda estrutura 4 vezes, a cada 1 repetição do externo o de dentro se repetirá 4, totalizando 5 repetições do externo e 20 do interno.

### LOOPS AVANÇADOS
        `--->>> loops onde muitas variáveis são inicializadas, testadas e atualizadas ao mesmo tempo, dentro de um único loop.
            Exp.:
                for (int i = 0, j = 10; i++, j--){

                }

#### LOOPS COM CONDIÇÕES MULTIPLAS
        `--->>> loops que utilizam mais de uma condição para determinar quando devem continuar ou parar.
            Exp.:
                for (int i = 0, j = 0; i < 5 && j > 5; i++, j--){

                }

#### LOOPS COM ATUALIZAÇÕES COMPLEXAS
        `--->>> loops em que a variável de controle é modificada de maneira mais sofisticada, não apenas por encremento ou decremento. Esses loops frequentemente utilizam expressõs condicionais, cálculos matemáticos ou funções para alterar o valor da variável de controle a cada iteração.
            Exp.:
                for (int i = 0; i < 100; i+= (i % 2 ==0) ? 1 : 2){

                }

##### CONTINUE
        `--->>> quando chega na iteração informada, a execução é pulada, indo para a próxima execução.

##### BREAK
        `--->>> faz encerrar imediatamente a iteração assim que a condição for atingida, mesmo que haja outras condiçõe a serem testadas.
            Exp.:
                for (int i = 0; i < 10; i++){
                    if (i == 5) continue;
                            `--->>> pula a iteração quando "i" é "5". Nesse caso, quando "i" é "5", o "continue" pula a impressão.
                    if (i == 8) break;
                            `--->>> sai do loop quando o "i" é "8", terminando o loop.
                }

#### PROCEDIMENTOS
        `--->>> assim como as funções em Javascript, os "Procedimentos" são um bloco de código que é criado para, quando for chamado, executar o conteúdo já pré-definido, ajudando a reutilizar código.
            Exp.:
                void imprimirMensagem(){
                    printf("Olá, mundo!\n");
                }
                int main(){
                    imprimirMensagem();
                    
                    return 0;
                }
                        `--->>> criado fora do "int main(){ }", quando for chamado vai executar esse código.
        OBS.: os Procedimentos são blocos que NÃO RETORNAM resultado, apenas imprimem ou executam algo.

#### RECURSIVIDADE
        `--->>> diz-se quando a função chama a si mesmo.
            Exp.:
                void recursivo(int numero){
                    if (numero > 0){
                        printf("%d \n", numero);
                        
                        recursivo(numero - 1);
                                `------>>> aqui, a função chama a si mesma de novo, dentro da própria função, ou seja, a função vai chamar o comando pra executar a função. Isso pode se tornar um loop, mesmo que não usando as estruturas de loop.
                    }
                }

## **MÓDULO**: JOGO DE BATALHA NAVAL

### ARRAYS
        `--->>> vetores são um modo de armazenar uma coleção de elementos do mesmo tipo em locais de memória, lado a lado.
        
#### VETORES
        `--->>> Pode-se dizer que, se uma variável é uma caixa, um "vetor" é um armário horizontal com vários espaços.
            Exp.:
                int numeros[5] = {10,20,30,40,50};
                        `--->>> o "[5]" informa que esse vetor terá 5 casas.

#### MATRIZES
        `--->>> uma "matriz", assim como os vetores, podem ser vistos como armários, porém multimensional, ou seja, com linhas e colunas de armários.
            Exp.:
                int tabela[3][3] = {
                    {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}
                };
                        `--->>> o "[3][3]" informa que essa matriz terá 3 casas na horizontal e 3 casas na vertical.

##### CHAMANDO UM ARRAY
        `--->>> quando você vai chamar o array, deve-se informar o nome e a posição que deseja buscar.
                Exp.:
                    nome[3][0];

    OBS.: a busca por um valor em um array começa da posição "0", então, quando você buscar uma colocação pode usar a base de:
        VALOR QUE DESEJA - 1 = VALOR INFORMADO PARA BUSCAR POSIÇÃO.
                Exp.:
                    int numeros[10] = {1,2,3,4,5,6,7,8,9,10};

                    printf("%d", numeros[5]);
                            `--->>> o resultado retornará 6, pois as posições começam do 0.

    OBS.: ao criar um array de strings, em C, deve-se colocar um "*" na frente do nome do array, para diferenciar de um array de char.
            Exp.:
                char *nomesAlunos[5]

### MATRIZES E LOOPS DE REPETIÇÃO
        `--->>> muito utilizado para resolver problemas complexos e ajudar a criar as tabelas, diminuindo o trabalho manual.

#### INFORMANDO CONSTANTES DE QUANTIDADE (#DEFINE)
        `--->>> ao utilizar o comando "#define" no começo do códifo, você cria um valor reutilizável para chamar sempre que quizer. Você pode usar essa ferramenta para fixar um valor padrão para as colunas e linhas das matrizes, e chamá-las depois.
            Exp.:
                #include <stdio.h>

                #define LINHAS 5
                #define COLUNAS 5
                        `--->>> aqui você está criando duas constantes (uma chamada LINHAS e a outra COLUNAS) e atribuindo o valor "5" para cada uma delas.

                int main(){
                    int matriz[LINHAS][COLUNAS];
                            `--->>> aqui você está chamando a constante, então o "LINHAS" e "COLUNAS" serão substituídos pelos valores informados na criação da constante, transformando a matriz em "matriz[5][5];".

                    for (int i = 0; i < LINHAS; i++){
                                `--->>> aqui foi atribuído a condição o valor estipulado em "LINHAS".
                    }

                    return 0;
                }

### MATRIZES E CONDICIONAIS
        `--->>> melhoram a eficiência do código, além de permitir aplicar diferentes lógicas na matriz. Condicionais ajudam a evitar erros, como acessar índices fora dos limites. Nos loops aninhados, simplificam a manipulação de dados, como modificação, contagem e substituição dos valores da matriz.

# QUESTÕES
**----------------------------------CORRIGINDO QUESTÕES--------------------------------------------**