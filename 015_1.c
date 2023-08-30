#include <stdio.h>
int main() {
 float salario, liquido;
  int dias;
  salario = 50.25;
  printf("Quantos dias foram trabalhados?: ");
   scanf("%i", &dias);
  if (dias < 10){
    printf("O valor total a ser pago é: %.2f\n", salario * dias - (salario * dias * 0.10));
  }  else if ( 10 < dias < 20){
    printf("O valor total a ser pago é: %.2f\n", salario * dias - (salario * dias * 0.10) + (salario * dias * 0.20));
  } else{
    printf("O valor total a ser pago é: %.2f\n", salario * dias - (salario * dias * 0.10) + (salario * dias * 0.30));
  }
  
  return 0;
}
