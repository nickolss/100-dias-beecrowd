#include <iostream>

int main() {
  int tempo, velocidade;
  double result;

  std::cin >> tempo >> velocidade;
  result = tempo * velocidade / 12.0; // Precisa ser 12.0 porque senão o compilador entende tudo como inteiro e as casas decimais ficam zeradas

  printf("%.3lf\n", result);
  return 0;
}
