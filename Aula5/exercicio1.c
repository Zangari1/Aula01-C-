#include <stdio.h>

int dobro(int *a, int *b) {
    *a = *a * 2;  
    *b = *b * 2;
    return *a + *b;
}

int main() {
    int A, B, resultado;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    resultado = dobro(&A, &B);

    printf("A soma do dobro de A e B é: %d\n", resultado);

    return 0;
}
