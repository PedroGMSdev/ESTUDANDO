let inputTexto = document.querySelector(".informarTexto") // 1*
let textoTraduzido = document.querySelector(".resultadoDaTraducao")
let idioma = document.querySelector(".escolherIdioma") 

async function traduzirTexto() { // 4*

    let enderecoAPI = "https://api.mymemory.translated.net/get?q=" + inputTexto.value + "&langpair=pt-BR|" + idioma.value// 2*

    let respostaAPI = await fetch(enderecoAPI) // 3*

    let dadosTraduzidos = await respostaAPI.json() // 5*

    textoTraduzido.textContent = dadosTraduzidos.responseData.translatedText // 6*

}

function ouvirVoz() {
   let voz = window.webkitSpeechRecognition //7*

   let reconhecerVoz = new voz() //8*

   reconhecerVoz.lang = "pt-BR" //9*

   reconhecerVoz.onresult = (transcricao) => { //10*
        let textoTranscrito = transcricao.results[0][0].transcript //11*

        inputTexto.textContent = textoTranscrito //12*

        traduzirTexto() //13*
   }

   reconhecerVoz.start() //14*
}