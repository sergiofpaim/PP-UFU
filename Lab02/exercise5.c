#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float number;
    printf("Digite um numero real: ");
    scanf("%f", &number);
    number = number / 5;
    printf("A quinta parte desse numero e: %f", number);

    return 0;
}