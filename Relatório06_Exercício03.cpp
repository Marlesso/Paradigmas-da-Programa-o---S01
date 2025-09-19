#include <iostream>
using namespace std;

class Pessoa {
  public:
    string nome;

    Pessoa(string nome){
      this->nome = nome;
    }

    virtual void apresentar(){
      cout << "Olá, meu nome é " << nome << " e sou uma pessoa." << endl;
    }

    virtual ~Pessoa(){}
};
class Professor : public Pessoa {
  public:
    string diciplina;

    Professor(string nome, string diciplina) : Pessoa(nome){
      this->nome = nome;
      this->diciplina = diciplina;
    }

    void apresentar() override{
      cout << "Olá, meu nome é " << nome << " e sou um professor de " << diciplina << "." << endl;
    }
};
class Aluno : public Pessoa {
  public:
    string curso;
    int matricula;

    Aluno(string nome, string curso, int matricula) : Pessoa(nome){
      this->nome = nome;
      this->curso = curso;
      this->matricula = matricula;
    }

    void apresentar() override{
      cout << "Olá, meu nome é " << nome << " e sou um aluno de " << curso << "." << endl;
    }
};

int main() {
  Pessoa* pessoa1 = new Professor("Marcelo", "Paradigmas da Programação");
  Pessoa* pessoa2 = new Aluno("Joãozinho", "Engenharia de Software", 267);

  pessoa1->apresentar();
  cout << endl;
  pessoa2->apresentar();
  
  delete pessoa2;
  delete pessoa1;
  return 0;
}
