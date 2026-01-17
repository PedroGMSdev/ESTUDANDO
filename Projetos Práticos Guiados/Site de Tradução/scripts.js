let inputTexto = document.querySelector(".informarTexto") // 1*

async function traduzirTexto() { // 4*

    let enderecoAPI = "https://api.mymemory.translated.net/get?q=" + inputTexto.value + "&langpair=pt-BR|en" // 2*

    let respostaAPI = await fetch(enderecoAPI) // 3*

    let dadosTraduzidos = await respostaAPI.json() // 5*

    console.log(dadosTraduzidos)
}