#include <stdio.h>
#include <stdbool.h> 

bool strings_iguais(char *s1, char *s2) {
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2) {
            return false;
        }
        s1++;
        s2++;
    }
    return (*s1 == '\0' && *s2 == '\0');
}

int main() {
    char str1[100], str2[100];
    bool resultado;

    printf("Digite a primeira string: ");
    scanf("%99s", str1);

    printf("Digite a segunda string: ");
    scanf("%99s", str2);

    resultado = strings_iguais(str1, str2);

    if (resultado) {
        printf("TRUE: as strings são iguais.\n");
    } else {
        printf("FALSE: as strings são diferentes.\n");
    }

    return 0;
}
