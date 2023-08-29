#include <stdio.h>
int main(){
  float x;
printf("Insira um valor inteiro para ser lido: ");
  scanf("%f", &x);
  printf("O triplo do número é: %.1f\n ", x * 3);
  printf("O quadrado do número é: %.1f\n ",x * x);
  printf("A metade do número é: %.2f\n ", x / 2);

  return 0;
}
