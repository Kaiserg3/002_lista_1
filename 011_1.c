#include <stdio.h>
int main() {
 float dolar,real;

printf("Qual a cotação do dólar atual?: ");
  scanf("%f", &dolar);
printf("Qual o valor em reais a ser convertido?: ");
  scanf("%f", &real);
  printf("O valor em real é equivalente a: %.2f dólares.", real / dolar);
  return 0;
}
