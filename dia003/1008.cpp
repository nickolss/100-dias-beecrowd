#include <stdio.h>

int main() {
  int numFuncionario, horasTrabalhadas;
  float salarioHora, salarioFinal;

  scanf("%d", &numFuncionario);
  scanf("%d", &horasTrabalhadas);
  scanf("%f", &salarioHora);

  salarioFinal = horasTrabalhadas * salarioHora;

  printf("NUMBER = %d\n", numFuncionario);
  printf("SALARY = U$ %.2f\n", salarioFinal);

  return 0;
}
