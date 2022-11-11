#include <stdio.h>
#include <stdlib.h>
int main()
{
    int counter, a, b;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um numero: ");
    scanf("%d", &b);

    printf("Todos os números primos entre esses numeros sao:\n");
    for (counter = a; counter < b; counter++)
    {
        if (counter < 4)
        {
            printf("2 3 ");
            counter = 4;
        }
        if (counter % 2 != 0 && counter % 3 != 0)
            printf("%d ", counter);
    }

    return 0;
}