#include <iostream>
using namespace std;

int main() {
  cout << "Quantas notas deseja inserir?: \n";
  int n;
  cin >> n;

  float nota,  soma = 0;
  for (int i=0; i < n; i++) {
    cout << "Insira uma nota: \n";
    cin >> nota;

    while(nota < 0 || nota > 10){
      cout << "Nota invalida, tente de novo: \n";
      cin >> nota;
    }
    
    soma += nota;
  }
  
  cout << "Sua media e de: " << (soma / n) << endl;
  if ((soma / n) >= 7) {
    cout << "Aprovado";
  } else {
    cout << "Reprovado";
  }

  return 0;
}
