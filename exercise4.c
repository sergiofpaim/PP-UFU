#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float number;
    printf("Digite um numero real: ");
    scanf("%f", &number);
    number = pow(number, 2);
    printf("%f", number);

    return 0;
}