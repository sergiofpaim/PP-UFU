#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float g, r;
    printf("Digite um angulo em graus: ");
    scanf("%f", &g);
    r = g * 3.141592 / 180;
    printf("%f", r);

    return 0;
}