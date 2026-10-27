alert("E aí, deu certo?")

let nome = document.querySelector(".nomePersonagem")
let personagem = document.querySelector(".personagem")

//Trocar os botões conforme for clicando
function escolherPersonagem(nomeDoPersonagem, imagemDoPersonagem, corNomePersonagem){
    nome.innerHTML = nomeDoPersonagem
    personagem.src = imagemDoPersonagem
    nome.style.color = corNomePersonagem
}

