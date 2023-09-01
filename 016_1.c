#include <stdio.h>

int main() {
    float valorA, horasT, inss;
    printf("Digite o valor da hora aula: ");
      scanf("%f", &valorA);
    
    printf("Digite o número de horas trabalhadas no mês: ");
      scanf("%f", &horasT);
    
    printf("Digite o percentual de desconto do INSS: ");
      scanf("%f", &inss);
  
    float salarioB = valorA * horasT;

   inss = (inss / 100) * salarioB;

    float salarioL = salarioB - inss;
    
    printf("\nSalário Bruto: R$ %.2f\n", salarioB);
    printf("Desconto do INSS: R$ %.2f\n", inss);
    printf("Salário Líquido: R$ %.2f\n", salarioL);
    return 0;
}
