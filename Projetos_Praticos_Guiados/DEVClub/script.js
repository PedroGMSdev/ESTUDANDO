alert("E aí, deu certo?")

let nome = document.querySelector(".nomePersonagem")
let personagem = document.querySelector(".personagem")

function escolherPersonagem(nomeDoPersonagem, imagemDoPersonagem){
    nome.innerHTML = nomeDoPersonagem
    personagem.src = imagemDoPersonagem
}