#include <stdio.h>
int main(){
  float x;
  printf("Digite um valor: ");
    scanf("%f", &x);
  x = (x < 0) ? printf("O valor absoluto é: %.2f\n", -x) : printf("O valor absoluto é: %.2f\n", x);
  return 0;
}
