#include <stdio.h>
int main() {
 float pi = 3.14159;
   float r;

  printf("Digite o valor do raio: ");
    scanf("%f", &r);
  printf("O valor do diâmetro é: %.4f\n", 2 * r);
  printf("O valor da circunferência é: %.4f\n", 2 * r * pi);
  printf("O valor da área é: %.4f\n", 2 * r * pi * pi);

  return 0;
}
