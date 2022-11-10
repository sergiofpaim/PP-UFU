#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, n1F, n2F, n3F, n4F, n5F, r, counter = 9999;

    printf("Digite o primeiro numero de 3 digitos: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero de 3 digitos: ");
    scanf("%d", &n2);

    r = (n1 * n2);

    while (counter < r)
    {
        counter++;

        n1 = counter / 10000;
        n2 = ((counter % 10000) / 1000);
        n3 = (((counter % 10000) % 1000) / 100);
        n4 = ((((counter % 10000) % 1000) % 100) / 10);
        n5 = (((((counter % 10000) % 1000) % 100) % 10));

        if (n1 == n5 && n2 == n4)
        {
            n1F = n1;
            n2F = n2;
            n3F = n3;
            n4F = n4;
            n5F = n5;
        }
    }
    printf("O maior palindromo feito a partir do produto dos numeros eh: %d%d%d%d%d", n1F, n2F, n3F, n4F, n5F);

    return 0;
}