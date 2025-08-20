#include <stdio.h>
int main(){
float peso;
float altura;
float imc;
printf("Digite o peso: ");
scanf("%f", &peso);
printf("Digite a altura(m): ");
scanf("%f", &altura);

imc = peso/(altura*altura);

printf("O IMC de uma pessoa com peso %f e altura %f é igual a %f", peso, altura, imc);

}