#include <stdio.h>
#include <math.h>

int calculateExp(int n1, int n2);

int main()
{
    int n1, n2;

    printf("Digite um valor: ");
    scanf("%d", &n1);
    printf("Digite outro valor ao qual o primeiro sera elevado: ");
    scanf("%d", &n2);

    printf("O resultado eh %d", calculateExp(n1, n2));

    return 0;
}

int calculateExp(int n1, int n2)
{
    for (int i = 1; i < n2; i++)
        n1 *= n1;

    return n1;
}