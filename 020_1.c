#include <stdio.h>
int main() {
 int x;
  printf("Digite um valor: ");
   scanf("%i", &x);
   x = (x % 2 == 0) ? printf("O valor é par") : printf("O valor é ímpar");

return 0;
}
