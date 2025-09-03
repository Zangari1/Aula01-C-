#include <stdio.h>

int intersecao(int A[], int tamanhoA, int B[], int tamanhoB, int vetorIntersecao[]) {
    int count = 0;
    for (int i = 0; i < tamanhoA; i++) {
        for (int j = 0; j < tamanhoB; j++) {
            if (A[i] == B[j]) {
                vetorIntersecao[count] = A[i];
                count++;
                break;
            }
        }
    }
    return count;
}

int main() {
    int A[] = {7, 2, 5, 8, 4};
    int B[] = {4, 2, 9, 5};
    int tamanhoA = sizeof(A) / sizeof(A[0]);
    int tamanhoB = sizeof(B) / sizeof(B[0]);

    int vetorIntersecao[tamanhoA < tamanhoB ? tamanhoA : tamanhoB];

    int tamanhoIntersecao = intersecao(A, tamanhoA, B, tamanhoB, vetorIntersecao);

    printf("Interseção: { ");
    for (int i = 0; i < tamanhoIntersecao; i++) {
        printf("%d ", vetorIntersecao[i]);
    }
    printf("}\n");

    return 0;
}
