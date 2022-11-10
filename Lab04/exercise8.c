#include <stdio.h>

int main()
{
    float n1, n2 = 0, counter = 1;

    while (counter <= 10)
    {
        printf("Digite o %f numero: ", counter);
        scanf("%f", &n1);
        if (n1 > n2)
            n2 = n1;

        counter++;
    }

    printf("O maior numero foi: %f", n2);

    return 0;
}