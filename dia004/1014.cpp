#include <iostream>

int main() {
	int distancia;
	float combustivelGasto, consumo;
	
	std::cin >> distancia >> combustivelGasto;
	
	consumo = distancia / combustivelGasto;
	
	printf("%.3f km/l\n", consumo);

	return 0;
}