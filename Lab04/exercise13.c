#include <stdio.h>

int main()
{
    int n, counter;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    for (counter = 1; counter < n; counter++)
        if ((n % counter) == 0)
            printf("%d ", counter);

    return 0;
}