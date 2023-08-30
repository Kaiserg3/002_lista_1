#include <stdio.h>
int main() {
 float c;
  printf("Qual a temperatura em Graus Celsius?: ");
   scanf("%f", &c);
    printf("O valor em Farenheit é: %.2f", (9 * c + 160)/5);
  return 0;
}
