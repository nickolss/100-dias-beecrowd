#include <iostream>
#include <cmath>

int main() {
	int raio;
	const double pi = 3.14159;
    double result;

	std::cin >> raio;
	
    result = (4.0 / 3.0) * pi * (pow(raio,3));
    
    printf("VOLUME = %.3lf", result);

	return 0;
}