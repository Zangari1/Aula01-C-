#include <stdio.h>

void maior_elemento(int array[], int N, int *maior, int *ocorrencias) {
    *maior = array[0];
    *ocorrencias = 1;

    for (int i = 1; i < N; i++) {
        if (array[i] > *maior) {
            *maior = array[i];
            *ocorrencias = 1;
        } else if (array[i] == *maior) {
            (*ocorrencias)++;
        }
    }
}

int main() {
    int N;

    printf("Digite o tamanho do array: ");
    scanf("%d", &N);

    int array[N];
    for (int i = 0; i < N; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int maior, ocorrencias;
    maior_elemento(array, N, &maior, &ocorrencias);

    printf("O maior elemento é: %d\n", maior);
    printf("Ele ocorreu %d vezes\n", ocorrencias);

    return 0;
}
