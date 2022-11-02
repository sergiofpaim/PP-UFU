#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, n2, n3, delta, r1, r2;

    printf("Digite o valor de a, b e c\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    if (n1 == 0)
        printf("Nao eh equacao de segundo grau");
    else
    {
        delta = pow(n2, 2) - ((4 * n1) * n3);

        if (delta < 0)
            printf("Nao existe raiz");
        else if (delta == 0)
            printf("Raiz unica");
        else
        {
            r1 = (-n2 + sqrt(delta)) / (2 * n1);
            r2 = (-n2 - sqrt(delta)) / (2 * n1);

            printf("As raizes sao: %f, %f", r1, r2);
        }
    }

    return 0;
}