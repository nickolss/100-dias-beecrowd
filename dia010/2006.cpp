#include <iostream>

using namespace std;

int main(){
  int cha,a,b,c,d,e;
  cin >> cha;
  cin >> a >> b >> c >> d >> e;

  int qtdAcertos = 0;
  if(a == cha){
    qtdAcertos++;
  }
  if (b == cha) {
    qtdAcertos++;
  }
  if (c == cha) {
    qtdAcertos++;
  }
  if (d == cha) {
    qtdAcertos++;
  }
  if (e == cha) {
    qtdAcertos++;
  }

  cout << qtdAcertos << endl;
}
