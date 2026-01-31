class personagem {
	constructor(nome, idade, tipo, ataque){
		this.nome = nome
		this.idade = idade
		this.tipo = tipo
	}

	atacar(){
		let ataque

			if (this.tipo === "mago"){
				ataque = "magia"
			} else if (this.tipo === "guerreiro"){
				ataque = "espada"
			} else if (this.tipo === "monge"){
				ataque = "artes marciais"
			} else if (this.tipo === "ninja"){
				ataque = "shuriken"
			}

		console.log(`O ${this.tipo} atacou usando ${ataque}`)
	}
}

let personagem1 = new personagem("Guilherme", 35, "guerreiro")

personagem1.atacar()

//No lugar do if/else, poderia ser usado switch/case para definir o tipo de ataque.

//Exemplo:

// switch (this.tipo) {
// 	case "mago":
// 		ataque = "magia" 
// 		break;
// 	case "guerreiro":
// 		ataque = "espada"
// 		break;
// 	case "monge":
// 		ataque = "artes marciais"
// 		break;
// 	case "ninja":
// 		ataque = "shuriken"
// 		break;
// 	default:
// 		ataque = "ataque desconhecido"
// }