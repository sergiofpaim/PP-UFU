#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float s, y, b = 0, fS;

    printf("Digite o salario atual: ");
    scanf("%f", &s);

    printf("Digite o tempo de serviço em anos: ");
    scanf("%f", &y);

    if (s <= 500)
        s *= 1.25;
    else if (s <= 1000)
        s *= 1.2;
    else if (s <= 1500)
        s *= 1.15;
    else if (s <= 2000)
        s *= 1.1;

    if (y > 1 && y < 4)
        b = 100;
    else if (y < 6)
        b = 100;
    else if (y < 10)
        b = 100;
    else
        b = 500;

    printf("O salario reajustado eh: %f", (s + b));

    return 0;
}