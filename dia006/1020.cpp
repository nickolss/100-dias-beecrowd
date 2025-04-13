#include <iostream>

int main() {
  int idadeDias;
  std::cin >> idadeDias;

  int anos = idadeDias / 365;
  idadeDias %= 365;

  int mes = idadeDias / 30;
  idadeDias %= 30;

  printf("%d ano(s)\n", anos);
  printf("%d mes(es)\n", mes);
  printf("%d dia(s)\n", idadeDias);

  return 0;
}
