#include <iostream>
#include <string>
#include <iomanip>

int main() {
  std::string nome;
  double salario, totalVendas, salarioFinal;

  std::cin >> nome;
  std::cin >> salario;
  std::cin >> totalVendas;

  salarioFinal = salario + (totalVendas * 0.15);

  std::cout << "TOTAL = R$" << std::fixed << std::setprecision(2) << salarioFinal << std::endl;

  return 0;
}
