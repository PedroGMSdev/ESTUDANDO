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