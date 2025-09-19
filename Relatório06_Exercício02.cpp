#include <iostream>
using namespace std;

class Pessoa {
  protected:
    string nome;
    int idade;
};
class Protagonista : public Pessoa {
  private:
    int nivel;
  public:
    Protagonista(string nome, int nivel){
      this->nome = nome;
      this->nivel = nivel;
    }
    void showProtagonista(Protagonista) {
      cout << "Nome: " << nome << endl;
      cout << "Nivel: " << nivel << endl;
    }
};
class Personagem : public Pessoa {
  private:
    int rank;
  public:
    Personagem(string nome, int rank){
      this->nome = nome;
      this->rank = rank;
    }
    void showPersonagem(Personagem) {
      cout << "Nome: " << nome << endl;
      cout << "Rank: " << rank << endl;
    }
};


int main() {
  Protagonista prota("Makoto", 12);
  Personagem pers("Naoto", 4);

  /* Assim é inacessível, pois é direto:
  cout << "Protagonista: " << prota.nome << endl;
  cout << "Nível: " << prota.nivel << endl;
  cout << endl;
  cout << "Personagem: " << pers.nome << endl;
  cout << "Rank: " << pers.rank << endl;
  cout << endl;
  */

  // Assim é acessível, pois é através de métodos:
  prota.showProtagonista(prota);
  cout << endl;
  pers.showPersonagem(pers);
  cout << endl;
  
  return 0;
}
