#include <iostream>
#include <iomanip>

int main() {
	int codPeca1, codPeca2, qtdPeca1, qtdPeca2;
	float precoPeca1, precoPeca2, precoTotal;

	std::cin >> codPeca1 >> qtdPeca1 >> precoPeca1;
	
	std::cin >> codPeca2 >> qtdPeca2 >> precoPeca2;
	
	precoTotal = (qtdPeca1 * precoPeca1) + (qtdPeca2 * precoPeca2);
	
	std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << precoTotal << std::endl;

	return 0;
}