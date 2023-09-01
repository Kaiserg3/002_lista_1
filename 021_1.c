#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &n2);
  
    int resto = n1 % n2;
  
    int multi = (resto == 0);

    printf("O primeiro número %s múltiplo do segundo número.\n",
           multi ? "é" : "não é");

    return 0;
}
