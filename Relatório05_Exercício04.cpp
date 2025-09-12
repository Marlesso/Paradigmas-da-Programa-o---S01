#include <iostream>
using namespace std;

double celsiusParaFahrenheit(double celsius) {
  return (celsius * 9 / 5) + 32;
}

double celsiusParaKelvin(double celsius) {
  return celsius + 273.15;
}

int main() {
  int option;
  double celsius;
  do {
    cout << "O que deseja fazer?: \n";
    cout << "1 - Converter Celsius para Fahrenheit \n";
    cout << "2 - Converter Celsius para Kelvin \n";
    cout << "3 - Sair \n";
    cin >> option;

    switch (option) {
      case 1:
        cout << "Digite a temperatura em Celsius: \n";
        cin >> celsius;
        cout << "A temperatura em Fahrenheit é: " << celsiusParaFahrenheit(celsius) << endl;
        break;
      case 2:
        cout << "Digite a temperatura em Celsius: \n";
        cin >> celsius;
        cout << "A temperatura em Kelvin é: " << celsiusParaKelvin(celsius) << endl;
        break;
      case 3:
        cout << "Saindo... \n";
        break;
      default:
        cout << "Opção inválida! \n";
        break;
    }
    cout << endl;
  } while (option != 3);

  return 0;
}
