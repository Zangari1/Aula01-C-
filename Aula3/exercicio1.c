#include <stdio.h>
#include <stdlib.h>

float calcular(float media, float porcentagem);
int main() {
    float media, porcentagem;

    printf("Digite sua média: ");
    scanf("%f", &media);

    printf("Digite sua frequencia: ");
    scanf("%f", &porcentagem);

    calcular(media, porcentagem);

}

float calcular(float media, float porcentagem){
    if (porcentagem<75){
        printf("Reprovado");
    }
    else if(porcentagem>=75 && media>=7.5){
        printf("Aprovado");
    }
    else{
        printf("Exame");
    }
}
