#include <iostream>
#include <cmath>

int main() {
	double a,b,c, areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;
	const double pi = 3.14159;

	std::cin >> a >> b >> c;
	
	areaTriangulo = a * c / 2;
	areaCirculo = pi * pow(c, 2);
	areaTrapezio = (a+b) * c / 2;
	areaQuadrado = b * b;
	areaRetangulo = a * b;
	
	printf("TRIANGULO: %.3lf\n", areaTriangulo);
	printf("CIRCULO: %.3lf\n", areaCirculo);
	printf("TRAPEZIO: %.3lf\n", areaTrapezio);
	printf("QUADRADO: %.3lf\n", areaQuadrado);
	printf("RETANGULO: %.3lf\n", areaRetangulo);

	return 0;
}