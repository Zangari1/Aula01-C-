#include <stdio.h>

int main() {
    char nome[100];
    char sexo;
    int idade;

    printf("Digite o nome: ");
    scanf("%99s", nome);

    printf("Digite o sexo (F/M): ");
    scanf(" %c", &sexo);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if ((sexo == 'F' || sexo == 'f') && idade < 25) {
        printf("%s ACEITA\n", nome);
    } else {
        printf("NÃO ACEITA\n");
    }

    return 0;
}
