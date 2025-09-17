#include <stdio.h>
int main(){
    float raio;
    float area;
    float pi;

    printf("Digite o raio do círculo: ");
    scanf("%f, &raio");
    
    pi = 3.14;
    area = pi*raio*raio;
    printf("Um círculo com raio %f tem área igual a %f.", raio, area);

return 0;
}