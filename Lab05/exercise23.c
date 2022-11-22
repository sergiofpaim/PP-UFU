#include <stdio.h>

int main()
{
    int n;

    printf("Digite um numero de linhas: ");
    scanf("%d", &n);

    calculateLines(n);
}

void calculateLines(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}