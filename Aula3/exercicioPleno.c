#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortearNumero() {
    return rand() % 100 + 1;
}

int lerPalpite() {
    int palpite;
    do {
        printf("Digite seu palpite (1 a 100): ");
        scanf("%d", &palpite);
        if (palpite < 1 || palpite > 100) {
            printf("Valor inválido! Por favor, digite um número entre 1 e 100.\n");
        }
    } while (palpite < 1 || palpite > 100);
    return palpite;
}

int verificarPalpite(int palpite, int numeroSorteado) {
    if (palpite == numeroSorteado) {
        printf("Parabéns!!! Você acertou!\n");
        return 1;
    }
    else if (palpite < numeroSorteado) {
        printf("Você chutou muito baixo! Tente novamente.\n");
    }
    else {
        printf("Você chutou muito alto! Tente novamente.\n");
    }
    return 0;
}

int main() {
    srand(time(NULL));
    int numeroSorteado = sortearNumero();
    int tentativas = 0;
    int acertou = 0;

    while (!acertou) {
        int palpite = lerPalpite();
        tentativas++;
        acertou = verificarPalpite(palpite, numeroSorteado);
    }

    printf("Você acertou em %d tentativas.\n", tentativas);

    return 0;
}
