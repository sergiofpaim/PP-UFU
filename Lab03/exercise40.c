#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float fC, d, i = 0;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &fC);

    if (fC <= 12000)
        d = (fC * 0.05);
    else if (fC <= 25000)
    {
        d = (fC * 0.1);
        i = (fC * 0.15);
    }
    else
    {
        d = (fC * 0.15);
        i = (fC * 0.2);
    }

    printf("O custo ao consumidor eh: %f", ((fC + d) + i));

    return 0;
}