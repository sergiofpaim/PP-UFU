#include <stdio.h>

int calculateDouble(int number);

int main()
{
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("O dobro do numero digitado eh: %d", calculateDouble(n));

    return 0;
}

int calculateDouble(int number)
{
    return (number * 2);
}