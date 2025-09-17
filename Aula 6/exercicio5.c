#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX 5
#define TAM 100

void lerLinha(char *vet, int tam) {
    int i = 0;
    char c;
    while ((c = getchar()) != '\n' && c != EOF && i < tam - 1) {
        vet[i++] = c;
    }
    vet[i] = '\0';
}

bool contemSub(char *txt, char *busca) {
    char *p1 = txt;
    char *p2;
    while (*p1 != '\0') {
        p2 = busca;
        char *p3 = p1;

        while (*p3 != '\0' && *p2 != '\0' && tolower(*p3) == tolower(*p2)) {
            p3++;
            p2++;
        }
        if (*p2 == '\0') {
            return true;
        }
        p1++;
    }
    return false;
}

void limpaBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char nomes[MAX][TAM];
    int qtd = 0;
    char resp = 's';
    char busca[TAM];

    do {
        if (qtd == MAX) {
            printf("Limite de %d alunos atingido.\n", MAX);
            break;
        }
        printf("Digite o nome do aluno %d: ", qtd + 1);
        lerLinha(nomes[qtd], TAM);
        qtd++;

        if (qtd < MAX) {
            printf("Quer adicionar mais um? (s/n): ");
            resp = getchar();
            limpaBuffer();
        } else {
            printf("Lista completa.\n");
            break;
        }
    } while (resp == 's' || resp == 'S');

    printf("Digite o nome ou parte do nome para buscar: ");
    lerLinha(busca, TAM);

    bool achou = false;
    printf("Resultados da busca:\n");
    for (int i = 0; i < qtd; i++) {
        if (contemSub(nomes[i], busca)) {
            printf("Aluno: %s (índice: %d)\n", nomes[i], i);
            achou = true;
        }
    }

    if (!achou) {
        printf("Nenhum aluno encontrado.\n");
    }

    return 0;
}
