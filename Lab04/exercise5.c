#include <stdio.h>

int main()
{
    float n, r, counter = 1;

    while (counter <= 10)
    {
        printf("Digite o %1.f numero: ", counter);
        scanf("%f", &n);
        r += n;
        counter++;
    }

    printf("A soma eh: %1.f", r);

    return 0;
}