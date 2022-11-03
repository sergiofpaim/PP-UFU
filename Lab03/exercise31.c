#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float h, w;

    printf("Digite a altura de uma pessoa em m: ");
    scanf("%f", &h);
    printf("O peso de uma pessoa: ");
    scanf("%f", &w);

    printf("Pessoa classe ");

    if (h < 1.2)
    {
        if (w <= 60)
            printf("A");
        else if (w <= 90)
            printf("D");
        else
            printf("G");
    }
    else if (h <= 1.7)
    {
        if (w <= 60)
            printf("B");
        else if (w <= 90)
            printf("E");
        else
            printf("H");
    }
    else
    {
        if (w <= 60)
            printf("C");
        else if (w <= 90)
            printf("F");
        else
            printf("I");
    }

    return 0;
}