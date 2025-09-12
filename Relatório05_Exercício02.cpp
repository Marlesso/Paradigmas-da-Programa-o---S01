#include <iostream>
using namespace std;

float somaArray(float arr[], int tamanho) {
  float soma = 0;
  for (int i = 0; i < tamanho; i++) {
    soma += arr[i];
  }
  return soma;
}

int main() {
  cout << "Quantos numeros voce quer somar? \n";
  int tam;
  cin >> tam;

  cout << "Digite os numeros a ser somados: \n";
  float arr[tam];

  for (int i = 0; i < tam; i++) {
    cin >> arr[i];
  }

  cout << "A soma dos numeros e: " << somaArray(arr, tam);
  return 0;
}
