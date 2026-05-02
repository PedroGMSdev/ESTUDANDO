## CONCEITOS, FUNDAMENTOS E OBSERVAÇÕES

# *HTML*

## --------------- ESTRUTURA BASE HTML
    <!DOCTYPE html>
    <hmtl>
        <head>
        </head>

        <body>
        </body>
    </html>

### TAG DE IDIOMA
Tag colocada dentro da abertura de TAG html:
    lang=" "
        Exp.:
            <!DOCTYPE html>
            <html lang="pt-br">
                    `--->> sinaliza que idioma do site será PORTUGUÊS do BRASIL
                <head></head>
                <body></body>
            </html>
                    
## -------------------------------------------- TAGS HEAD --------------------------------------------
A "cabeça" do site, onde ficam as configurações comportamentais, ou seja, as coisas que não aparecem na tela do site.

### <meta charset=" ">
            `--->> sinaliza o PADRÃO DE CARACTERES trabalhado nesse site. Nesse caso (UTF-8), o padrão de caracteres da América Latina, onde se usa acentuações e outros caracteres.
    OBS.: Essa TAG não possui fechamento.
        Exp.:
            <meta charset="UTF-8">

### <title></title>
            `--->> sinaliza o TÍTULO DA PÁGINA, ou seja, o nome que ficará na aba do site.
        Exp.:
            <title>Curso de HTML5</title>

### <link rel="stylesheet" href=" ">
            `--->> linkagem com o arquivo css, que será colocado entre " ".

## -------------------------------------------- TAGS BODY --------------------------------------------
As TAGs que fazem parte do visual do site, ou seja, tudo que aparece na tela do site.

### <div></div>
            `--->> cria uma "caixa" divisória

### <a></a>
            `--->> cria uma linkagem, ou uma ancoragem. Você pode mascarar o link escrevendo algo entre as TAGs, que ficará em evidência e destacará o local onde será clicado.
    OBS.: deve-se ser indicada na TAG de abertura a referência, ou seja, o link que será redirecionado ao clicar, através do href=" " e colocado o link desejado entre " ". Se for um link externo, ou seja, um site que já existe, não se deve esquecer de manter o http.
        Exp.: 
            <a href="https://www.youtube.com/watch?v=WX9vucyEcJs&list=PLHz_AreHm4dlAnJ_jJtV29RFxnPHDuk9o&index=15">Aula 12 - Curso HTML5 - Curso em Vídeo</a>
        caso a linkagem seja com uma página própria deve-se descrever o arquivo e a pasta, caso esteja em pasta diferente da raiz.
        Exp.:
            <a href="pagina2.html">Página 2 do site</a>
    DICA: ao criar um link, quando o usuário clicar no local indicado, a página será redirecionada para o link que foi especificado. Caso você tenha interesse que o usuário permaneça na sua página, e seja aberto outra aba com o link indicado, você pode, ainda na TAG de abertura, acrescentando TARGET e escolhendo a especificação "_blank" você direciona o conteúdo do link para outra aba.
        Exp.:
            <a href="pagina2.html" target="_blank"></a>

### class=" "
        `--->> cria uma identificação para o local indicado, chamado CLASSE.

### id=" "
        `--->> cria uma identificação ÚNICA para o local indicado, chamado ID.

### OBS.: uma CLASSE pode ser repetida em vários elementos, mas um ID é único, não podendo ser atribuído à outro elemento.

### <span></span>
        `--->> evidencia um local, facilitando o trabalho de modificação ou atribuição de identificadores nele.

## TAGS SEMANTICAS
Essas TAGs deixam o html mais semântico, ou seja, mais organizado.

### <header></header>
            `--->> informa a parte do site equivalente ao CABEÇALHO.
    OBS.: o HEADER não obrigatoriamente precisa ser usado apenas uma vez. Ele pode ser usado também para sinalizar um cabeçalho de artigo, um cabeçalho de sessão...

### <section></section>
            `--->> informa a área principal do site.

### <aside></aside>
            `--->> informa a área do conteúdo secundário do site, geralmente usado para conteúdos laterais ou periféricos.

### <footer></footer>
            `--->> informa a área de rodapé do site.

### <figure></figure>
            `--->> agrupa elementos visuais como imagens, gráficos, trechos de códigos, ilustrações, tabelas.

### <nav></nav>
            `--->> sinaliza um menu de navegação

### <article></article>
            `--->> sinaliza a sessão de ARTIGO, que é onde fica especificações, artigos e notícias do site.

## TAGS DE MULTIMÍDIA

### <img src=" ">
            `--->> adiciona uma imagem. Entre " " será descrito a localização da imagem.
    OBS.: Essa TAG não possui fechamento.
        Exp.:
            <img src="pasta/imagem.png">
    OBS.: essa TAG serve para quando a imagem está salva na pasta do projeto, onde entre " " será colocado o percurso nas pastas que o site terá que percorrer para encontrar a imagem. Não esquecer de colocar a descrição do tipo de arquivo da imagem também. Caso a imagem seja tirada direto da internet, colocar entre " " link de endereço completo, copiando com um click com o botão direito do mouse e selecionando a opção "Copiar endereço da imagem".
        Exp.:
            <img src="https://example.com/imagem.png">

### <figcaption></figcaption>
            `--->> pode ser usada dentro de <figure> fornecendo uma legenda para a imagem.
        Exp.:
            <figure>
                <img src="grafico.png" alt="Gráfico de vendas">
                <figcaption>Vendas ao longo de 2025</figcaption>
            </figure>

## TAGS DE TABELA

### <table></table> 
            `--->> cria um local de tabela.
### <caption></caption>
            `--->> indica a legenda da tabela, ou seja, o título da tabela.
### <tr></tr>
            `--->> sinaliza uma linha da tabela, ou table rows.
### <td></td>
            `--->> sinaliza uma coluna da tabela, também conhecida por CÉLULA, ou seja, em quantas partes a linha da tabela é dividida. Ou table data.
    OBS.: utilizando a opção ROWSPAN na TAG de abertura de TD e especificando quantos espaços ele pegará verticalmente na tabela, você espande a quantidade de células que será ligadas a ele.
        Exp.:
            <td rowspan="2">Carro</td>
                      --------------------------          
                      |          -> Popular    |          ----------------------
                      |         /              |          |       | Popular    |
                      | Carro -                |          | Carro |------------|
                      |         \              |          |       | Utilitário |
                      |          -> Utilitário |          ----------------------
                      --------------------------   
    OBS.: utilizando a opção COLSPAN na TAG de abertuda de TD e especificando quantos espaços ele pegará horizontalmente na tabela, tomando o lugar das células.   
        Exp.:
            <td colspan="2"></td>
                    ---------------------------
                    |       Duas Rodas       |
                    --------------------------
                    | Bicicleta |   Monark   |
                    --------------------------
                    |   Moto    |   Honda    |
                    --------------------------
                    |       Quatro Rodas     |
                    --------------------------
                    |   Carro   | Chevrolet  |
                    --------------------------                    
                    | Caminhão  |  Mercedes  |
                    --------------------------


## TAGS DE LISTAS

### <ul></ul>
            `--->> lista não ordenada, ou unordered lists

    OBS.: as listas não ordenadas tem 3 tipos diferentes de ordenação, quando colocada type=" " dentro da TAG de aberturta. Os tipos são:
            type="square"
                    `--->> transforma o caractere de ordenação em quadrado
            
            type="circle"
                    `--->> transforma o caractere de ordenação em círculo com a borda preta e o meio branco
                
            type="disc"
                    `--->> transforma o caractere de ordenação em bolinha toda preta

### <ol></ol>
            `--->> lista ordenada, ou ordered lists

    OBS.: as listas ordenadas tem 3 tipos diferentes de ordenação, quando colocada type=" " dentro da TAG de aberturta. Os tipos são:
            type="1"
                    `--->> ordenação numérica
                Exp.:
                    1.Thatianny
                    2.João
                    3.Lucas
                    4.Pedro
                    5.Guilherme

            type="a"
                    `--->> ordenação alfabética minúscula
                Exp.:
                    a.Thatianny
                    b.João
                    c.Lucas
                    d.Pedro
                    e.Guilherme

            type="A"
                    `--->> ordenação alfabética maiúcula
                Exp.:
                    A.Thatianny
                    B.João
                    C.Lucas
                    D.Pedro
                    E.Guilherme

            type="i"
                    `--->> ordenação alfabética romana minúscula
                Exp.:
                    i.Thatianny
                    ii.João
                    iii.Lucas
                    iv.Pedro
                    v.Guilherme

            type="I"
                    `--->> ordenação alfabética romana maiúscula
                Exp.:
                    I.Thatianny
                    II.João
                    III.Lucas
                    IV.Pedro
                    V.Guilherme

    OBS.: caso coloque um typo diferente, ou não especifique nenhum tipo, a lista tomará por padrão a ordenação numérica.

    DICA: há a opção de escolher onde a lista começará utilizando START logo após o TYPE e especificando em qual posição ele irá começar.
        Exp.:
            <ol type="A" start="3">
                =>  C.Pedro
                    D.Guilherme
                    E.Martins
    OBS.: o START recebe apenas números, sinalizando a coloção que irá iniciar, ou seja 3 = terceira colocação = letra C.

### <li></li>
            `--->> itens da lista, ou list items

    OBS.: você pode colocar uma lista dentro de outra lista:
        Exp.:
            <ol>
                <li>Carros</li>
                <li>Motos</li>
                    <ol>
                        <li>Titan</li>
                        <li>Yamaha</li>
                    </ol>
                <li>Bicicleta</li>
                <li>Avião</li>
            </ol>

## TAGS DE TEXTO

### <h> - TÍTULOS

    <h1></h1>-----
    <h2></h2>     |
    <h3></h3>     |----->> HIERARQUIA DE TÍTULOS
    <h4></h4>     |
    <h5></h5>     |
    <h6></h6>-----
### <hgroup></hgroup>
            `--->> faz um agrupamento de títulos
        Exp.:
            <hgroup>
                <h1></h1>
                <h2></h2>
            </hgroup>

### <p></p>
            ` --->> PARÁGRAFO

### <br>
            `--->> quebra de linha. A cada <br> colocado, uma linha é pulada. Você pode dar vários ENTERs, mas o html não reconhecerá nenhum.
    OBS.: essa TAG não possui fechamento mas, caso aplique uma abertura e fechamento, pode-se especificar um texto entre eles.

### &nbsp;
            `--->> aplica um espaçamento extra no local. A cada &nbsp; colocado, um espaçamento extra é colocado. Você pode dar vários espaçamentos, mas o html só reconhecerá um.
    OBS.: essa TAG não possui fechamento e nem < >.

### <wbr>
            `--->> aplica uma quebra em palavras grandes, para melhorar a formatação de texto.
        Exp.:
            super-humano
                => super-<wbr>humano
                    => super-
                       humano
    OBS.: Em palavras grandes, sem hífem, o WBR quebra a palavra mas não acrescenta hífem, como o correto pela língua portuguesa.

    DICA: se quiser quebrar um endereço de e-mail ou site, use WBR. Se quiser quebrar palavras, use &SHY;.

### &shy;
            `--->> aplica a quebra da palavra, assim como o WBR, mas aplica o hífem, como manda a língua portuguesa.
        Exp.:
            vídeoconferência
                wbr = vídeocon
                      ferêmcia
                &shy; = vídeocon-
                        ferência

### <hr>
            `--->> aplica uma quebra horizontal com uma linha de uma ponta a outra do container.

### <b></b>
            `--->> negrito (bold).
        
### <i></i>
            `--->> itálico.

### <em></em>
            `--->> além de colocar a letra em itálico, sinaliza para o html que você quer dar uma ênfase semântica na palavra.

### <del></del>
            `--->> passa um risco no meio da palavra. Antes utilizada na TAG <s></s>.

### <sub></sub>
            `--->> cria uma formatação de "subescrito"

### <sup></sup>
            `--->> cria uma formatação de "sobrescrito"

### <iostream></iostream>
            `--->> sinaliza que aquele trecho deve ser apresentado como formatação web, não como texto normal. Ou seja, se ele for escrito como um código ou TAG, não será acionado a função do código.

### <code></code>
            `--->> sinaliza que aquele trecho deve ser apresentado como código, não como texto normal. Ou seja, se ele for escrito como um código, não será acionado a função do código.

### <pre></pre>
            `--->> em conjunto com a <code>, sinaliza um local préformatado, e diz que deve ser exibido igual foi escrito.
            
### SÍMBOLOS ESPECIAIS
        Alguns caracteres especiais podem ser encontrados no teclado, mas alguns não conseguem ser escritos no site a menos que use códigos.
            
#### Símbolos de Moedas:
            &pound;
                `--->> símbolo da moeda de Libra
            &yen;
                `--->> símbolo da moeda de Yene, do Japão
            &euro;
                `--->> símbolo da moeda de Euro
            &copy;
                `--->> símbolo de Copyright
            &reg;
                `--->> símbolo de Marca Registrada, ou Referência
            &trade;
                `--->> símbolo de Trade Marc
#### Símbolos Aritméticos:
            &lt;
                `--->> menor que
            &gt;
                `--->> maior que
            &le;
                `--->> menor ou igual a
            &ge;
                `--->> maior ou igual a        
            &permil;
                `--->> símbolo do permil, ou seja dividido por mil (assim como porcento é dividio por cem)
            &sum;
                `--->> símbolo de soma, ou Sigma Maiúsculo
            &infin;
                `--->> símbolo de infinito
            &times;
                `--->> símbolo de multiplicação
            &plusmn;
                `--->> símbolo de mais ou menos
            &oplus;
                `--->> símbolo de mais dentro de uma circunferência
            &radic;
                `---> símbolo de radiciação, ou raiz quadrada
            &ne;
                `--->> símbolo de diferente de
#### Letras Gregas:
            &delta;
                `--->> letra Delta minúscula
            &Delta;
                `--->> letra Delta maiúscula
            &lambda;
                `--->> letra Lambda minúscula
            &Lambda;
                `--->> letra Lambda maiúscula
            &omega;
                `--->> letra Ômega minúscula
            &Omega;
                `--->> letra Ômega maiúscula
            &phi;
                `--->> letra Phi minúscula
            &Phi;
                `--->> letra Phi maiúscula
            &sum;
                `--->> letra Sigma maiúsculo
#### Setas:
            &larr;
                `---> seta para a esquerda, ou left arrow
            &rarr;
                `---> seta para a direita, ou right arrow
            &Rarr;
                `---> seta ESPECIAL para a direita
            &uarr;
                `---> seta para cima, ou up arrow
            &darr;
                `---> seta para baixo, ou down arrow
            &harr;
                `---> seta para esquerda e direita, ao mesmo tempo
#### Naipes de Cartas:
            &spades;
                `--->> Naipe de Espadas
            &clubs;
                `--->> Naipe de Paus
            &hearts;
                `--->> Naipe de Copas
            &diams;
                `--->> Naipe de Ouros

# *CSS*

## OBS.: toda vez que for trabalhar no CSS com uma classe, é colocado um ponto e o nome da classe:
    Exp.:
        .menu {

        }
    quando o elemento trabalhado for um id, é colocado um # antes do nome do id:
    Exp.:
        #meuId {
            
        }

## DICA: quando trabalhar com especificações lembrar que elas seguem os números informados da seguinte maneira:
    Exp.:
        margin: 20px 10px;

    - 20px; => um valor informado
            `--->> aplica o valor aos quatro lados.
                Exp.:
                    topo (top) = 20px
                    direita (right) = 20px
                    baixo (bottom) = 20px
                    esquerda (left) = 20px

    - 20px 10px; => dois valores informados
            `--->> aplica o primeiro valor para cima e baixo e o segundo valor aos lados.
                Exp.:
                    topo = 20px
                    direita = 10px
                    baixo = 20px
                    esquerda = 10px

    - 20px 10px 5px; => três valores informados
            `--->> aplica o primeiro valor para cimam, o segundo valor aos lados e o terceiro valor para baixo.
                Exp.:
                    topo = 20px
                    direita = 10px
                    baixo = 5px
                    esquerda = 10px

    - 20px 10px 5px 1px; => quatro valores informados
            `--->> aplica o primeiro valor para cimam, o segundo valor ao lado direito, o terceiro valor para baixo e o quarto valor para o lado esquerdo.
                Exp.:
                    topo = 20px
                    direita = 10px
                    baixo = 5px
                    esquerda = 1px

    - auto; => substituir o valor por auto
            `--->> aplica um ajuste automático na tela, de acordo com que a tela for sendo diminuída.
                Exp.:
                    20px auto 5px auto;
                        topo = 20px
                        lados = ajuste automático
                        baixo = 5px            

## font-family: 
            `--->> estilo de fonte
        Exp.:
            font-family: arial;
    OBS.: existem mais dois jeitos de mudar a fonte.
            - @font-face { }
                    `--->> escolhe uma fonte que você tenha salvo na sua pasta de criação do site, evidenciando o local e o arquivo baixado.
                        Exp.:
                            @font-face {
                                font-family: 'FonteLogo';
                                src: url("pasta/fonte.otf")
                            }
                        OBS.: 'FonteLogo' vai ser o nome que foi estipulado para a fonte carregada, mas que você pode mudar para outro do seu agrado. Esse nome vai ser colocado no "font-family" de onde você quer mudar a fonte.
                            Exp.:
                                .h1 {
                                    font-family: 'FonteLogo', sans-serif;
                                }
            - <link href=" "> (Linkado no head do HTML)
                    `--->> busca uma fonte em um site externo, como o GOOGLE FONTS. Você salva a referência linkando no seu HTML e importando (@import) no CSS. Depois, é só mudar o "font-family" para o nome da fonte.

## font-weight:
        `--->> espessura da letra.
                - bold;
                        `--->> aplica um negrito.
                - bolder;
                        `--->> aplica algo mais espesso que o negrito.

## font-size: 
            `--->> tamanho da fonte
        Exp.:
            font-size: 30pt;

## color: 
            `--->> especifica a cor da letra
        Exp.:
            color: blue;
    OBS.: outra opção de especificação da cor é:
        o hexadecimal, onde será colocado #, como #a1d3ef, onde:
                    a1 -> sinaliza a quantidade de vermelho
                    d3 -> sinaliza a quantidade de verde
                    ef -> sinaliza a quantidade de azul
        o rgb, como rgb (35, 124, 135), onde:
                    35 -> sinaliza a quantidade de vermelho
                    124 -> sinaliza a quantidade de verde
                    135 -> sinaliza a quantidade de azul
        o rgba, como rgb (35, 124, 135, 0.5), que além do mesmo padrão rgb, o "a" define a opacidade:
                    35 -> sinaliza a quantidade de vermelho
                    124 -> sinaliza a quantidade de verde
                    135 -> sinaliza a quantidade de azul
                    0.5 -> sinaliza a opacidade, indo de 0 a 1, sendo 0 totalmente transparente e 1 totalmente sem opacidade.
            
text-shadow 
            `--->> aplica sombra no texto
        Exp.:
            text-shadow: 2px 2px 2px;

## text-align:
            `--->> faz o alinhamento do texto em relação à caixa.
                    - center;
                            `--->> alinha o texto ao centro.
                    - left;
                            `--->> alinha o texto à esquerda.
                    - right;
                            `--->> alinha o texto à direita.

## vertical-align:
            `--->> faz o alinhamento vertical do texto.
                    - top;
                           `--->> alinha o texto mais para cima.
                    - middle;
                            `--->> alinha o texto ao meio.
                    - bottom;
                            `---> alinha o texto mais para baixo.

## text-decoration:
            `--->> aplica modificações no texto, como:
                    - underline;
                            `--->> sublinhado
                    - overline;
                            `--->> linha em cima da palavra
                    - line-through;
                            `--->> linha riscando no meio da palavra
                    - none;
                            `--->> palavra sem decoração nenhuma.

list-style:
            `--->> vai pegar a lista e trabalhar os marcadores dela.
                    - none;
                            `--->> sinaliza que s marcadores da lista serão retirados.

## text-transform:
            `--->> transforma o texto do local indicado.
                    - uppercase;
                            `--->> transforma todo o texto em LETRAS MAIÚSCULAS.

## display:
            `--->> modifica a configuração de disposição dos itens na caixa em questão.
                    - inline-block;
                            `--->> dispõe os itens em uma unica linha, um do lado da outra.
                    - block;
                            `--->> dispões os itens em blocos flutuantes.
                    - none;
                            `--->> dispõe os itens de forma oculta.

float:
            `--->> muito utilizado em "display: block;", aplicando o FLOAT(flutuar) você dá o comando para os BLOCOS(block) do display indicado para que fiquem flutuanto, especificando o lado que deseja que fique.
        Exp.:
            float: left;
                    => flutuar, se posicionar, à esquerda.

clear: both;
            `--->> vai limpar toda a configuração já aplicada aquele local indicado anteriormente por outras seções.

padding:
            `--->> aplica um espaçamento dentro da caixa indicada.
                Exp.:
                    padding: 10px;

## margin:
            `--->> aplica um espaçamento fora da caixa, afastando ela dos outros elementos.
                Exp.:
                    margin: 20px;

## position:
            `--->> trabalha com a posição do elemento.
                    - relative;
                            `--->> trabalha com a posição do elemento APENAS em relação ao conteúda da caixa que ele se encontra.
                    - absolute;
                            `--->> trabalha com a posição do elemento em relação à TODO O SITE.
                    - fixed;
                            `--->> prende a posição do elemento no ponto indicado e, mesmo que role a página, o elemento se manterá no mesmo local sempre.
                    - static;
                            `--->> prende a posição do elemento no ponto indicado, sem permitir que modifique o local dele.

## transition:
            `--->> trabalha com a transição de efeitos.
                Exp.:
                    transition: background-color 1s;
                            `--->> sinaliza que quando houver uma mudança na cor do fundo, essa transição levará 1 segundo para acontecer.

## border:
            `--->> trabalha com a borda da caixa.
                Exp.:
                    - border-bottom:
                            `--->> trabalha com a parte de baixo da borda da caixa.
                                Exp.:
                                    border-bottom: 1px #606060 solid
                                            `--->> sinaliza que:
                                                    - 1px = a espessura da borda será de 1 pixel
                                                    - #606060 = a cor da borda
                                                    - solid = o formato da borda, que pode ser:
                                                                - solid = completa
                                                                - dashed = tracejada
                                                                - dotted = pontilhada
                                                                - ...
                    - border-spacing:
                            `--->> trabalha o espaçamento entre bordar, ou seja, diz quanto de espaço uma borda terá da outra.

height:
            `--->> estipula a ALTURA.
                Exp.:
                    height: 150px;

background:
            `--->> trabalha com o fundo do local indicado.
                    - url (' '):
                            `--->> acrescenta ao fundo uma imagem.
    
DICA: caso uma imagem colocada seja muito pequena, ela se repetirá até preencher todo o background. Para que ela não se repita, você pode usar o NO-REPEAT que fará ela ser usada só uma vez.
    Exp.:
        background: url ('imagem.jpg) no-repeat;
    Você também pode especificar, logo após o comando, a posição que quer que a imagem fique, informando o deslocamento lateral e o deslocamento vertical.
        Exp.:
            background: url ('imagem.jpg) no-repeat 0px 100px;





# *JAVASCRIPT*


# *TYPESCRIPT*


# *JAVA*

## System.out
        `--->>> comando de saída, que indica o que vai ser mostrado na tela.
### System.out.print()
        `--->>> comando de saída. Diz que será informado algo e colocado na tela.
### System.out.println()
        `--->>> comando de saída com quebra de linha. Além de informar algo na tela, ele pula uma linha.
OBS.: a diferença entre PRINT e PRINTLN pode ser diferenciada com um \n.
    Exp.:
        System.out.println("Essa frase vai na primeira linha \n" + "e essa vai ficar na segunda linha.");
### System.out.printf
        `--->> comando de saída que permite intercalar argumentos através do %s. Consegue informar texto e variáveis juntas, cocatenando os resultados que aplicar %s, apenas informando as variáveis (argumentos) em respectivas posições que serão apresentadas, no final do informe.
            Exp.:
                System.out.printf("%s, %s anos é uma idade muito boa!", nome, idade);
        OBS.: assim como o PRINT simples, o PRINTF não quebra linha. Então, caso vá usá-lo e deseje pular uma linha, aplicar o \n no final.
            Exp.:
                System.out.printf("%s, %s anos é uma idade muito boa!\n", nome, idade);

## OffsetDateTime
        `--->>> classe que trabalha com tempo, utilizando os dados reais e sendo atualizado automaticamente, por conta própria.
### OffserDateTime.now()
        `--->>> sinaliza que será trabalhado com os dados reais de AGORA.
#### OffsetDateTime.now().getYear()
        `--->>> sinaliza que será pego o ANO ATUAL para ser trabalhado com ele.

# *BANCO DE DADOS*


# *GIT*

## clear (Ctrl + L)
    Comando dado no terminal para limpar a tela.

## apertar tecla da seta para cima
    Copia o comando dado acima.

## CONFIGURAÇÕES INICIAIS
Abrir o Git Bash apertando com o botão direito em alguma pasta.

### git config --list
    Comando dado no Git Bash que mostra todas as configurações da ferramenta.

### git config --global
    Comando dado no Git Bash que configura o servidor geral.
#### git config --global user.name "Pedro Guilherme Martins"
    Comando para cadastrar o nome do usuário geral, que será atribuído à TODOS os commits feitos, onde será nomeado com o nome que for cadastrado entre " ".
#### git config --global user.email pedroguilherme_ms@yahoo.com.br
    Comando para cadastrar o e-mail do usuário geral, que será atribuídos à TODOS os commits feitos, onde será informado após o comando 'USER.EMAIL'. 
      
### git config user.name
    Comando que mostra o nome de usuário cadastrado.

### git config user.email
    Comando que mostra o e-mail de usuário cadastrado.

### git config init.defaultBranch
    Comando que mostra a Branch padrão.
#### git config init.defaultBranch main
    Comando que muda o nome da Branch padrão, onde o novo nome será o informado após o comando 'defaultBranch'.
#### git config --global init.defaultBranch main
    Comando que muda o nome da Branch padrão a nível geral.

## git init
    Cria um novo repositório local.
ATENÇÃO: Se não especificar a pasta antes de criar um repositório, pode criar um repositório na USER do PC que irá classificar como "conteúdo do repositório" TUDO o que estiver no computador.
### rm -rf .git
    Caso você tenha criado um repositório na pasta errada, você pode estar usando esse comando para apagar o repositório.

## git clone
    Comando dado no terminal para COPIAR um repositório do GitHub. Para clonar o repositório, você deve ir no GitHub, escolher o repositório e copiar o URL e colar no final do comando.
        Exp.: 
            git clone URL-escolhido
    OBS.: Caso o repositório seja um repositório público: PRONTO! CLONE FEITO. Mas, caso o repositório seja privado, precisa:
        - se for seu:
            > informar seu usuário
            > ir em 'Configurações' (Settings), depois no final da página no menu lateral em 'Configurações do Desenvolvedor' (Developer Settings), 'Tokens de Acesso Pessoal' (Personal Access Tokens) também no menu lateral, depois em 'Fichas (clássicas)' (Tokens (classic)), depois 'Gerar Novo Token' (Generete New Token), onde você escolherá 'Gerar Novo Token (clássico)' (Generate New Token (Classic)), que após utilizar sua senha pra validar, será gerado um token que servirá como senha de autorização para copiar o repositório privado.
        - se for de outra pessoa:
            > essa pessoa precisa ir no repositório dela e lhe cadastrar como 'Colaborador'.
            > seguir o processo de informar usuário do repositório e gerar o token.
    ATENÇÃO: Uma vez clonado o repositório, não precisa mais ser clonado na mesma máquina. Caso você volte a trabalhar com aquele repositório, basta utilizar o 'git pull' para puxar as atualizações que não tem na sua máquina. CASO SEJA CLONADO MAIS DE UMA VEZ O MESMO REPOSITÓRIO, A PASTA SERÁ DUPLICADA.
OBS.: outra forma de autenticação é atravéz da chave SSH, que cria uma "chave" e uma "fechadura" oficial, onde a fechadura será o GitHub e a chave será "deixada" no seu computador, logo, toda vez que precisar fazer um clone daquele GitHub (fechadura) por aquele computador (chave) já estará permitido. Para criar essa chave, você deve:
    1: acessar o 'Configurações' (Settings) do GitHub;
    2: procurar no menu lateral a parte de 'Acesso' (Access);
    3: em 'Acesso', selecionar 'Chaves SSh e GPG';
DICA: você pode conferir se no seu computador já possui chaves SSH, indo em Chave SSH, e procurando por 'generating SSH keys' (conectar-se ao GitHub usando chaves SSH) abaixo do nome, selecionando, e procurando por 'Verificar se há chaves SSH'. Após seguir todo o procedimento nna documentação, caso não tenha nenhuma chave cadastrada, você pode gerar uma nova.
    4: em 'Gerando uma nova chave SSH', ainda no 'Conectar-se ao GitHub usando chaves SSH' e seguindo toda a documentação, você cria e utiliza a chave.
    5: após todo o processo de geração e cadastro da chave SSH, quando for clonar o repositório, não copiar mais por HTTP, e sim pela aba de SSH.
DICA: caso você queira mudar o nome do repositório que está clonando, é só, após o comando, informar o novo nome que gostaria de dar.
    Exp.:   
        git clone http://github.com/pedrogmsdev/hello-world.git novo-nome

## DIRECIONANDO PARA A PASTA DESEJADA
    Caso o terminal não esteja na pasta que você quer trabalhar, você pode:
        - ir na pasta que deseja trabalhar, selecionar a pasta que deseja trabalhar ou criar o novo repositório, ou criar a nova pasta, e dentro dela clicar com o botão direito e escolher "Abrir Git Bash Aqui".
        - ou...
### cd ~
    Usar o comando CD, direcionando para a pasta que você deseja trabalhar.
        Exp.:
            cd ~/Desktop/DEV/PROJETOS/meu-projeto

## git log
    Comando dado no Terminal (log = registro) que mostra todos os commits registrados no repositório.
### git log --stat
    Comando dado no Terminal que, além de mostrar todos os commits registrados no repositório, também mostra o que foi feito nele.
### git log --oneline
    Comando dado no Terminal que mostra todos os commits registrados no repositório, mas de uma forma mais simplificada, monstrando quase que apenas o identificador do commit e o nome do commit.
### git reflog
    Mostra um relatório mais detalhados dos commits do repositório, mostrando os feitos, os apagados...

## git status
    Comando dado no Terminal que vai mostrar a comparação de tudo o que tinha antes, no status inicial, e o depois das modificações feitas no momento atual.

__ESTÁGIOS DOS STATUS__
    - Modified (modificado):
        Quando um arquivo que já faz parte do repositório apresentou uma modificação, ainda não salva.
    - Staged (está em área de preparo):
        Quando você quer escolher e sinalizar um arquivo específico dentre os modificados para que apenas ele seja salvo posteriormente.
            [Exp.:
            [   Quando você dá continuidade em um projeto ou está debugando, e faz muitas modificações no respositário todo, mas ao final percebeu que o problema era apenas em um arquivo específico, você usa o staged para sinalizar que apenas as alterações feitas naquele arquivo que deverão ser salvas, sem mexer no outro. Você adiciona esse arquivo ao STAGED com o comando GIT ADD. Apenas os arquivos que estão no STAGED serão salvos no commit.
    - Commit (salvamento):
        Quando tiverem sido feitas todas as alterações desejadas e quiser salvar o progresso.
    - Untracked (sem modificações):
        Quando os arquivos do repositório não tiverem nenhuma alteração, nem sinalização de reserva para staged.

## .gitignore
    Arquivo criado dentro da raiz do projeto, ou seja, na pasta inicial do projeto, onde serão colocados todos os arquivos que não haverá necessidade de serem salvos. Exemplos muito comuns são os arquivos criados pelo NODE.js e Next.js, ao quais podem ser baixados toda vez atravez do comando "npm install" ou até "npm ci".

## git add
    Comando dado no Terminal que vai fazer o arquivo informado subir para o status "Staged", sinalizando que aquele arquivo deverá ser salvo. Para sinalizar o arquivo desejado você coloca o nome dele após o comando, antes de confirmar,
            [Exp:
            [   git add .gitignore
            [       Ao dar o ENTER confirmando o comando, o arquivo .gitignore subirá para o status de  "Changes to be committed", que é o mesmo status Staged, esperando para ser salvo.

OBS.: você pode adicionar mais de um arquivo no mesmo comando, é só dar espaço e informar o segundo nome do próximo arquivo.
    [Exp.:
    [   git add package-lock.json package.json

## git commit
    Comando dado no Terminal que irá salvar as alterações feitas, NO REPOSITÓRIO LOCAL. Ao confirmar esse comando, abrirá uma tela no "Vim" (editor de texto natural do computador) para que você possar nomear esse commit, de preferência com informações do que foi feito nessa modificação, que ficará salvo e quando chamado o comando de status, aparecerá na listagem.

## git commit -m
    Comando dado no Terminal que irá salvar as alterações feitas, NO REPOSITÓRIO LOCAL, mas sem abrir a janela Vim para nomear o commit. Antes de confirmar o comando, você só precisa informar o nome do commit entre " " ou ' ' e confirmar.
        [Exp.:
        [   git commit -m "adicionar arquivo .nvmrc"

## git diff
    Comando dado no Terminal que pede para ser identificado a diferença (diff = diferença) entre o ponto inicial (último salvamento) e o ponto atual (depois das novas alterações), onde será sinalizado o arquivo que foi modificado e o conteúdo que foi alterado nele.

## git commit --amend
    Comando dado no Terminal que sinaliza que o conteúdo que estiver no status Staged será emendado (amend = emendar), ou melhor, adicionado, ao repositório criado antes deste. Esse comando é utilizado caso o usuário não queira criar um novo commit com a nova alteração, apenas ACRESCENTAR ao que já fez. Porém, ao fazer esse comando a nova modificação e o commit anterior se juntarão em um novo commit, ficando com o mesmo nome do commit anterior mas criando um novo identificador, sinalizando que o commit anterior não existe mais.

ATENÇÃO: usar esse comando com cuidado, de preferência apenas quando o conteúdo for uma alteração de acrescentar.

OBS.: 'origin/main' é como é chamado o início do projeto, que começa ao criar o repositório no GitHub. Ao fazer um PULL, esse repositório é salvo no seu computador como 'local/main', possibilitando que você trabalhe e modifique esse repositório como quiser. As configurações feitas nesse repositório local não contabilizará no repositório de origem, podendo ser descartado ou perdido caso não seja salvo. Ao consutar o status do seu repositório, seus commits locais salvos estarão com a mensagem "YOUR BRANCH IS AHEAD OF 'ORIGIN/MAIN' BY x COMMIT", que quer dizer que sua ramificação (branch = ramificação), ou seja, as mudanças que você fez na versão salva no repositório local, está diferente do arquivo original por x commits de diferença. Caso tenha interesse de salvar as alterações, até para utilizá-las fora do repositório local.

## git push
    Comando dado no Terminal que envia o conteúdo commitado e guardado (subindo) no repositório local para a nuvem (Repositório GitHub).

OBS.: o processo correto de salvamento e subida para a nuvem é seguir a ordem
        - git add (sobe o arquivo modificado para o status Staged e sinaliza que deverá ser salvo)
        - git commit (salva os arquivos que estão em Staged)
        - git push (sobe os commits feitos para a nuvem)

OBS.: um COMMIT é imutável. Quando você usa o AMEND em um commit, você NÃO está MODIFICANDO aquele commit, você está pegando ele e a alteração que você fez e JUNTANDO EM UM NOVO COMMIT ÚNICO, ao invés de criar um novo commit para a alteração e ficar com 2 commits.
    [Exp.:
    [   Situação inicial:
    [       - commit 1abc02
    [       - alteração desejada
    [           comando git commit
    [   Situação final:
    [       - commit 1abc02
    [       - commit 7oiu98
    [porém, se usar o "git commit --amend":
    [   Situação inicial:
    [       - commit 1abc02
    [       - alteração desejada
    [           comando git commit --amend
    [   Situação final:
    [       - commit 5ghj43
ATENÇÃO: É indicado que esse procedimento seja feito enquanto o commit ainda estiver apenas no repositório local, pois, se o commit que você deseja usar o "amend" já tiver sido subido para a nuvem, o "git push" não permitirá, pois, como UM COMMIT É IMUTÁVEL, aquele commit que está salvo no repositório GitHub não poderá mais ser mutável.

## git push -f OU git push --force
    Comando dado no Terminal para FORÇAR o push enviar o que tiver no seu repositório local, mesmo que o local esteja diferente do de origem, como na situação acima, obrigando ele a sobrepor a condição de origem.

ATENÇÃO: como o "push --force" obriga o GitHub à sobrepujar o repositório da nuvem pelo conteúdo do repositório local, caso o repositório nuvem tiver conteúdos que o local não tenha, esses conteúdos serão apagados permanentemente. Então, caso você esteja trabalhando em um projeto grande ou em conjunto com outras pessoas no mesmo repositório, você pode acabar apagando permanentemente todo o trabalho já feito.

## git pull
    Comando dado no Terminal para "puxar" as atualizações feitas no repositório origin que não está no seu reposiório local.

## git restore
    Caso você tenha feito alguma alteração não desejada, ou desista da que fez, você pode usar esse comando para restaurar para o último salvamento feito.
ATENÇÃO: tenha cuidado ao usar esse comando, pois ele ignora TODA mudança que você fez, ou seja, caso você quisesse aproveitar algo da modificação, não será possível.

## git reset
    Comando dado no Terminal que descarta o último commit feito.
    DICA: você pode informar quantos commits deseja descartar utilizando, após o comando, o  HEAD~ e informando quantos dos ultimos commits deseja descartar.
        Exp.:
            git reset HEAD~1 => remove o último commit
            git reset HEAD~2 => remove os dois últimos commits
    ou, você pode informar o hash ("chave" indicadora do commit).
ATENÇÃO: caso a chave do commit for a de 10 commits atrás, os 10 últimos commits serão removidos, então, CUIDADO.
### git reset --soft
    Remove os commits indicados, mantendo os arquivos em STAGING, prontos para um novo commit. O commit informado some, mas todas as mudanças ficam em STAGING, esperando serem commitadas.
### git reset --mixed
    Remove os commits indicados, mantendo os arquivos no local, mas ainda para que você escolha qual será subido para STAGING. O commit informado some, mas todas as munças ficam no ARQUIVO, esperando ser subido para STAGING, depois ser commitado.
### git reset --hard
    Remove os commits indicados POR COMPLETO. O commit informado some, e todos as mudanças são apagadas do disco, não sobrando nenhum resquício. CUIDADO!
OBS.: o comando "git reset" sem especificação, aciona por padrão o --mixed.
DICA: você pode informar no git reset apenas o ARQUIVO que quer remover do STAGING, informando apenas o nome do arquivo.
    Exp.:
        git reset arquivo-desejado.md

## BRANCHES
    Você pode criar BRANCHES (ramificações) do seu projeto (MAIN) para traballhar sem afetar o projeto. A Branch herda o conteúdo que o Main possui no momento da criação da Branch. Assim, você pode modificar a vontade sem medo de que a Main seja perdida.
### CRIANDO UMA BRANCH
#### git checkout -b
    Comando dado no Git Bash que informa que será trabalhado com uma nova Branch. Após o comando, você informa o nome da nova branch.
        Exp.:
            git checkout -b teste

### git branch
    Comando que lista todas as branches existentes.
#### git branch -v
    Comando que lista o último commit feito em cada uma das branches existentes.

### JUNTAR AS BRANCHES
#### git merge
    Comando que junta o conteúdo das branches, especificando de qual branch você deseja trazer as atualizações.
        Exp.:
            git merge teste

### EXCLUINDO UMA BRANCH
#### git branch -d
    Comando que apaga uma branch. Após o comando, deve-se informar o nome da branch que deseja excluir.
        Exp.:
            git branch -d teste

### COPIANDO APENAS UMA BRANCH
    Utilizando o comando "git clone", colocando o URL do repositório desejado, pode-se informar o que deseja copiar apenas uma branch colocando "--branch" e o nome da branch desejada e informar com "--single-branch" que apenas aquela branch deve ser clonada.
        Exp.: 
            git clone http://github.com... --branch teste --single-branch

## git fetch
    Comando parecido com o "git pull", mas o "fetch" apenas puxa as atualizações do remoto origin, sem salvar no local. Quando trabalhado com muitas pessoas, onde todos atualizam o código a qualquer momento, usar o FETCH pode lhe garantir que você veja as atualizações que foram feitas (utilizando o "git diff main origin/main" que vai informar o que tem de diferente entre os dois, ou seja entre o MAIN e o ORIGIN/MAIN), sem precisar correr o risco de perder o que atualizou. E então, depois de vizualizado, se optar por sobrepor, você pode usar o "git merge" para unir as atualizações.


# *DEPLOY*

OBS.: apesar de estarem ligados, DEPLOY e HOSPEDAGEM não são a mesma coisa. Podemos dizer que a hospedagem é como se fosse um terreno novo com uma casa e o deploy é a mudança que você faz para levar os seus móveis para o novo terreno.

OBS.: alguns sites gratuitos bem indicados para deploys iniciais, ou pelo menos durante estudo, são GITHUB PAGES ou VERCEL.

## Deploy com VERCEL
    Segue o passo a passo para um deploy com a VERCEL.
        Após fazer o cadastro no site da Vercel:
            1- acessar a minha página inicial da Vercel
            2- Procurar "Import Project" ou "Importar Projeto", que irá buscar o projeto direto do GitHub, e selecione "Import".
            3- Selecionar o repositório que deseja e clicar em "Import", ou procurar por "Missing Git repository? Adjust GitHub App Permissions →" e buscar um novo repositório.
            4- Clicar em "Deploy" no final da página.
        Após fazer o deploy, para vizualizar a página hospedada, você vai até a minha página inical,e (após dar umas atualizadas) procurar o projeto deployado, clicar e vai copiar o link "Domains" ou "Domínios", que será o link de envio para outras pessoa acessarem.

OBS.: Caso o conteúdo do repositório for estático, ou seja, sem frameworks, colocar o arquivo index direto na raiz do repositório (solto na pasta inicial) e não dentro de outras pastas.

ATENÇÃO: a Vercel procurará o arquivo "index.html" na pasta raiz para executar. Então, caso seu html principal esteja com outro nome, se subir assim dará erro "404 NOT FOUND", pois ele não encontrará o arquivo raiz. Sendo assim, SEMPRE nomear sempre o arquivo principal, que for subir, como INDEX.HTML!

# *HOSPEDAGEM*