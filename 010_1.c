#include <stdio.h>
int main() {
  int comp, larg, alt;
    printf("Digite o valor do comprimento, largura e altura: ");
      scanf("%i %i %i",&comp,&larg,&alt);
    printf("O volume total é: %i", alt * larg * comp);
    
    return 0;
}
