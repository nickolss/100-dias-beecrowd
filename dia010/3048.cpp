#include <iostream>

using namespace std;

int main() {
  int tamanhoSequencia;
  cin >> tamanhoSequencia;
  int numeros[tamanhoSequencia];
  int qtdSequencia = 1;

  for(int i = 0; i < tamanhoSequencia; i++){
    cin >> numeros[i];
  }

  for(int i = 1; i < tamanhoSequencia; i++){
    if(numeros[i] != numeros[i - 1]){
      qtdSequencia++;
    }
  }

  cout << qtdSequencia << endl;

  return 0;
}
