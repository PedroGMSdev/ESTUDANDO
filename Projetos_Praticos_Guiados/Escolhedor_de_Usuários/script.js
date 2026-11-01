alert("E aí, deu certo?")

let nome = document.querySelector(".nomePersonagem")
let personagem = document.querySelector(".personagem")

//Trocar os botões conforme for clicando
function escolherPersonagem(nomeDoPersonagem, imagemDoPersonagem, corNomePersonagem){
    nome.innerHTML = nomeDoPersonagem
    personagem.src = imagemDoPersonagem
    nome.style.color = corNomePersonagem
/**essa função irá mudar o nome, imagem e cor do nome, de acordo com o que chegar do HTML */
}

function lerFoto(foto){
    let foto = foto.files[0] //Vai receber a foto que o input carregar, mas só aproveitará o arquivo (files), ou seja, a foto.

    let leitor = new FileReader() //FileReader = leitor de arquivos
    leitor.readAsDataURL(foto.files[0]) // readAsDataURL = faz a leitura da foto que carregou, e converte para um link (para "um texto")
    leitor.onload = async function(){
        let desenho = await puter.ai.txt2img("Transforme a pessoa desta foto em um personagem de videogame: contorno preto grosso, cores vivas, meio corpo, mantendo o rosto parecido. Fundo totalmente transparente: sem cenário, sem chão e sem sombra.", 
            {//opções
                model: "replicate:openai/gpt-image-2.5-flare",
                provider: "openai",
                input_image: leitor.result,
                quality: "medium",
                providerOptions: {background: "transparent"} //qualidade da imagem
            })

        escolherPersonagem("Você", desenho, '#b9b604')
    }

/**essa função será a responsável por transformar a foto em uma imagem de IA.
 * 1º: ela receberá do HTML (<input type="file" accept="image/*" hidden onchange="lerFoto(this)">),
 *      separado apenas a parte da foto dos demais dados que recebe (foto.files[0]),
 *      e a foto que ela irá transformar será armazenada em uma variável.
 * 2º: será feita a leitura (new FileReader) da foto e armazenada numa variável.
 * 3º: a foto será transformada em texto, mais precisamente, em um link (readAsDataURL).
 * 4º: irá no servidor do Puter (async) e esperará (await) o Puter AI atender o pedido que está entre "( )",
 *      com promp e opções.
 */
}