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

        - Internet: que é a mesma camada de REDE e permite que os dados injetados na rede pela máquina de origem possam alcançar o destino, associado ao PROTOCOLO IP. Essa camada também pode vir dividida em duas camadas, como:
            > rede
            > inter-rede

        - Acesso à Rede: que englobou as camadas de ENLACE e FÍSICA, se ligando à qualquer coisa que pudesse ligar o dispositivo ao elace de tranmissão, associados à protocolos definidos pelas rede subjacentes (HOST-REDE). Essa camada também pode vir nomeada como CAMADA DE ENLACE, HOST-REDE, INTRARREDE ou HOST-NETWORK.

#### PROTOCOLOS
    `--->>> a arquitetuta TCP/IP tem foco principal na definição dos protocolos que devem ser empregados em cada uma das camadas, conhecido como PILHA DE PROTOCOLOS. Esses protocolos são:
        
        - CAMADA DE APLICAÇÃO, implemetados por meio de softwares que são executados nos diversos dispositivos computacionais. São eles:
            > Web: HTTP, HTTPS
            > Correio ELetrônico: SMTP, POP e IMAP
            > Nomes: DNS
            > Transferência de Arquivos: FTP, TFTP
            > Áudio e Vídeo em Tempo Real: RTP
            > Configuração Automática de Estações: DHCP
        
        - CAMADA DE TRANSPORTE, garantindo a entrega de processo a processo de todos os dados enviados pelo usuário. Os dois principais são:
            > TCP (Transmission Control Protocol): CONFERE CONFIABILIDADE, orientado a CONEXÃO, com controle de erros, de congestionamento e de fluxo. Define endereços das portas e define a mensagem da camada de aplicação em segmentos.
            > UDP (User Datagram Protocol): NÃO CONFERE CONFIABILIDADE, NÃO orientado a CONEXÃO, não faz a maioria das funções da camada de rede. Existe, praticamente, apenas para permitir que uma mensagem seja encapsulada em um datagrama e entregue para o processo de destino correto, já que utiliza a porta para fazer a correta entrega na máquina de destino. IMPORTANTE para aplicações que demandam tempo de resposta baixo na comunicação.
        
        - CAMADA DE INTERNET, que permitem que os dados injetados na REDE pela máquina de origem possam alcançar o destino. O principal protocolo é:
            > IP (Internet Protocol): tem por objetivo definir o endereço lógico e permitir o tratamento de datagramas para que possam ser roteados da origem até o destino. Ele é encontrado em duas versões principais que tem em comum o fato de NÃO serem orientados à conexão e NÃO TEREM CONFIABILIDADE, pois não realizam o tratamento de erros e os datagramas são enviados de forma independente, podendo chegar em ordem diferente de que foi enviado. Eles são:
                * IP versão 4 (IPv4): 32 bits
                * IP versão 6 (IPv6): 128 bits
            > ICMP (Internet Control Message Protocol): tem objetivo de fazer sinalização e avisos de erros.
            > ARP (Address Resolution Protocol): para a tradução do endereço lógico para o físico.
            > IGMP (Internet Group Message Protocol): o chamado comunicação multicast, que permite o envio de dados para um grupo de estações.

## CAMADAS DE APLICAÇÃO E TRANSPORTE

### CAMADA DE APLICAÇÃO
    `--->>> onde os softwares serão rodados quando as redes de comunicações começarem a usá-los. Como por exemplo, um software de pagamento, que recebe as confirmações se o pagamento no cartão foi aprovado ou não, é rodado na camada de aplicação.
    
#### ARQUITETURA DAS APLICAÇÕES
    `--->>> aplicadas à CAMADA DE APLICAÇÃO, essas arquiteturas descrevem como os processos das aplicações se organizam e se comunicam. Essa arquitetura NÃO TRATAM de como os dados são transportados fisicamente pela rede. Entre as mais utilizadas no desenvolvimento de aplicações em rede estão:
        - Cliente/Servidor
        - Peer-to-Peer

##### CLIENTE/SERVIDOR
    `--->>> muito usado em Redes Sociais, Aplicativos de mensagens instantaneas como o Whatsapp e Telegram, Sistemas Bancários e E-Commerce, essa arquitetura funciona quando um CLIENTE faz uma REQUISIÇÃO e o SERVIDOR atende DEVOLVENDO o que foi requisitado.

###### VANTAGENS

###### DESVANTAGENS

**-----------------------------------------------------------------------------------------------**
- serviço web
- serviço de nomes
- serviço de correio
- serviço de mensagens instantaneas

-arquiteturas
    - cliente/servidor:
            - 
    - pier to pier (compartilhamento de arquivos) (torrent) (pier = par):
            - máquina conversando com máquina em tempo real
            - vantagens e desvantagens
    - hibrido

- protocolos
        - http e https
        - dns
        - correio eletronico
                - smtp





# QUESTÕES
**----------------------------------CORRIGINDO QUESTÕES--------------------------------------------**
## FUNDAMENTOS DE REDES DE COMPUTADORES
### CAMADA DE APLICAÇÃO
#### ARQUITETURA DE CAMADA DE APLICAÇÃO
##### CLIENTE/SERVIDOR
    - Na arquitetura CLIENTE/SERVIDOR, o cliente faz a requisição, o servidor recebe e devolve a resposta.
    - Os papeis do CLIENTE e do SERVIDOR são DISTINTOS, porém um mesmo PROCESSO ou aplicação PODE desempenhas ambos os papéis, dependendo do contexto.
    - Na arquitetura Cliente/Servidor, o que define se uma entidade é cliente ou servidor não é o hardware, o sistema operacional ou a máquina em si, mas a função que o SOFTWARE, ou ALGORITMO EXECUTADO, está desempenhando na comunicação. Se o software SOLICITA um serviço ele atua como CLIENTE, se ele FORNECE ou RESPONDE ao serviço ele atua como SERVIDOR.
    - Na arquitetura CLIENTE/SERVIDOR tradicional, o servidor já está em execução, aguardando requisições dos clientes. Então, quando chega uma requisição do cliente, o sistema operacional NÃO INICIA O SERVIDOR, ele apenas entrega a conexão ou mensagem ao processo servidor que já está rodando.

##### PEER-TO-PEER (P2P)
    - Na arquitetura P2P, não existe necessariamente um servidor central responsável por armazenar todas as informações. Os dados podem ficar DISTRIBUÍDOS entre os PRÓPRIOS NÓS (peers) da rede. Além disso, muitos sistemas P2P distribuem não apenas os arquivos dos usuários, mas também informações necessárias para o funcionamento da rede, como localização dos recursos, tabelas de roteamento, índice de busca e metadados do sistema. Então, SIM, a DISTRIBUIÇÃO DE DADOS E INFORMAÇOES DE CONTROLE é uma das características marcante da arquitetura P2P, permitindo assim uma FORMA DE ARMAZENAMENTO distribuída desde as INFORMAÇÕES DO SISTEMA.
    - Uma característica importante nessa arquitetura é que os participantes costumam ter FUNÇÕES SEMELHANTES, e não funções rigidamente separadas como ocorre em cliente/servidor. Em uma rede P2P, cada NÓ (peer) pode fornecer recursos, solicitar recursos, armazenar dados e encaminhar informações.
    - Uma das grandes VANTAGENS da P2P é a ALTA ESCALABILIDADE. À medida que novos NÓS entram na rede, eles não apenas consomem recursos, mas também podem contribuir com processamento, armazenamento e largura de banda, ajudando a rede a crescer sem depender de um único servidor central.
    - Os DESAFIOS mais comuns são segurança, gerenciamento da rede, disponibilidade dos peers, consistência dos dados, controle e monitoramento. Essas coisas costumam ser PROBLEMA no P2P.
    - Na arquitetura P2P, os processos (peers) podem se comunicar DIRETAMENTE ENTRE SI, sem a necessidade de um servidor central intermediando todas as comunicações, compartilhando as responsabilidades de PROCESSAMENTO, ARMAZENAMENTO, COMUNICAÇÃO e FORNECIMENTO DE RECURSOS. Alguns sistemas P2P podem utilizar servidores para funções auxiliares como descoberta de peers, autenticação ou indexação de recursos, mas a TRANSFERÊCIA DE DADOS entre peers continua diretamente, sem que o servidor precise intermediar toda a comunicação.

##### PROTOCOLOS DA CAMADA DE APLICAÇÃO
    - Cabe ao protocolo da camada de aplicação definir como funcionam os processos de uma aplicação.
    - Os protocolos da camada de aplicação tem FUNÇÕES que DEFINEM, entre outras coisas:
        > Os TIPOS DE MENSAGENS que serão trocadas, como por exemplo, requisição e resposta no HTTP.
        > A SINTAXE das mensagens, como os campos são organizados, as regras de formatação e estrutura das mensagens trocadas entre cliente e servidor.
        > A SEMÂNTICA dos campos, como o SIGNIFICADO das informações contidas.
        > As REGRAS DE ENVIO e RECEBIMENTO das mensagens, ou seja, quando um processo pode enviar e responder mensagens.

###### SISTEMA DE CORREIO ELETRÔNICO
    - Um sistema de correio eletrônico é um exemplo de sistema implementado com base em uma séries de protocolos. Dentre esses protocolos encontramos:
        > SMTP
        > IMAP
        > POP3

### CAMADA DE TRANSPORTE
    - As APLICAÇÕES devem utilizar os serviços da camada de transporte, que pode ser um serviço com ou sem conexão. Alguns exemplos de aplicações que utilizam serviço de transporte, são:
        > COM conexão: 
            - SERVIÇO DE CORREIO ELETRÔNICO (SMTP, POP3 e IMAP), utilizando o protocolo TCP.
            - SERVIÇO WEB (HTTP e HTTPS), utilizando o protocolo TCP.
            - SERVIÇO DE TRANSFERÊNCIA DE ARQUIVOS (FTP), utilizando o protocolo TCP
        > SEM conexão:
            - SERVIÇO DE NOMES (DNS), geralmente utilizando o protocolo UDP.
            - SERVIÇO DE TELEFONIA (VoIP), normalmente utiliza o protocolo UDP.

#### ENDEREÇAMENTO DO NÍVEL DE TRANSPORTE
    - No nível (camada) de transporte, o endereçamento é feito por números de porta, que identificam qual aplicação ou processo deve receber os dados.
    - A correção de erros NÃO é a função do ENDEREÇAMENTO na camada de transporte. A CORREÇÃO DE ERROS é uma função do PROTOCOLO, não do endereçamento.
    - Apesar de ser uma função do protocolo TCP, o ENCERRAMENTO DA CONEXÃO NÃO TEM RELAÇÃO com o ENDEREÇAMENTO.
    - A DEMULTIPLEXAÇÃO é uma função da camada de transporte que consiste em entregar os dados recebidos à aplicação correta, utilizando os NÚMEROS DE PORTA, ou seja, ENDEREÇAMENTO da camada de transporte, assim também como a MULTIPLEXAÇÃO. Assim, mesmo que vários programas estejam usando a rede ao mesmo tempo, cada segmento é encaminhado ao processo correspondente.
    - A SEGMENTAÇÃO DAS MENSAGENS também é uma função da camada de transporte, mas NÃO é realizada pelo ENDEREÇAMENTO.

#### PROTOCOLO UDP
    - O UDP possui um CHECKSUM que VERIFICA SE HOUVE ERROS durante a transmissão dos dados. Se NÃO HOUVER ERROS o datagrama é entregue à aplicação, se forem DETECTADOS ERROS o datagrama é DESCARTADO. Porém, diferente do TCP, o UDP NÃO CORRIGE ERROS NEM RETRANSMITE os dados perdidos ou corrompidos, ele apenas DETECTA erros.
    - O UDP é um protocolo sem conexão e não confiável, ou seja, NÃO GARANTE ENTREGA, NÃO CONFIRMA RECEBIMENTO e NÃO FAZ RETRANSMISSÃO de pacotes perdidos.
    - O UDP realiza MULTIPLEXAÇÃO e DEMULTIPLEXAÇÃO através do ENDEREÇAMENTO usando NÚMEROS DE PORTA, sendo:
            > Multiplexação: várias aplicações podem enviar dados pela rede AO MESMO TEMPO.
            > Demultiplexação: o sistema entrega os dados recebidos à aplicação correta com base na porta de destino.
        O que muda em relação à TCP é que na UDP há uma falta de confiabilidade, sem garantia de entrega, sem controle de erros avançados, etc.
    - Um datagrama UDP tem um limite máximo definido pelo protocolo que pode ter até 65.535 bytes no total, incluindo cabeçalho e dados. Na prática, o tamanho útil de dados é menor, por cauda do cabeçalho IP e UDP, e limitações de rede.
    - UDP NÃO REALIZA CONTROLE DE FLUXO, NÃO AJUSTA TAXA DE ENVIO e NÃO GARANTE CONFIABILIDADE. Ele apenas envia os datagramas de forma simples e rápida.

#### PROTOCOLO TCP
    - CORRIGE ERROS e RETRANSMITE pacotes perdidos.
    - Garante uma entrega confiável.
    - TCP realiza CONTROLE DE FLUXO, usado para evitar que o emissor envie dados mais rápido do que o receptor consegue processar. Essa funcionalidade é utilizada para ajustar a taxa de envio conforme a capacidade do destino.
    - No TCP, o campo número de confirmação (ACK number) carrega o NÚMERO do PRÓXIMO BYTE que o receptor espera receber do emissor. Ele confirma os dados já recebidos corretamente, mas não indica "o que chegou" e sim QUAL É O PRÓXIMO DADO ESPERADO. Esse campo serve para controle de entrega confiável e ordenada.

    

### CAMADA DE REDE
    - A IDENTIFICAÇÃO DO HOSPEDEIRO (host) é realizada na CAMADA DE REDE, por meio do ENDEREÇO DE IP.
    - Quando um pacote chega a um roteador para ser encaminhado, o processo responsável pelo repasse (encaminhamento) deve ANALISAR O ENDEREÇO IP de destino e DECIDIR PARA QUAL INTERFACE ou próximo salto ENVIAR O PACOTE. Ele lê o IP de destino do pacote, consulta a tabela de roteamento, escolhe o melhor caminho (next hop) e encaminha o pacote pela interface correta. O roteador NÃO "ENTENDE" O CONTEÚDO do pacote, ele só verifica o IP de destino, consulta a tabela de rotas e encaminha para o próximo destino.
    - O algoritmo de roteamento de um roteador TROCA CONSTANTEMENTE INFORMAÇÕES com outros roteadores sobre o estado da rede e, com base nessas informações, monta a TABELA DE REPASSE que determina por qual interface deve seguir um pacote que chega. Quando o pacote chega, cabe ao processo de repasse apenas CONSULTAR A TABELA de repasse que definirá por qual interface o pacote deve seguir.
    - Em uma REDE DE CIRCUITOS VIRTUAIS, os pacotes sempre chegam ao destino na ordem em que foram enviados. A ROTA A SER SEGUIDA pelos pacotes é definida no momento do estabelecimento da conexão e NUNCA MUDA. Como os pacotes SEGUEM SEMPRE PELO MESMO CAMINHO, eles mantêm a posição um em relação ao outro, chegando ao destino na MESMA ORDEM EM QUE FORAM ENVIADOS.
    - No CIDR (Classless Inter-domain Routing), o prefixo de rede é utilizado para determinar qual parte do endereço IP identifica a rede. Um endereço de IP possui 32 bits. Quando se utiliza o CIDR, é definido um prefixo, sendo este utilizado para dividir o endereço IP em 2 partes: rede e hospedeiro. O prefixo CIDR determina a quantidade de bits a ser alocada na identificação da rede, ou seja, determina a parte do endereço IP que indentifica a rede.
    - A técnica de NAT foi desenvolvida para resolver o problema da escassez de endereços IP. A quantidade de endereços IP disponíveis para a utilização na Internet já é escassa, e a cada dia mais organizações e pessoas desejam se conectar à Internet. Dessa forma, foi criada a técnica de NAT (Network Address Translation), que permite que uma organização possua um conjunto de endereços internos que não são válidos na Internet mas que, quando um hospedeiro deseja acessá-la, seu endereço é traduzido em um endereço válido, permitindo, assim, a possibilidade de conectar mais hospedeiros à Internet do que a quantidade de endereços disponíveis para isso.
    - O DHCP é um protocolo que foi desenvolvido para facilitar a configuração de rede dos hospedeiros de uma sub-rede. A tarefa de configurar os parâmetros de rede em todos os hospedeiros de uma rede pode ser uma tarefa demorada, principalmente para grandes redes. Dessa forma, o DHCP foi desenvolvido para facilitar o trabalho do administrador, o qual configura os parâmetros em um servidor, sendo esses parâmetros recebidos pelos hospedeiros de forma automática durante sua inicialização.
    - Quando um datagrama não pode ser entregue porque o roteador não consegue localizar o destino, o protocolo responsável por informar este problema é o ICMP. O ICMP foi desenvolvido como o protocolo responsável pelo envio das mensagens de controle e de erro de uma rede. Assim, quando um roteador não consegue localizar o destino, o software ICMP do equipamento envia de volta à origem do datagrama uma mensagem ICMP contendo essa informação.
    - Um algoritmo de roteamento adaptativo possui como característica basear suas decisões de roteamento de acordo com o tráfego e a topologia recentes. Um algoritmo de roteamento ADAPTATIVO, conforme seu nome indica, adapta as rotas ao estado atual de enlaces e topologia, promovendo alterações na rota sempre que houver alguma mudança significativa no estado da rede.
    - Quando a rede cresce a ponto de ser necessário alterar o esquema de roteamento para diminuir o tamanho das tabelas, deve-se utilizar o ROTEAMENTO HIERÁRQUICO. O roteamento hierárquico foi criado para resolver os problemas de armazenamento das tabelas de roteamento quando as redes crescem muito. Com sua utilização, não é necessário que os roteadores conheçam a topologia de toda a rede para tomar suas decisões de roteamento, bastando saber como rotear dentro de sua região e como chegar às outras regiões.

### CAMADA DE ENLACE
    - O ENQUADRAMENTO (Delimitação de Quadros) é um mecanismo da Camada de Enlace utilizado PARA DELIMITAR O INÍCIO E O FIM DE CADA QUADRO (frame) transmitido. Assim, o receptor consegue identificar corretamente onde cada quadro começa e termina. As técnicas de enquadramento são:
        > por Contagem de Caractere
            - esse método informa o tamanho do quadro por meio de um campo de comprimento. Ele NÃO GARANTE O SINCRONISMO entre transmissor e receptor; se esse campo for corrompido, o receptor pode perder a delimitação dos quadros.
        > por Enquadramento de Caractere
            - nesse método, o TRANSMISSOR insere um caractere DLE extra para cada DLE que aparecer no campo de DADOS. O RECEPTOR apenas REMOVE o DLE adicional ao receber os dados.
        > por Enquadramento de Bit
            - esse método continua sendo utilizado em diversos protocolos de comunicação, como o HDLC.
        > por Violação de Códigos do Nível Físico
            - esse método utiliza padrões ou símbolos inválidos na codificação normal do nível físico para indicar o início ou fim de um quadro.
            - A técnica de enquadramento por violação de códigos no nível físico utiliza sinais especiais não empregados na codificação dos bits. Essa técnica de enquadramento se aplica quando o nível físico apresenta redundância da codificação, ou seja, além dos códigos que representam os bits "0" e "1" existem outros códigos não utilizados para representar a informação. Desta forma, esses códigos redundantes podem ser empregados para delimitar o início e o fim dos quadros (enquadramento).
    - A função do enquadramento é DELIMITAR OS QUADROS, NÃO fazendo a DETECÇÃO e CORREÇÃO de erros. A detecção e a correção de erros são realizadas por mecanismos específicos, como bits de paridade, CRC e códigos de correção.
    - O protocolo STOP-AND-WAIT ARQ foi desenvolvido de forma incremental, adicionando mecanismos para garantir uma transmissão confiável:
        > Stop-and-Wait Básico: o transmissor envia um quadro e aguarda a confirmação (ACK) antes de enviar o próximo.
        > Inclusão de Temporizador (TIMEOUT): caso o ACK não chegue dentro do tempo esperado, o quadro é retransmitido.
            - O timeout deve ser MAIOR QUE O TEMPO NECESSÁRIO PARA ENVIAR O QUADRO, propagá-lo até o receptor, processá-lo e receber o ACK. Se for muito curto, ocorrerão retransmissões desnecessárias.
        > Numeração dos Quadros (0 e 1): evita que os quadros retransmitidos sejam aceitos como novos quando um ACK é perdido.
        > Numeração dos ACKs: permite ao transmissor saber exatamente qual quadro foi confirmado, evitando ambiguidades.
    - O campo necessário para numerar os quadros é de apenas um bit. Como apenas um quadro pode estar pendente de confirmação por vez, basta alternar entre os números 0 e 1, necessitando de apenas 1 BIT.
    - No Stop-and-Wait ARQ, os ACKs são numerados para indicar qual quadro foi recebido corretamente e evitar ambiguidades em caso de perdas ou retransmissões, sendo assim necessária a numeração para garantir confiabilidade do protocolo.
    - Stop-and-Wait ARQ possui BAIXO DESEMPENHO, principalmente em enlaces com grande atraso de propagação (alta latência), pois o transmissor permanece ocioso aguardando um ACK após cada quadro.
    - O protocolo requer COMUNICAÇÃO BIDIRECIONAL para que os ACKs possam ser enviados ao transmissor. O protocolo depende do envio de ACKs do receptor para o transmissor. Portanto, é necessário um canal com comunicação nos dois sentidos (FULL-DUPLEX ou DOIS CANAIS SIMPLEX, um em cada direção).
    - O protocolo ALOHA é um protocolo de ACESSO AO MEIO (MAC) de ALOCAÇÃO DINÂMICA, no qual uma estação transmite sempre que tem dados para enviar. Se ocorrer colisão, a estação espera um tempo ALEATÓRIO e tenta transmitir novamente.
        - O ALOHA possui BAIXO DESEMPENHO, pois permite muitas colisões. Sua eficiência máxima é de aproximadamente 18% (ALOHA puro) e 37% (ALOHA com intervalos de tempo - Slotted ALOHA).
        - O ALOHA não garante acesso ordenado ao meio, pois as transmissões ocorres de forma aleatória.
        - O ALOHA NÃO REALIZA DETECÇÃO NEM CORREÇÃO DE ERROS. Essas funções são desempenhadas por mecanismos específicos, como o CRC para detecção de erros. Ele é utilizado para controlar o acesso ao meio de transmissão.
        - No ALOHA, as colisões ocorrem e são previstas pela própria construção do protocolo.
    - Os protocolos CSMA (Carrier Sense Multiple Access) verificam se o MEIO ESTÁ LIVRE antes de transmitir. Isso REDUZ a probabilidade de COLISÕES em relação ao ALOHA, mas NÃO AS ELIMINA COMPLETAMENTE.
        - Como as estações escutam o meio antes de transmitir, há menos colisões tornando o desempenho do CSMA superior ao do ALOHA.
        - Também é uma técnica de ALOCAÇÃO DINÂMICA.
        - CSMA/CD foi utilizado nas redes Ethernet com meio compartilhado, e o CSMA/CA é empregado nas redes Wi-Fi atuais.
        - O acesso ao meio é feito por CONTENÇÃO (DISPUTA). Não existe uma ordem fixa ou garantida para que as estações transmitam, NÃO GARANTINDO ACESSO ORDENADO AO MEIO.


### CAMADA FÍSICA
    - O ruído branco pode estar presente EM QUALQUER CANAL DE COMUNICAÇÃO, indepedentemente da largura da BANDA. Sua potencia total aumenta com a largura da banda considerada.
    - Quanto MAIOR O PERÍODO de um sinal periódico, MENOR será sua FREQUÊNCIA. O período (T) e a frequência (f) são grandezas inversamente proporcionais, então, se o período aumenta a frequência diminui, se o período diminui a frequência aumenta.
    - Sinais DIGITAIS não são imunes ao ruído branco, mas são mais resistentes a ele do que os sinais analógicos. A vantagem dos sinais digitais é que pequenas interferências geralmente não alteram os bits recebidos, pois o receptor consegue distinguir entre os níveis de tensão correspondentes a 0 a 1. Entretanto, se o ruído for intenso, ele pode provocar erros na interpretação dos bits, causando falhas na comunicação.
    - Os meios de transmissão podem ser classificados como GUIADOS e NÃO GUIADOS e cada um tem características próprias que influenciam na transmissão dos sinais. Esses meios são:
        > Guiados:
            * Fibra Óptica
                - A fibra óptica apresenta uma largura de banda muito superior ao par trançado, permitindo transmitir muito mais dados por segundo e por distâncias maiores, com menor perda de sinal.
                - Possibilita altas taxas de transmissão de dados (elevada banda passante), apresenta baixa atenuação com a distância, é imune a interferências eletromagnéticas e possui baixo peso.
                - Pouca flexibilidade, custos mais elevados e conectorização mais difícil.
            * Par Trançado
                - Mais flexível e barato.
                - Enfrenta em maior escala o problema de interferências eletromagnéticas.
            * Cabo Coaxial
                - O sinal fica mais protegido de interferências quando comparado ao par trançado. Não precisa de nenhum componente eletro-óptico (caso da fibra óptica).
                - Menos flexível e mais pesado que o par trançado. Menos capacidade de transmissão de informação que a fibra óptica.
        > Não Guiados:
            * Ondas de Rádio
            * Micro-ondas
                - Os enlaces de micro-ondas operam em faixas de frequência superiores às dos enlaces de rádio convencionais. As micro-ondas fazem parte das ondas de rádio, porém operam em FREQUÊNCIAS MAIS ALTAS, normalmente entre 1 GHz e 300 GHz.
                - Os enlaces terrestres de micro-ondas NECESSITAM DE LINHA DE VISADA entre as antenas, pois obstáculos como prédios, árvores e montanhas bloqueiam o sinal.
            * Infravermelho

### FUNDAMENTOS DE ADMINISTRAÇÃO E SEGURANÇA EM REDE DE COMPUTADORES
    - Os ATAQUES podem ser classificadps de diversas formas:
        > Ativo ou Passivo
            - Os ataques passivos são os de interceptação.
            - Os ataques ativos são os de modificação, interrupção, personificação ou repetição.
                > Repetição:
                    - Considere que você esteja realizando a compra online de uma caneta. Ao verificar o extrato da sua conta, percebe que havia duas cobranças do mesmo valor. Esse tipo de evento pode ser associado ao ataque de repetição, pois o atacante capturou os pacotes com as informações de pagamento e os enviou novamente para a cobrança no banco. O ataque de repetição permitiu que fosse debitado duas vezes o mesmo valor de sua conta. Como o atacante capturou os pacotes que realizaram a transação financeira, ele pôde modificar a conta de destino e - considerando que os dados da transação estivessem presentes no pacote - receber o valor cobrado. Esse mesmo ataque pode ser utilizado quando um atacante captura pacotes de autenticação, permitindo o acesso a determinada rede ou sistema.
        > Interno ou Externo
        > Direto ou Indireto
    - Uma das grandes ameaças exitentes na internet é a chamada APT (Advanced Persisten Threat). Ela se refere à ataques direcionados de organizações a determinadas organizações e empresas. Imagine que você, após ser convocado para analisar as ações de uma APT, tenha percebido que ela estava ENVIANDO E-MAILS a determinada empresa com um anexo possivelmente malicioso. A estapa de ataque identificada está relacionada com ENTREGA, já que a APT utilizou um meio de entregar a arma a seu alvo. O entendimento das fases dos ataques é de suma importância na segurança de rede. Quanto mais cedo o ataque foi detectado e interrompido, menos danos ele causará, porque o ataque (no caso ilustrado, uma APT) terá tido uma menor penetração na rede e comprometido menos o ambiente.
    - O objetivo dos mecanismos de controle físico é proteger as instalações físicas, ou seja, a destruição, o roubo ou a paralisação de serviços. Os mecaniscmos físicos podem incluir desde o uso de portões, grades e cadeados até a manutenção do ambiente dentro de condições climáticas adequadas, como a utilização de equipamentos de refrigeração e o fornecimento de energia ininterruptos graças ao emprego de fontes de energia redundantes (geradores e no-breaks).
    - A segurança de um ambiente pode ser considerada completa quando ela emprega um conjunto de mecanismos de controle físico e lógico com o objetivo de garantir CID. Afinal, os mecanismos de controle lógicos, firewalls, IDS, criptografia, controle de acesso e antivírus são soluções que devem atuar em conjunto. Os antivírus, por exemplo, são os responsáveis pela detecção dos malwares como o WannaCry, que causou uma grande infecção em diversas empresas no Brasil e no mundo, sequestrando os dados dos usuários  exigindo uma recompensa para que eles fossem disponibilizados novamente.
    - Por meio dos sistemas de gerenciamento é possível monitorar o seu uso e planejar os investimentos necessários para que as demandas da rede sejam atendidas, garantindo um nível de satisfação elevado para os seus usuários.
    - Uma arquitetura de gerenciamento de rede é composta por quatro componentes básicos:
        > estação de gerenciamento
        > dispositivo gerenciado
        > base de informações gerenciais
        > protocolo de gerenciamento
        Tais componentes trabalham em conjunto para permitir que a rede possa ser monitorada e controlada. Para isso a base de informações gerenciais mantém informações do estado dos diversos objetos existentes em um dispositivo.
        - A arquitetura de gerenciamento de redes é genérica, mas os sistemas de gerenciamento existentes são baseados nos componentes apresentados. A entidade gerenciadora ou de gerenciamento monitora e controla os dispositivos da rede por intermédio do software gerente. No dispositivo gerenciado, o software agente recebe os comandos do gerente por meio do protocolo de comunicação. Já o conjunto de objetos existentes compõe a base de informações gerenciais.

## INTRODUÇÃO À SEGURANÇA DA INFORMAÇÃO
### 