#include <stdio.h>
int main(){
float celsius;
float fahrenheit;
printf("Digite o valor da temperatura em celsius: ");
scanf("%f", &celsius);

fahrenheit = (9/5)*celsius+32;
printf("Uma temperatura de %f graus Celsius equivale a %f graus Fahrenheit.", celsius, fahrenheit);


}