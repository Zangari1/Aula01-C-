#include <stdio.h>

void calc_esfera(float R, float *area, float *volume) {
    *area = 4 * 3.14159 * R * R;
    *volume = (4.0/3.0) * 3.14159 * R * R * R;
}

int main() {
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Área da superfície: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}
