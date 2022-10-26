#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Numero invalido");
    else
    {
        n = log10(n);
        printf("O logaritimo desse numero eh: %d", n);
    }

    return 0;
}