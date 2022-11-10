#include <stdio.h>

int main()
{
    float n, r, counter = 1;

    while (counter <= 10)
    {
        printf("Digite o %1.f numero positivo: ", counter);
        scanf("%f", &n);
        if (n > 0)
            r += n;

        counter++;
    }

    printf("A media eh: %f", (r / 10));

    return 0;
}