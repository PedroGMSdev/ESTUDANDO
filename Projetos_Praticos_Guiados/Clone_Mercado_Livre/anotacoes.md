# ANOTAÇÕES SOBRE O PROJETO

*HTML*

1 - alt=" ": é o nome que vai dar para a imagem. Mas, caso vc não adicione a imagem, irá ficar só o nome que você deu.
2 - src=" ": anexa o link da imagem, direto da internet, sem precisar salvar. Você escolhe a imagem, clica com o botão direito e seleciona "Copiar link da imagem" e cola no espaço.

Dica: procurar no Google por Font Awesome para pegar referencias de ícones para personalizar a página. Uma indicação é a <cdnjs> que, selecionando a versão 6.4.0 e copiando e anexando no <head> apenas 1 linha, já te dá uma lista de ícones que você pode precisar, tudo de uma vez.

3 - <section>, assim como o <header> (cabeçalho) é uma sessão do site. Ideial para não encher o html de div's, e tornar um html mais semântico.
4 - <main> (principal) é a sessão principal do site. Assim como o section e header, mantém mais semântico.
5 = <footer> é o rodapé, ou seja, a seção final do site.

Dica: semântizar o HTML deixa mais bonito, mais compreensível e mais profissional.
Ao invés de:            Faça:
    <div>                   <header>
    <div>                   <section>
    <div>                   <main>
    <div>                   <footer>

*CSS*

1 - foi aumentado o heigth pois senão a div ía ficar muito apertada e não daria para ver a imagem.
2 - indica que o tamanho (size) do backgroud vai cobrir toda a caixa.
3 - indica que o background vai se posicionar (position) no centro.
4 - indica que a disponibilização dos elementos vai seguir a direção de coluna, e vai ficar um em cima do outro.
5 - indica que os textos vão ficar embaixo.
6 - grid-template-columns: vai sinalizar que o grid vai ficar disposto em formato de colunas e na quantidade de colunas indicadas (repeat), que no caso serão 3 colunas e cada coluna vai representar 1 fração de espaço (3, 1fr).
7 - gap: 20px; para manter um espaço entre eles.
8 - vai fazer as imagens ficarem todas do mesmo tamanho, ocupando os mesmos espaços.
9 - object-fit: vai fazer as imagens ficarem com o mesmo corte (cover). Outra opção seria deixar as imagens com os cortes originais (contain), mas se tiver imagens com cortes diferentes não serão padronizadas.
10 - caso o nome fosse grande demais, tipo "Smartphone Samsung Galaxy A31", o nome não quebraria a caixa a que seria inserida.

*JAVASCRIPT*

1 - O document é o HTML, o addEventListener é um "ouvinte de eventos" que sinaliza que o Javascript irá ficar prestando atenção nos comandos do HTML para quando a página carregar por completo ('DOMContentLoaded') chamar algum comando (nesse caso, a função).

DOM = Arvore de Elementos do Navegador (tudo o que está na página)
CONTENT = Conteúdo
LOADED = Carregado
(ou seja, quando a página toda estiver carregado por completo = DOMContentLoaded)

2 - sinaliza que o Javascript vai no HTML, procurar (getElementById) o local onde vai colocar os elementos indicados na função (tabelaDeProdutos)
3 - .innerHTML vai colocar/injetar algo no HTML, que no caso é a constante informada antes do ponto.
4 - .map mapeia o local informado (no caso, percorrendo o array), pegando produto por produto.
5 - .join('') vai juntar todo, ou seja, juntando todos os produtos.
6 - .getElementById('') vai buscar o id informado (LEMBRE: ID, E NÃO CLASS) para colocar o que você indicou.
7 - essa contante vai buscar os produtos pelo o que for digitado. Fazendo com que o que foi digitado se converta para letras minúsculas (toLowerCase). 
8 - depois vá buscar nos produtos apenas o que tem aqueles caracteres. Essa ação vai até product, procurar pelo product.title, transformar ele em minúscula (toLowerCase)
9 - O Javascript vai ficar de olho no HTML (document) e vai buscar o id "procurar-por"
(.getElementById) e quando visualizar o evento (.addEventListener) "pressionar tecla" ('keypress') vai acionar a função "procurarProduto", apenas se a tecla ENTER for pressionada.


__**PROJETO COMPLETO**__