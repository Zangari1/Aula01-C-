#include <stdio.h>
#include <math.h>

void frac(float num, int* inteiro, float* fracao) {
    *inteiro = (int)num;
    *fracao = num - *inteiro;
}

int main() {
    float numero, fracao;
    int inteiro;

    printf("Digite um número real: ");
    scanf("%f", &numero);

    frac(numero, &inteiro, &fracao);

    printf("Parte inteira: %d\n", inteiro);
    printf("Parte fracionária: %.6f\n", fracao);

    return 0;
}
