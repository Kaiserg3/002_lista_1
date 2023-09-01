#include <stdio.h>

int main() {
  
    char caracteres[] = "ABCabc012$*+/ ";

    for (int i = 0; caracteres[i] != '\0'; i++) {
        printf("Caractere: %c - Valor Inteiro: %d\n", caracteres[i], caracteres[i] - '0');
    }

    return 0;
}
