#include <iostream>

int main() {
  int segundos;
  std::cin >> segundos;

  int horas = segundos / 3600;
  segundos = segundos % 3600;

  int minutos = segundos / 60;
  segundos %= 60;

  printf("%d:%d:%d\n", horas, minutos, segundos);

  return 0;
}
