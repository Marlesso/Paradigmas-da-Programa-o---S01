class Criatura {
    constructor(nome, perigosa){
        this.nome = nome;
        this.perigosa = perigosa;
    }
}

class Personagem {
    constructor(nome, idade){
        this.nome = nome;
        this.idade = idade;
    }
}

class Diario {
    #autorSecreto;
    #enigmas;
    #criaturasAvistadas;

    constructor(autor){
        this.#autorSecreto = autor;
        this.#enigmas = new Map();
        this.#criaturasAvistadas = [];
    }

    getAutor(){
        return this.#autorSecreto;
    }

    adicionarEnigma(num, enigma){
        this.#enigmas.set(num, enigma);
    }

    decodificar(chave, num){
        if(chave !== this.#autorSecreto){
            console.log(`Acesso negado: Chave do autor secreto inválida.`);
            return;
        }
        const enigma = this.#enigmas.get(num);
        if (enigma){
            console.log(`Enigma ${num} decodificado: ${enigma}`)
        } else {
            console.log(`Enigma ${num} não encontrado.`);
        }
    }
}

class Protagonista extends Personagem {
    #diario;
    constructor(nome, idade, diario){
        super(nome, idade);
        this.#diario = diario;
    }

    tentarDecodificar(chave, num) {
        return this.#diario.decodificar(chave, num);
    }
}

class CabanaMisterio {
    #funcionarios;
    #diario;
    visitantes = [];

    constructor(diario){
        this.#diario = diario;
        this.#funcionarios = [];
    }

    adicionarFuncionarios(personagem){
        this.#funcionarios.push(personagem);
    }

    listarFuncionarios(){
        return [...this.#funcionarios];
    }
}

//---------------Main-----------------
const fadaDoVomito = new Criatura(`Fada do Vômito`, false);
const Duembrete = new Criatura(`Duembrete`, true);
const Vacaruja = new Criatura(`Vacaruja`, false);
const Mentor = new Criatura(`Bill Cipher`, true);

const diario3 = new Diario(`STANFORD`);
diario3.adicionarEnigma(1, `O poço sem fundo`);
diario3.adicionarEnigma(2, `"Casinha do mistério"`);
diario3.adicionarEnigma(3, `O olho cego`);

const Soos = new Personagem(`Soos`, 22)
const Wendy = new Personagem(`Wendy`, 15)
const Stanley = new Personagem(`Stanley`, 67);

const Dipper = new Protagonista(`Dipper`, 13, diario3);

const cabanaMisterio = new CabanaMisterio(diario3);
cabanaMisterio.adicionarFuncionarios(Soos);
cabanaMisterio.adicionarFuncionarios(Wendy);
cabanaMisterio.adicionarFuncionarios(Stanley);
cabanaMisterio.visitantes.push("Mabel","Waddles", "Blendin");

Dipper.tentarDecodificar(`STANFORD`, 1);
Dipper.tentarDecodificar(`STANFORD`, 2);
Dipper.tentarDecodificar(`STANFORD`, 3);
Dipper.tentarDecodificar(`STANFORD`, 4);
Dipper.tentarDecodificar(`DIPPER`, 1);

cabanaMisterio.listarFuncionarios().forEach(f => {
    console.log(` - ${f.nome} (Idade: ${f.idade})`);
});
