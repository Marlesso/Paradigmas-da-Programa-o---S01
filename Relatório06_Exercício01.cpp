#include <iostream>
using namespace std;

class Personagem {
  public:
    string nome;
    int nivel;
    int dano;
    int vida;

    Personagem(string nome, int nivel, int dano, int vida){
      this->nome = nome;
      this->nivel = nivel;
      this->dano = dano;
      this->vida = vida;
    }

    void atacar(Personagem &inimigo){
      cout << "O " << this->nome << " atacou o " << inimigo.nome << " e causou " << this->dano << " de dano." << endl;
      inimigo.vida -= this->dano;
    }
};

int main() {
  Personagem Orc("Orc", 3, 10, 230);
  Personagem Elfo("Elfo", 4, 8, 178);

  Elfo.atacar(Orc);

  cout << endl;
  cout << "Status do Orc: " << endl;
  cout << "Nome: " << Orc.nome << endl;
  cout << "Vida: " << Orc.vida << endl;
  cout << "Nivel: " << Orc.nivel << endl;
  cout << "Dano: " << Orc.dano << endl;
  cout << endl;
  
  cout << "Status do Elfo: " << endl;
  cout << "Nome: " << Elfo.nome << endl;
  cout << "Vida: " << Elfo.vida << endl;
  cout << "Nivel: " << Elfo.nivel << endl;
  cout << "Dano: " << Elfo.dano << endl;
  cout << endl;
  
  return 0;
}
