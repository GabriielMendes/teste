#include <stdio.h>

float SomaDeDigitos(float num1, float num2)
{
    float valorAbsoluto(float x);

    if(num1 < 0){
        num1 = valorAbsoluto(num1);
    }
    if(num2 < 0){
        num2 = valorAbsoluto(num2);
    }
    
    return num1 + num2;
}
float valorAbsoluto(float x)
{
    return x * -1;
}

int main()
{
    float SomaDeDigitos(float num1, float num2);
    int a, b, soma;

    printf("digite dois numeros:");
    scanf("%d", &a);
    scanf("%d", &b);
    
    soma = SomaDeDigitos(a, b);

    printf("a soma eh: %d",soma);
}