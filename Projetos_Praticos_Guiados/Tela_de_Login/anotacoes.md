# ANOTAÇÕES SOBRE O PROJETO

*HTML*
1 - placeholder: nome que vai ficar dentro do formulário.
2 - type: tipo de informação que será informada naquele campo. Interessante colocar para ter um auto-complete.
3 - type="password": faz com que sinalize que aquele local será informado uma senha, e coloca aqueles pontinhos de privacidade ao digitar (*********). Caso não deseje colocar essas bolinhas, e mostrar o conteúdo da senha, deve ser colocado __type:"text"__.

Dica: para ícones, pode usar (fontawesone.com) ou (unpkg.com).

4 - link href=" ": site de onde puxará algum tipo de informação ou referência. O site descrito nesse ponto é um site de ícones, que será usado no projeto.
5 - <i>: é como coloca um ícone. "bx bxs-user" é a class que precisa ser informado para puxar o ícone que deseja do site informado acima.
6 - type="checkbox": coloca aquelas caixinhas que marcação, onde a pessoa vai selecionar se mantém ativado ou desativado algo. Exemplo: "Lembrar minha senha", "Mostrar senha"...
7 - <label>: vai anexar uma mensagem/palavra ao local.
8 - <a>: adiciona um link. Você pode colocar uma mensagem entre as tags de abertura e fechamento, que será o que aparecerá na tela, ao invés do link.
9 - href="#": se você quiser que aquele link direcione para algum lugar, deve colocar o link do site, caso contrário, colocar # no lugar do link faz com que aquele link não direcione para lugar nenhum.
10 - <button type="submit">: vai fazer com que, quando clicado naquele botão, a ação indicada seja executada.
11 - <p>: adicionar um parágrafo/texto

12 - associa/linka o arquivo CSS que será utilizado para estilizar essa página. De preferencia que esteja dentro da mesma pasta que o arquivo html.


*CSS*
1 - zera as configurações.

Dica: Google Fonts para pegar referência de fontes. E usar <link rel> no <head> para utilizar, ou adicionar direto no CSS.

2 - @import url(): importa o link direto no CSS. Importando o link do Google Fontes direto no CSS.
3 - aciona a fonte copiada no site.
4 - joga o conteúdo para o centro da página.
5 - alinha os itens da caixa no centro.
6 - sinaliza que ocupará a tela toda.
7 - adiciona uma imagem ao fundo da página. Essa imagem deve ser informada qual será e onde é encontrada, de preferência estando na mesma pasta dos arquivos de criação.
8 - para o backgrounder se estender na tela toda.
9 - para centralizar o background. Sempre, independente do tamanho da tela que rendenrizar, será carregado ao centro.
10 - arredonda as pontas das caixas.

Dica: no Google, pesquisando por "Box-shadow", você consegue copiar referencias prontas de box-shadow, até degradês.

11 - mantém a caixa no lugar, mas abre possibilidade de indicar comandos para mexê-la e ajustá-la.
12 - no lugar de selecionar TODOS os inputs da aplicação, modifica apenas os inputs que estão dentro da classe indicada.
13 -  retira a linha que fica quando é selecionado o input.
14 - coloca em uma posição específica.
15 - coloca tudo para a direita, voltando 20 pixels.
16 - o top: faz a ferramenta encontrar o centro informado, e manter o conteúdo abaixo desse centro.
17 - após o top: encontrar o centro e dispor, o tranform: aplica uma movimentação, que ao colocar tranlateY(); informa que será no eixo Y, ou seja, uma movimentação na VERTICAL.
18 - joga os itens da caixa para lados opostos, separando-os.
19 - faz a caixinha do input "Lembrar senha" ter um fundo branco.
20 - faz sumir o underline (_) debaixo do link.
21 - faz aparecer o underline (_) debaixo do link, apenas quando passar o mouse. O efeito underline deixa o conteúdo sublinhado.

Informação: os números informados em _margin_ e _padding_ são aplicados de acordo com a quantidade de vezes que você informa.

> 1 valor -> Aplica a todos os lados
    Exp.: margin: 20px
> 2 valores -> Aplica o primeiro em cima e em baixo, e o segundo dos lados
    Exp.: margin: 20px 30px
> 3 valores -> Aplica o primeiro em cima, o segundo dos lados, e o terceiro embaixo
    Exp.: margin: 20px 10px 30px
> 4 valores -> Aplica (em sentido horário) em cada lado. O primeiro em cima, o segundo à direita, o terceiro embaixo, e o quarto à esquerda.
    Exp.: margin: 10px 30px 12px 33px

22 - aplica um borrado na caixa, deixando ela meio fosca, impedindo de ficar completamente transparente a ponto de ver o que tem atrás perfeitamente.


__**PROJETO COMPLETO**__

