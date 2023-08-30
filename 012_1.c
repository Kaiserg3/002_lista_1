#include <stdio.h>
int main() {
 int x, y;
printf("insira os dois números a serem trabalhados: ");
  scanf("%i %i", &x, &y);
printf("O valor da soma é: %i \n", x + y);
printf("O valor da diferença é: %i \n", x - y);
printf("O valor do quociente é: %.3f \n",((float) x / y));
printf("O valor do resto é: %.1f \n", x % y);
  return 0;
}
