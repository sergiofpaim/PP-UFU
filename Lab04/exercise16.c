#include <stdio.h>
#include <math.h>

int main()
{
    int counter = 1, n;

    while (counter == 1)
    {
        printf("Digite um numero positivo para ser processado, ou um negativo caso queira parar: ");
        scanf("%d", &n);

        if (n <= 0)
            counter = 0;
        else
            printf("O quadrado eh: %f\nO cubo eh: %f\nA raiz quadrada eh: %f\n", pow(n, 2), pow(n, 3), (sqrt(n)));
    }

    return 0;
}