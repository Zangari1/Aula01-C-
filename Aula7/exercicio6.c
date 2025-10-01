#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void gerar_vetor(int v[], int n) {
    srand(time(NULL));
    int inicial = 1;
    int sorteado;

    for(int i=0; i<n; i++) {
        sorteado = inicial + rand() % (inicial*2);
        v[i] = sorteado;
        inicial = sorteado + 1;
    }
}

int busca_binaria(int v[], int n, int e, int *contador) {
    int indice_medio;
    int menor_indice = 0;
    int maior_indice = n - 1;
    *contador = 0;

    while (maior_indice >= menor_indice) {
        (*contador)++;

        indice_medio = (maior_indice + menor_indice) / 2;

        if (v[indice_medio] == e) {
            return indice_medio;
        } else if (v[indice_medio] > e) {
            maior_indice = indice_medio - 1;
        } else {
            menor_indice = indice_medio + 1;
        }
    }
    return -1;
}

void imprimir(int v[], int n) {
    for(int i=0; i<n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main() {
    int n = 10;
    int dados[10];
    bool sair = false;
    int op;

    int posicoes[100]; 
    int contadores[100]; 
    int total_buscas = 0;

    gerar_vetor(dados, n);

    while (!sair && total_buscas < 100) {
        printf("## Dados: ");
        imprimir(dados, n);
        printf("## Elemento a ser buscado de forma binaria (ou -1 para sair): ");
        scanf("%d", &op);

        if (op == -1) {
            sair = true;
        } else {
            int contador = 0;
            int indice = busca_binaria(dados, n, op, &contador);

            posicoes[total_buscas] = indice;
            contadores[total_buscas] = contador;
            total_buscas++;

            printf("## Contador: %d\n", contador);
            printf("## Posicao em que o elemento foi encontrado: %d\n\n", indice);
        }
    }

    printf("\nResumo das buscas:\n");
    printf("Posicao\tContador\n");
    for(int i=0; i<total_buscas; i++) {
        printf("%d\t%d\n", posicoes[i], contadores[i]);
    }

    printf("\n## Fim!\n");
    return 0;
}
