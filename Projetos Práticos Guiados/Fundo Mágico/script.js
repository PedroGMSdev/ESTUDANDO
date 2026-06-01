document.addEventListener('DOMContentLoaded', function () {
    // Objetivos do projeto:
    // Enviar um texto de um formulário para um API do n8n e exibir o resultado no código html, css e a animação no fundo da tela do site.
        const form = document.querySelector('.form-group');
        const descricao = document.getElementById('descricao');
    // Passos:
    // 1. No Javascript, pegar o evento de submit do formulário para evitar o recarregamento da página.   
    // 2. Obter o valor digitado pelo usuário no campo de texto.      
    // 3. Exibir um indicador de carregamento enquanto a requisição está sendo processada.
    // 4. Fazer uma requisição HTTP (POST) para a API do n8n, enviando o texto do formulário no corpo da requisição em formato JSON.
        function setLoading(isLoading) {
            const button = document.getElementById('botaoGerar');
                if (isLoading) {
                    button.innerHTML = 'Gerando Background...';
                } else {
                    button.innerHTML = 'Gerar Background Mágico';
                }
        }

        form.addEventListener('submit', function (event) {
            event.preventDefault(); // Evita o recarregamento da página

    
            const descricaoValor = descricao.value.trim();
            if (!descricaoValor) {
                return;
            }
    // 3. Exibir um indicador de carregamento enquanto a requisição está sendo processada.
            setLoading(true);

    // 4. Fazer uma requisição HTTP (POST) para a API do n8n, enviando o texto do formulário no corpo da requisição em formato JSON.
    // OBS.: muito usado para tratamento de erro
            try{
                const response = fetch('', {
                    method: 'POST',
                    headers: {'Content-Type': 'application/json'},
                    body: JSON.stringify({descricaoValor})
                })
            }catch (error){

            }finally{

            }
        });

        
    
    // 5. Receber a resposta da API do n8n (esperando um JSON com o código HTMLL/CSS do background).
    // 6. Se a resposta for válida, exibir o código HTML/CSS retornado na tela:
    //  - Mostrar o HTML e CSS gerado em uma área de preview.
    //  - Inserir o CSS retornado dinamicamente na página para aplicar o background.
    // 7. Remover o indicador de carregamento após o recebimento da resposta.
});