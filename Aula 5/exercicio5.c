#include <stdio.h>

void min_max(int V[], int N, int *min, int *max) {
    *min = V[0];
    *max = V[0];

    for (int i = 1; i < N; i++) {
        if (V[i] < *min) {
            *min = V[i];
        }
        if (V[i] > *max) {
            *max = V[i];
        }
    }
}

int main() {
    int N;

    printf("Digite o tamanho do array: ");
    scanf("%d", &N);

    int V[N];
    for (int i = 0; i < N; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &V[i]);
    }

    int min, max;
    min_max(V, N, &min, &max);

    printf("Valor mínimo: %d\n", min);
    printf("Valor máximo: %d\n", max);

    return 0;
}
