#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    cout << N << endl;

    int notas[] = {100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 7; i++) {
        int qtd = N / notas[i];
        cout << qtd << " nota(s) de R$ " << notas[i] << ",00" << endl;
        N = N % notas[i]; // Armazena o resto da divisão de N por notas[i]
    }

    return 0;
}

