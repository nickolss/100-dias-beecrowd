#include <iostream>

using namespace std;

int calculaDias(float quilos){
  int days = 0;

  while (quilos > 1.0) {
    days++;
    quilos /= 2.0;
  }

  return days;
}

int main() {
  int qtdTestes;
  cin >> qtdTestes;

  float qtdComidas[qtdTestes];

  for(int i = 0; i < qtdTestes; i++){
    cin >> qtdComidas[i];
  }

  for(int i = 0; i < qtdTestes; i++){
    cout << calculaDias(qtdComidas[i]) << " dias" << endl;
  }

  return 0;
}
