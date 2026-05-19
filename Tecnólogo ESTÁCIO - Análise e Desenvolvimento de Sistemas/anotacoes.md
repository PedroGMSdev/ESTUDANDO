__**ANÁLISE E DESENVOLVIMENTO DE SISTEMAS**__

# FUNDAMENTOS DE REDES DE COMPUTADORES

## REDES DE COMPUTADORES E A INTERNET

### REDES DE COMPUTADORES
    `--->>> podem ser definidas como um conjunto de módulos processadores interligados por um sistema de comunicação, capazes de trocar informações e compartilhar recursos.

### INTERNET
    `--->>> é um conjunto de rede de computadores que opera, basicamente, utilizando o protocolos TCP e IP, que interconecta bilhões de dispositivos de computação ao redor do mundo. Basicamente, uma rede conectada à outras redes.

#### BORDA DA REDE ou SISTEMAS FINAIS
    `--->>> dispositivos que vão executar algum tipo de aplicação ou serviço que a internet oferece.
        Exp.:
            - smartphone
            - computador
            - smarTV
    esses dispositivos, conhecidos também como "CLIENTES", vão fazer requisição de dados de um SERVIDOR.

#### NÚCLEO DA REDE
    `--->>> rede de interconexão, onde os dados irão circular.
        Exp:
            - roteadores
            - switches
            - enlaces

#### REDE DE ACESSO
    `--->>> pontos de comunicação que permitirão acesso ao núcleo da rede.
        - Meios guiados: quando você se utiliza de um meio físico, tipo um cabo de fibra óptica, cabo de rede (aqueles azuis)...
        - Meios NÃO guiados: quando você se utiliza de um meio wireless, ou sem fio, como um moldem, wi-fi, 5G...

DICA: sempre que desenvolver uma aplicação, informar para o cliente o mínimo de conexão que ele precisa para o funcionamento esperado do serviço.

#### ATRASO ou RETARDO
    `--->>> tempo que demora pra uma informação chegar de um local A para o local B. Entre a máquina A e a máquina B existem vários fatores que podem causar o retardo, como a propagação da internet, servidores, as configurações da própria máquina...

##### TIPOS DE ATRASO
    - Processamento Nodal:
        `--->>> atraso nos processamentos dos equipamentos.
            Exp.:
                tempo que vai levar no roteador para ser executado o processamento e definir que caminho será seguido.
    - Fila (esperando por transmissão):
        `--->>> quando mais de uma máquina tá enviando processamentos, eles precisarão ser executados em fila de envios, na ordem de envio.
    - Transmissão:
        `--->>> a velocidade de transmissão de informação, ou o tempo que leva para colocar a informação no canal de comunicação.
    - Propagação:
        `--->>> diretamente ligado à distância entre o ponto inicial e o ponto final, podendo ser influenciado também pelo tipo de cabo de transmissão.

##### PERDA
    `--->>> quando no decorrer da transmissão você term perda de dados do total. Você pode classificar essa perda quando, separando mentalmente esse arquivo completo em seguimentos, você analisa:
        - não se admite perda:
            `--->>> quando não se pode perder nenhum desses segmentos, senão algo não funcionará como esperado.
        Exp.:
            - e-mail:
                `--->>> se não chegar todas as informações o e-mail não poderá ser construído perfeitamente, prejudicando sua legitimidade.
        - se admite perda:
            `--->>> quando, mesmo perdendo alguns desses segmentos, a funcionalidade final será atendida.
        Exp.:
            - streaming:
                `--->>> se não chegar alguns pixels da tela, não influenciará no assistir, não impedindo de saber o que está se passando. 

OBS.: caso o pacote de dados chegue à uma fila, que no caso tem uma capacidade finita para receber, e essa fila esteja cheia, sem espaço para armazenar o pacote, esse pacote será descartado e perdido.

##### ATRASO FIM A FIM
    `--->>> são aquelas aplicações que eu dependo de uma resposta rápida, como mandar uma mensagem e ser respondido na hora, como uma transmissão ao vivo ou um bate-papo, onde se demorar para receber o pacote de dados influencia na fluidez.

##### VAZÃO
    `--->>> refere-se ao volume de dados que são transmitidos ao mesmo tempo.

#### ARQUITETURA DE CAMADAS
