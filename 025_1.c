#include <stdio.h>

int main() {
    int total, h, min, seg;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &total);

    h = total / 3600;
    min = (total % 3600) / 60;
    seg = total % 60;

    printf("Tempo equivalente: %d horas, %d minutos e %d segundos\n", h, min, seg);
    return 0;
}
