# DESENVOLVIMENTO WEB EM HTML5, CSS, JAVASCRIPT E PHP

## AMBIENTE WEB: CLIENTE X SERVIDOR E AS TECNOLOGIAS

### ARQUITETURA WEB: ARQUITETURA CLIENTE X SERVIDOR
        `--->>> a arquitetura CLIENTE x SERVIDOR separa os papéis dos clientes (usuários) e das aplicações que são hospedadas em servidores. Os clientes solicitam serviços (requisições) e as aplicações hospedadas nos servidores fornecem serviços (respostas). Normalmente, os clientes são responsáveis por iniciar a comunicação com os servidores.

### AMBIENTE WEB
        `--->>> ao longo da evolução da web, observamos diferentes abordagens na adoção do modelo CLIENTE x SERVIDOR, passando por duas, três e quatro camadas. Nessa última abordagem, o cliente não precisa de nenhum software adicional instalado no seu computador porque o servidor web fornece os códigos que serão executados nos navegadores. 

### MÉTODOS DE ENVIO DOS DADOS
    OBS.: se o método do FrontEnd for GET, o método do BackEnd também será GET. Se o método no Front for POST, no Back também será POST.
#### MÉTODO GET
        `--->>> no método GET os dados são anexados no endereço.
                Exp.:
                    www.xpto.com.br?id=5&cod=25
                            `--->>> no caso acima, podemos ver 2 dados incluídos no endereço. Após o endereço original (www.xpto.com.br), é colocado um "?" que sinaliza a separação de onde finaliza o endereço e começa os dados que serão enviados juntos do endereço. O primeiro dado é "id=5", que é separado do segundo, pelo "&", que é "cod=25". Nesse exemplo são 2 dados, mas poderiam ser mais, ou menos, dados junto do endereço.
#### MÉTODO POST
        `--->>> no método POST os dados são enviados no corpo da mensagem. O endereço não é alterado.
                Exp.:
                    www.xpto.com.br
                            `--->>> no POST, os dados "id=5" e "cod=25" vão dentro do corpo da mensagem de requisição, não no endereço (payload).

### CAMPOS DE FORMULÁRIO
        - cada campo de formulário tem um nome.
        - é importante distinguir o nome do campo do seu conteúdo, mesmo que mais na frente o conteúdo de dentro do campo acabe sendo mudado. O nome do campo não muda.
        - a aplicação do servidor extrai os conteúdos vindos da requisição, desencapsulando.
        - os nomes dos campos devem ser os mesmos, tanto no lado cliente quanto no lado servidor.
                Exp.:
                    <html>
                        <body>
                            <form action="welcome.php" method="post">
                                Name: <input type="text" name="name"><br>
                                E-mail: <input type="text" name="email"><br>
                                <input type="submit">
                            </form>
                        </body>
                    </html>
