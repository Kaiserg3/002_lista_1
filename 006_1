#include <stdio.h>

int main() {
    char sexo;
    float altura, peso;
    
    printf("Insira sua altura: ");
    scanf("%f", &altura);
    
    printf("Insira seu sexo (h para homem, m para mulher): ");
    scanf(" %c", &sexo);
    if (sexo == 'h' || sexo == 'H') {
        printf("Seu peso ideal é: %.2f\n", 72.7 * altura - 58);
    } else if (sexo == 'm' || sexo == 'M') {
        printf("Seu peso ideal é: %.2f\n", 62.1 * altura - 44.7);
    } else {
        printf("Opção de sexo inválida.\n");
    }
    
    return 0;
}
