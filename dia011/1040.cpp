#include <iostream>
#include <iomanip>

int main() {
  float n1, n2, n3, n4, media;
  std::cin >> n1 >> n2 >> n3 >> n4;

  media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10.0;

  std::cout << "Media: " << std::fixed << std::setprecision(1) << media << std::endl;

  if (media >= 7.0) {
    std::cout << "Aluno aprovado." << std::endl;
  } else if (media < 5.0) {
    std::cout << "Aluno reprovado." << std::endl;
  } else {
    std::cout << "Aluno em exame." << std::endl;
    float nExame;
    std::cin >> nExame;
    std::cout << "Nota do exame: " << std::fixed << std::setprecision(1) << nExame << std::endl;
    media = (media + nExame) / 2.0;

    if (media >= 5.0) {
      std::cout << "Aluno aprovado." << std::endl;
    } else {
      std::cout << "Aluno reprovado." << std::endl;
    }

    std::cout << "Media final: " << std::fixed << std::setprecision(1) << media << std::endl;
  }

  return 0;
}

