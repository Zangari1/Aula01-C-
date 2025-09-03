#include <stdio.h>

int inverteVetor(int vetor[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
    return 1; 
}

int main() {
    int V[5] = {4, 9, 10, 8, 6};
    int tamanho = 5;

    printf("Vetor original:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    int resultado = inverteVetor(V, tamanho);

    if (resultado == 1) {
        printf("Vetor invertido:\n");
        for (int i = 0; i < tamanho; i++) {
            printf("%d ", V[i]);
        }
        printf("\n");
    } else {
        printf("Erro ao inverter o vetor.\n");
    }

    return 0;
}
