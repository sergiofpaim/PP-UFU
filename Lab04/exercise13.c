#include <stdio.h>

int main()
{
    int counter;
    const int n = 1000;

    printf("Todos os números naturais abaixo de 1000 que são múltiplos de 3 ou 5 sao\n");
    for (counter = 1; counter < n; counter++)
        if (counter % 3 == 0 || counter % 5 == 0)
            printf("%d ", counter);

    return 0;
}