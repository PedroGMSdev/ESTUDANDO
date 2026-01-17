PROJETO TRADUTOR

Site de tradução de texto, ministrado pela DEV CLUB.

**HTML**

1: <textarea> é uma caixa para digitar um texto.
2: no <select> serão colocada as opções que serão escolhidas.
3: dentro do SELECT, entre tag de abertura e fechamento, serão colocada as opções que estarão disponíveis, usando o <option>. Entre a tag de abertura e fechamento, será colocado a opção.

**CSS**

1: ajuste de tamanho do background (fundo).
2: ajusta o fundo ao centro.
3: sinaliza a altura que o body terá que ocupar.
4: alinha os itens no sentido vertical (de cima pra baixo) na posição de centro
5: alinha os itens no sentido horizontal (de um lado para outro) na posição de centro, que em conjunto com **align-items** faz tudo ficar bem no meio da tela.
6: ajustar largura
7: arredondamento das bordas.
8: espaçamento interno das extremidades da caixa.
9: borda azul que fica ao clicar no input. **none** faz com que essa borda azul não exista.
10: espaçamento entre itens da caixa.

**JAVASCRIPT**

OBS.: FUNÇÕES é um pedacinho de código que só é executado quando é chamado.

1: essa variável vai consultar no HTML (document) e selecionar a área de classe "informarTexto" (querySelector(".informarTexto"))

OBS.: como está sendo escolhido a classe ao invés do id, precisa ser colocado o "." antes do nome da classe, assim como quando vai personalizar no CSS.

DICA: Buscar no Google por "mymemory translation", entrar no site "https://mymemory.translated.net", entrar na aba de "API de tradução" e copiar o link da chave de utilização (https://api.mymemory.translated.net/get?q=Hello World!&langpair=en|it).

2: essa variável vai pegar o PADRÃO de acesso da API que vai acessar o site (https://api.mymemory.translated.net/get?q=), traduzir o conteúdo desejado (substituir o "hello World!" pelo VALOR (.value) do conteúdo da variável criada para selecionar o que foi digitado) e traduzir (&langpair=) do português (pt-BR) para (|) o inglês (en).

3: **fetch** é uma ferramenta do Javascript para entrar em contato com um servidor. **await** vai fazer com que a variável ESPERE o fetch acessar o endereço indicado na variável associada (enderecoAPI).

4: colocar o **async** antes da função vai dizer para a função que precisa esperar a espera do await finalizar para ser executada.

5: vai receber a variável e transformá-la em formato **json**, que é um formato mais bonito, mais próximo do visto normalmente, mais familiar. 