#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float g, r;
    printf("Digite um angulo em radianos: ");
    scanf("%f", &r);
    g = r * 180 / 3.141592;
    printf("O angulo em graus e: %f", g);

    return 0;
}