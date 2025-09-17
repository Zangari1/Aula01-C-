#include <stdio.h>
#include <string.h>

int lerIdade() {
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    return idade;
}

void classificarNadador(int idade, char categoria[]) {
    if (idade >= 5 && idade <= 7) {
        strcpy(categoria, "Infantil A");
    } else if (idade >= 8 && idade <= 10) {
        strcpy(categoria, "Infantil B");
    } else if (idade >= 11 && idade <= 13) {
        strcpy(categoria, "Juvenil A");
    } else if (idade >= 14 && idade <= 17) {
        strcpy(categoria, "Juvenil B");
    } else if (idade >= 18) {
        strcpy(categoria, "Adulto");
    } else {
        strcpy(categoria, "Idade inválida para classificação");
    }
}

void mostrarResultado(int idade, char categoria[]) {
    printf("Idade: %d anos\n", idade);
    printf("Categoria: %s\n", categoria);
}

int main() {
    int idade = lerIdade();
    char categoria[20]; 

    classificarNadador(idade, categoria);
    mostrarResultado(idade, categoria);

    return 0;
}
