#include <iostream>

unsigned long long fatorial(int n){
  unsigned long long result = 1;

  if(n == 0){
    return 1;
  }

  for(int i = 1; i <= n; ++i){
    result *= i;
  }
  return result;
}

int main() {
  int m,n;
  while(std::cin >> m >> n){
    std::cout << fatorial(m) + fatorial(n) << std::endl;
  }

  return 0;
}
