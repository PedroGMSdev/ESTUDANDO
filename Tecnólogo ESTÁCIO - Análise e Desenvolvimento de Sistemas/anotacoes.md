__**ANÁLISE E DESENVOLVIMENTO DE SISTEMAS**__

# FUNDAMENTOS DE REDES DE COMPUTADORES

## REDES DE COMPUTADORES E A INTERNET

### CONCEITOS BÁSICOS

#### REDES DE COMPUTADORES
    `--->>> podem ser definidas como um conjunto de módulos processadores interligados por um sistema de comunicação, capazes de trocar informações e compartilhar recursos.

#### INTERNET
    `--->>> é um conjunto de rede de computadores que opera, basicamente, utilizando o protocolos TCP e IP, que interconecta bilhões de dispositivos de computação ao redor do mundo. Basicamente, uma rede conectada à outras redes.

**COMPONENTES**
    `--->>> pode-se definir a Internet de acordo com seus componentes de Software e Hardware que a formam. Pode-se dizer que ela é formada por três grandes partes:
        1 - Sistemas finais: na qual se encontram hosts, ou os nós.
        2 - Núcleo da Rede: na qual se encontram tecnologias para acesso dos nós aos roteadores.
        3 - Redes de Acesso: na qual se encontram os roteadores.

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

**ISP - Provedor de Serviço de Internet**
    `--->>> organizam os Núcleos de Rede pelos quais os usuários contratam serviços para se conectar à Internet.
        Um exemplo é o ISP REGIONAL, que atua em uma região relativamente pequena (não mais que um município) conectando usuários ou provedores dessa região.

#### REDE DE ACESSO
    `--->>> pontos de comunicação que permitirão acesso ao núcleo da rede.
        - Meios guiados: quando você se utiliza de um meio físico, tipo um cabo de fibra óptica, cabo de rede (aqueles azuis)...
        - Meios NÃO guiados: quando você se utiliza de um meio wireless, ou sem fio, como um moldem, wi-fi, 5G...

DICA: sempre que desenvolver uma aplicação, informar para o cliente o mínimo de conexão que ele precisa para o funcionamento esperado do serviço.

### PARÂMETROS DE AVALIAÇÃO

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

**TIPOS DE ATRASO**
    `--->>> existem 4 tipos de atraso:
        - de Processamento: tempo gasto em um dispositivo para examinar o cabeçalho do pacote e determinar por qual saída deve encaminhá-lo.
        - de Fila: tempo que o pacote passa esperando ser transmitido no ENLACE, ou seja, quanto mais pacotes tem na fila para serem enviados maior será o atraso.
        - de Transmissão: tempo que demora durante o processo de transmissão para ser empurrado (enviado) todo o conteúdo ATÉ O ENLACE, mas não contando com a distância entre os roteadores, e mais com o tamanho do pacote.
        - de Propagação: tempo que demora entre o envio do ENLACE até o NÓ, levando em conta a velocidade do meio físico, como fibra ótica, fios de cobre... esse atraso diz mais em relação à distância percorrida entre os roteadores que o tamanho do pacote enviado.

#### PERDA
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

#### ATRASO FIM A FIM
    `--->>> são aquelas aplicações que eu dependo de uma resposta rápida, como mandar uma mensagem e ser respondido na hora, como uma transmissão ao vivo ou um bate-papo, onde se demorar para receber o pacote de dados influencia na fluidez.

#### VAZÃO
    `--->>> refere-se ao volume de dados que são transmitidos ao mesmo tempo.

### CAMADAS DE PROTOCOLO E MODELOS DE SERVIÇO

#### ARQUITETURA DE CAMADAS
    `--->>> divide as atividades da internet em PROTOCOLOS que definem o formato e a ordem das mensagens trocadas e também as ações realizadas na transmissão e/ou recebimento de uma mensagem ou evento.

OBS.: Protocolos TCP e IP são um conjunto de protocolos criados pela Arquitetura de Camadas, onde o TCP é o protocolo da camada de transporte e IP o protrocolo da camada de rede.

##### MODELO DE REFERÊNCIA OSI
    `--->>> organiza as redes de computadores em camadas, onde cada camada fica responsável por um determinado serviço. Essas camadas, na ordem, são:
        - Aplicação
        - Apresentação
        - Sessão
        - Transporte
        - Rede
        - Enlace
        - Físico

##### ARQUITETURA TCP/IP ou INTERNET
    `--->>> emprega quatro camadas:
        - Aplicação
        - Transporte
        - Inter-rede
        - Intrarrede
    podendo dizer também:
        - Aplicação
        - Transporte
        - Rede
        - Enlace
        - Físico
    onde a camada "intrarrede" é dividida em ENLACE e FÍSICO.

OBS.: o protocolo IP foi criado na década de 1980, facilitando o envio de pacotes entre redes.

OBS.: a primeira rede de internet foi a ARPANet.

#### ENCAPSULAMENTO
    `--->>> é a compactação de informações de camada por camada, onde cada camada fará a criação de um cabeçalho e a compactação de privacidade do conteúdo para que apenas a camada recebedora igual possa receber aqueles dados, evitando vasamento de informações para outras camadas diferentes.
        Exp.:
            Camada de Aplicação para Camada de Aplicação
            Camada de Transporte para Camada de Transporte

### HISTÓRICO DA INTERNET

#### ARPAnet, A PRIMEIRA INTERNET
    `--->>> surgida nos anos de 1960, criada para o exercito, a ARPAnet durou até os anos 90.

#### PROTOCOLO IP
    `--->>> implementado em 1983, o protocolo TCP/IP se tornou o novo padrão de protocolo de máquinas.

## MODELO DE REFERÊNCIA OSI E ARQUITETURA TCP/IP

### DIVISÃO DA ESTRUTURA DAS REDES EM CAMADAS

#### MODELO EM CAMADAS
    `--->>> por ser uma tarefa complexa e que envolve várias funções que precisam ser executadas para garantir uma comunicação eficiente, a estrutura da transmissão de dados foi dividida em camadas que são responsáveis por realizar um conjunto de atividades, tornando o precesso algo menos complexo e tornando a comunicação uma tarefa realizável.

#### ELEMENTOS DA CAMADA
    `--->>> cada camada de arquitetura de redes possui três "elementos" básicos que permitem que as tarefas necessárias para a transmissão de dados sejam corretamente divididas e executadas, sendo eles:
        - Serviço: conjunto de funcionalidades que uma certa camada oferece, como a camada responsável pela verificação de erros de transmissão, ou a camada responsável por determinar o endereço do computador... o serviço diz O QUE a camada faz e NÃO COMO ela faz.
        - Protocolo: responsável por COMO A CAMADA FAZ, sendo assim a implementação do serviço da camada, ou seja, executa o que a camada se propôs a fazer.
        - Interface: ponto de comunicação entre camadas que permite que uma camada acessa imediatamente a inferior, podendo assim utilizar os serviços da outra camada vizinha.

### CAMADAS DO MODELO OSI
    `--->>> o modelo de referência OSI organiza a estrutura de rede em sete camadas e define o que cada uma faz, sem definir COMO faz. As camadas podem ser agrupadas em três subgrupos:
        - AS TRÊS CAMADAS MAIS ALTAS (Aplicação, Apresentação e Sessão): estão relacionadas as funções que dão SUPORTE AOS USUÁRIOS para que possão acessar os diversos serviços de redes.
        - AS TRÊS CAMADAS MAIS BAIXAS (Rede, Enlace e Física): estão relacionadas as operações ligadas aos ASPECTOS DA MOVIMENTAÇÃO DOS DADOS de um dispositivo para outro, dando SUPORTE ÀS OPERAÇÕES DE REDE.
        - CAMADAS DE TRANSPORTE (Transporte): faz a interligação entre o SUPORTE AO USUÁRIO e o SUPORTE À REDE, permitindo que os dados que chegaram das camadas mais baixas estejam em condições de serem utilizados pelas camadas mais altas.

#### FUNCIONALIDADES DAS CAMADAS
    `--->>> o modelo OSI define funcionalidades de cada camada do modelo, sendo elas:
        
        - Aplicação: possibilitar acesso aos recursos da rede.
        
        - Apresentação: traduzir, criptografar e comprimir dados, garantindo a interoperabilidade de sistemas heterogêneos, ou seja permite que sistemas diferentes consigam interpretar os dados da mesma forma.
        
        - Sessão: estabelecer, gerenciar e encerrar sessões de comunicação entre as aplicações.
        
        - Transporte: atua no DOMÍNIO DOS PROCESSOS/APLICAÇÕES, provendo a entrega confiável de mensagens processo a processo e recuperando erros, assim também como entregar dados ao processo correto no destino.
        
        - Rede: atua no DOMÍNIO DA MÁQUINA/HOSTS, tranferindo pacotes do endereçamento lógico (IP) de origem até o domínio dos hosts/dispositivos de destino, fornecendo roteamento e ligações entre redes.
        
        - Enlace: organizar bits e quadros, fornecer entrega nó a nó. Essa camada também pode detectar erros, que caso chegue algum quadro corrompido é descartado. O Enlace pode oferecer à camada de rede um serviço de transferencias de quadros, entre os nós diretamente conectados.
        
        - Física: transmitir BITS através de um meio físico (cabos, fibras, sinais elétricos, ópticos ou de rádio), prover especificações mecânicas e elétricas. Esta camada NÃO CORRIGE ERROS. Esta camada também pode recepcionar bits através desses meios físicos de comunicação.

### CAMADAS DA ARQUITERUTA TCP/IP
    `--->>> diferente do modelo OSI a arquitetura TCP/IP, ou internet, foi projetada utilizando quatro camadas, que tiveram sua funções vindas da fusão de outras camadas, como:

        - Aplicação: que englobou as funções das camadas de APRESENTAÇÃO e SESSÃO, e onde ficam os serviços da internet que podem ser acessados.

        - Transporte: que mantém as mesmas funcionalidades, associado ao PROTOCOLO TPC, e confere confiabilidade.

        - Internet: que é a mesma camada de REDE e permite que os dados injetados na rede pela máquina de origem possam alcançar o destino, associado ao PROTOCOLO IP.

        - Acesso à Rede: que englobou as camadas de ENLACE e FÍSICA, se ligando à qualquer coisa que pudesse ligar o dispositivo ao elace de tranmissão, associados à protocolos definidos pelas rede subjacentes (HOST-REDE).

#### PROTOCOLOS

    - TCP: conf
    - UDP
    - IP