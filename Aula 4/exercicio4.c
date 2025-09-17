#include <stdio.h>

int diferenca(int A[], int tamanhoA, int B[], int tamanhoB, int vetorDiferenca[]) {
    int count = 0;
    int encontrado;

    for (int i = 0; i < tamanhoA; i++) {
        encontrado = 0;
        for (int j = 0; j < tamanhoB; j++) {
            if (A[i] == B[j]) {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) {
            vetorDiferenca[count] = A[i];
            count++;
        }
    }
    return count;
}

int main() {
    int A1[] = {7, 2, 5, 8, 4};
    int B1[] = {4, 2, 9, 5};
    int tamanhoA1 = sizeof(A1) / sizeof(A1[0]);
    int tamanhoB1 = sizeof(B1) / sizeof(B1[0]);

    int vetorDiferenca1[tamanhoA1];

    int tamanhoDiferenca1 = diferenca(A1, tamanhoA1, B1, tamanhoB1, vetorDiferenca1);

    printf("A - B = { ");
    for (int i = 0; i < tamanhoDiferenca1; i++) {
        printf("%d ", vetorDiferenca1[i]);
    }
    printf("}\n");
  
    int A2[] = {3, 9, 11};
    int B2[] = {2, 6, 1};
    int tamanhoA2 = sizeof(A2) / sizeof(A2[0]);
    int tamanhoB2 = sizeof(B2) / sizeof(B2[0]);

    int vetorDiferenca2[tamanhoA2];

    int tamanhoDiferenca2 = diferenca(A2, tamanhoA2, B2, tamanhoB2, vetorDiferenca2);

    printf("A - B = { ");
    for (int i = 0; i < tamanhoDiferenca2; i++) {
        printf("%d ", vetorDiferenca2[i]);
    }
    printf("}\n");

    return 0;
}
