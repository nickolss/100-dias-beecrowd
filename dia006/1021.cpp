#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double valor;
    cin >> valor;

    int centavos = round(valor * 100);

    int notas[] = {10000, 5000, 2000, 1000, 500, 200};  // Em centavos
    int moedas[] = {100, 50, 25, 10, 5, 1};            // Em centavos

    cout << "NOTAS:" << endl;

    for (int i = 0; i < 6; ++i) {
        int quantidade = centavos / notas[i];
        centavos %= notas[i];
        printf("%d nota(s) de R$ %.2f\n", quantidade, notas[i] / 100.0);
    }

    cout << "MOEDAS:" << endl;

    for (int i = 0; i < 6; ++i) {
        int quantidade = centavos / moedas[i];
        centavos %= moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", quantidade, moedas[i] / 100.0);
    }

    return 0;
}

