#include <stdio.h>
#include <ctype.h>

void codigo_cesar(char *orig, char *codificada) {
    while (*orig != '\0') {
        if (isalpha(*orig)) {
            char letra = toupper(*orig);
            letra = ((letra - 'A' + 3) % 26) + 'A';
            *codificada = letra;
        } else {
            *codificada = *orig;
        }
        orig++;
        codificada++;
    }
    *codificada = '\0';
}

int main() {
    char frase[200];
    char frase_codificada[200];
    int i = 0;
    char c;

    printf("Digite uma frase: ");

    while ((c = getchar()) != '\n' && i < 199) {
        frase[i] = c;
        i++;
    }
    frase[i] = '\0';

    codigo_cesar(frase, frase_codificada);

    printf("Nova string: %s\n", frase_codificada);

    return 0;
}
