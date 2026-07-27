// A entrada que será informada será uma STRING
const entrada = gets();

// Será criada uma FUNÇÃO para trabalhar com essa entrada
function calcularSaldo(operacoes) {
    // Cria a variável saldo para guardar os valores que serão informados, iniciando com 0
    let saldo = 0;

    // Criar uma constante para armazenar as operações assim que separá-las
    // A separação será feita utilizando o método SPLIT, que divide a STRING em um ARRAY
    // O separador utilizado será a vírgula "," fazendo com que cada vírgula se torne uma nova string, dentro de um array
    const listaOperacoes = operacoes.split(",");

    // Agora, deverá ser percorrido o array
    // Ao percorrer o array, será identificado cada uma das operações criadas
    // Para cada operação (forEach), será efetuada a seguinte ação:
    listaOperacoes.forEach(operacao => {

        // Deve-se remover os espaços em branco que podem existir antes ou depois das operações
        // Para isso, utilizar o método TRIM. Esse método remove os espaços em branco do início e do fim de uma string
        // Também será utilizado o método SPLIT novamente, para separar o tipo da operação, criando um novo array TEMPORÁRIO dentro do array, trocando o espaço pela nova separação das strings
        // Após remover os espaços e separar a string em dois, o primeiro valor será identificado como tipo (deposito ou saque) e o segundo como valor (valorStr)
        const [tipo, valorStr] = operacao.trim().split(" ");
        // O valorStr, que agora é uma string, deverá ser convertido para número inteiro (utilizando parseInt) e armazenado na variável valor
        const valor = parseInt(valorStr);

        // Agora, será verificado que tipo de operação foi informada, e o que deve ser feito em cada caso
        // Se o tipo for "deposito", o valor deverá ser somado ao saldo
        // Se o tipo for "saque", o valor deverá ser subtraído do saldo
        if (tipo === "deposito") {
            saldo += valor;
        } else {
            saldo -= valor;
        }
    }); // NÃO ESQUECER DO FECHAMENTO DO FOREACH

    // Após efetuar todos os procedimentos:
                // Iniciar a FUNÇÃO
                // Criar a variável saldo
                // Pegar a String informada na entrada e separar em um array, separando nos locais das vírgulas
                // Percorrer o array e identificar cada valor
                // Para cada valor do array, transfomar em um novo array temporário, removendo os espaços em branco e separando o tipo do valor
                // Converter o valor de string para número inteiro
                // Identificar o tipo de operação e somar ou subtrair do saldo final de acordo com o indicado
                // Fechar o foreach

    // Retornar o saldo final
    return saldo;
    
// NÃO ESQUECER DO FECHAMENTO DA FUNÇÃO        
}

// PARA RODAR O CÓDIGO NA DIO, DEVE-SE:
            // CHAMAR A FUNÇÃO COM A ENTRADA INFORMADA PELA DIO, NO FINAL DO CÓDIGO
            //print(calcularSaldo(entrada));
            

// PARA RODAR O CÓDIGO NA WEB (PLAYCODE), DEVE-SE:
            // TROCAR O gets() PELA ABA DE INFORME DE ENTRADA
            // const entrada = prompt("Digite suas movimentações:")
            
            // CHAMAR A FUNÇÃO COM A ENTRADA INFORMADA, NO FINAL DO CÓDIGO
            // console.log(calcularSaldo(entrada))
// OBS.: se colocar no console.log apenas a função (calcularSaldo), não estará chamando a função, apenas mostrando que ela existe. É necessário colocar os parênteses e a variável de entrada para que a função seja executada e retorne o saldo final.

