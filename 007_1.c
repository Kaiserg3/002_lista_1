#include <stdio.h>

int main() {
  int h, min, seg;
    printf("Digite um valor em horas: ");
  scanf("%i", &h);
    printf("Digite um valor em minutos: ");
  scanf("%i", &min);
    printf("Digite um valor em segundos: ");
  scanf("%i", &seg);

  printf("O valor total em segundos é: %i \n", seg + (min * 60) + (h * 3600) );
    return 0;
}
