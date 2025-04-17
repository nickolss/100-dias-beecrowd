#include <iostream>
#include <iomanip>

int main() {
  int item, qtd;
  float preco;
  std::cin >> item >> qtd;

  switch (item) {
    case 1:
      preco = 4.00;
      break;
    case 2:
      preco = 4.50;
      break;
    case 3: 
      preco = 5.00;
      break;
    case 4:
      preco = 2.00;
      break;
    case 5: 
      preco = 1.50;
      break;
  }

  float precoTotal = preco * qtd;

  std::cout << "Total: R$ " << std::fixed << std::setprecision(2) << precoTotal << std::endl;
  return 0;
}
