#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float v;

    printf("Digite o preco do produto: ");
    scanf("%f", &v);

    if (v <= 50)
        v = (v * 1.05);
    else if (v <= 100)
        v = (v * 1.1);
    else
        v = (v * 1.15);

    printf("O preco novo eh: %f\n", v);

    if (v <= 80)
        printf("Barato");
    else if (v <= 120)
        printf("Normal");
    else if (v <= 200)
        printf("Caro");
    else
        printf("Muito caro");

    return 0;
}