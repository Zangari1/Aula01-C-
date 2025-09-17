#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    char frase[200];
    char frase_limpa[200];
    char *p_orig = frase;
    char *p_limpa = frase_limpa;
    char c;

    printf("Digite uma frase: ");

    while ((c = getchar()) != '\n' && (p_orig - frase) < 199) {
        *p_orig = c;
        p_orig++;
    }
    *p_orig = '\0'; 

    p_orig = frase;
    while (*p_orig != '\0') {
        if (isalpha(*p_orig)) {
            *p_limpa = tolower(*p_orig);
            p_limpa++;
        }
        p_orig++;
    }
    *p_limpa = '\0';

    char *inicio = frase_limpa;
    char *fim = frase_limpa;
    while (*fim != '\0') fim++;
    fim--;

    bool eh_palindromo = true;
    while (inicio < fim) {
        if (*inicio != *fim) {
            eh_palindromo = false;
            break;
        }
        inicio++;
        fim--;
    }

    if (eh_palindromo) {
        printf("É palíndromo!\n");
    } else {
        printf("Não é palíndromo.\n");
    }

    return 0;
}
