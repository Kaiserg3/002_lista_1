#include <stdio.h>
int main() {
 int x, y, z;
  printf("Digite o valor de A: ");
    scanf("%d", &x);
    printf("Digite o valor de B: ");
    scanf("%d", &y);
    z = x;
    x = y;
    y = z;
  printf("Valores trocados:\n");
    printf("A: %d\n", x);
    printf("B: %d\n", y);
  return 0;
}
