#include <stdio.h>
#include <math.h>

void desenha_linha(int lineNumber);

int main()
{
    int n;

    printf("Digite o numero de simbolos: ");
    scanf("%d", &n);

    desenha_linha(n);

    return 0;
}

void desenha_linha(int lineNumber)
{
    for (int i = 0; i < lineNumber; i++)
        printf("=");
}