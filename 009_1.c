#include <stdio.h>
int main() {
  int x;
    printf("Digite um valor: ");
  scanf("%i", &x);
  printf("O valor do antecessor é: %i \n", --x);
  printf("O valor do sucessor é: %i \n", x + 2);
   
    return 0;
}
