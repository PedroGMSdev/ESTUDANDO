const products = [
    {
        id: 1,
        title: "Smartphone",
        price: 1899.99,
        discount: 15,
        image: "https://m.media-amazon.com/images/I/61nqgl4atFL._AC_SL1500_.jpg"
    },
    {
        id: 2,
        title: "Notebook",
        price: 2999.90,
        discount: 20,
        image: "https://mirandacomputacao.jetassets.com.br/produto/47678-principal.png"
    },
    {
        id: 3,
        title: "Smart TV",
        price: 2299.00,
        discount: 10,
        image: "https://t62533.vteximg.com.br/arquivos/ids/902091-1000-1000/tv-samsung-43-led-smart-full-hd-hdmi-usb-hdr-tizen-43t5300a-3.jpg?v=638103673601970000"
    },
    {
        id: 4,
        title: "Tênis",
        price: 399.99,
        discount: 25,
        image: "https://d87n9o45kphpy.cloudfront.net/Custom/Content/Products/28/00/2800271_tenis-ollie-originals-rocky-street-masculino-nobuck-preto-5195280_l1_638475586200671648.webp"
    },
    {
        id: 5,
        title: "Fone",
        price: 199.90,
        discount: 30,
        image: "https://m.media-amazon.com/images/I/51olNZRjn+L.jpg"
    },
    {
        id: 6,
        title: "Cadeira",
        price: 899.00,
        discount: 18,
        image: "https://cdn.awsli.com.br/2500x2500/524/524499/produto/226157474/cadeira-gamer-hoopson-cg-601-a-17ixpo6272.jpg"
    },
    {
        id: 7,
        title: "Vídeo-Game",
        price: 3999.99,
        discount: 5,
        image: "https://cdn.awsli.com.br/600x450/241/241991/produto/302110171/71-wuld5s0x3a.png"
    },
    {
        id: 8,
        title: "Smart Watch",
        price: 2899.00,
        discount: 12,
        image: "https://m.magazineluiza.com.br/a-static/420x420/relogio-smart-watch-feminino-pro-serie-9-nfc-laves/hapes/smart-serie9-r-189/aa1b939ed8a676d8d860d80ff6446be1.jpeg"
    },
    {
        id: 9,
        title: "Tablet",
        price: 2199.90,
        discount: 15,
        image: "https://imgs.casasbahia.com.br/55066484/1g.jpg"
    },
    {
        id: 10,
        title: "Câmera",
        price: 2699.00,
        discount: 8,
        image: "https://www.loja.canon.com.br/wcsstore/CDBCatalogAssetStore/01_EOS_T7_NOVAFOTO_thumb.jpg"
    },
    {
        id: 11,
        title: "Smartphone Samsung Galaxy A31 Concorrente Direto da Xiaomi e da Apple",
        price: 1899.99,
        discount: 15,
        image: "https://casadocelular.com.br/media/catalog/product/cache/b9e728eb2ff7164906b484594fdb9213/c/d/cdc-galaxy-a31-128gb-branco-camera-quadrupla-v1.jpg"
    },
];

// criar os cards / create
function criarCardProduto(product){

    return `
        
                <div class="product-card">
                    <img src="${product.image}" alt="${product.title}" class="product-image">
                    <h3 class="product-title">${product.title}</h3>
                    <div class="product-price">${converterValor(product.price)}</div>
                    <div class="product-discount">${product.discount}% OFF</div>
                </div>
            `
}

// colocar eles na tela / render
function renderizarProduto(products){
    const tabela = document.getElementById('tabela-de-produtos') // 2* 6*
    tabela.innerHTML = products.map(criarCardProduto).join('') // 3* 4* 5*
}

// converter os valores para real
function converterValor(price){
    return price.toLocaleString('pt-BR', {style: 'currency', currency: 'BRL'})
}

// buscar os produtos
function procurarProduto(){
    const procurarInput = document.getElementById('procurando-por').value.toLowerCase() // 7*

    const filtrarProdutos = products.filter( product => product.title.toLowerCase().includes(procurarInput)) // 8*

    renderizarProduto(filtrarProdutos)
}

document.addEventListener('DOMContentLoaded', function(){
    renderizarProduto(products)

    // ADICIONAR FUNCIONALIDADE DE BUSCA quando o botão "BUSCAR" for acionado
    document.getElementById('botao-procurar').addEventListener('click', procurarProduto)

    // ADICIONA À FUNCIONALIDADE DE BUSCA a ação de "BUSCAR" quando acionar o ENTER
    document.getElementById('procurando-por').addEventListener('keypress', function(event){ // 9*
        if (event.key === 'Enter') {
            procurarProduto();
        }
    });
}); // 1*