#include <stdio.h>

float verifica(float a, float b, float c);

int main() {

    float a, b, c;
    
    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &a);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &b);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &c);
    
    verifica(a, b, c);
}
float verifica(float a, float b, float c){
    if (a < b + c && b < a + c && c < a + b){
        printf("triangulo valido");
    }
    else{
        printf("triangulo invalido");
    }
}
