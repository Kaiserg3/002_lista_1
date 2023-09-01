#include <stdio.h>
#include <math.h>

int main() {
    
    float num1, num2, num3;

    printf("Digite 3 valores float: ");
    scanf(" %f %f %f", &num1, &num2, &num3);

    float mediaA = (num1 + num2 + num3) / 3;
    float mediaG = pow((num1 * num2 * num3), 1.0 / 3);

    printf("\nA media aritmetica: %f", mediaA);
    printf("\nA media geometrica: %f\n", mediaG);

    return 0;

}
