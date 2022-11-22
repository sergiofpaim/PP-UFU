#include <stdio.h>

int main()
{
    int n, number = 1;

    printf("Digite um numero de linhas do t=Triangulo de Floyd: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }

    return 0;
}