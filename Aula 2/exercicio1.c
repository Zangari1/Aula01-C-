#include <stdio.h>

int main(){
    int n1;
    int n2;
    int sum;
    int sub;
    int mult;
    int div;
    printf("insert the first number: ");
    scanf("%d", &n1);
    printf("insert the second number: ");
    scanf("%d", &n2);

    sum = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    div = n1/n2;

    printf("Sum = %d, subtração = %d, multiplicação = %d e divisão = %d", sum, sub, mult, div);

    return 0;

}