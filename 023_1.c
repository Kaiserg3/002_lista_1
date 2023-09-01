#include <stdio.h>
int main() {
    int num, d1, d2, d3;

    printf("Digite um número de três dígitos: ");
    scanf("%d", &num);
   
    d1 = num / 100;
    d2 = (num / 10) % 10;
    d3 = num % 10;

    int mun = d3 * 100 + d2 * 10 + d1;

    printf("Número original: %d\n", num);
    printf("Número invertido: %d\n", mun);

    return 0;
}
