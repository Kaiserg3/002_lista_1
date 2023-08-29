#include <stdio.h>
int main(){
float conta;
  printf("Insira o valor da conta a ser paga: ");
  scanf("%f", &conta);
printf("O valor total a ser pago é: %.2f\n", conta +(conta * 0.1));

return 0;
}
