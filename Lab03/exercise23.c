#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, r;

    printf("Digite um ano: ");
    scanf("%d", &year);

    if ((year % 400) == 0)
        r = 1;
    else if ((year % 4) == 0 && (year % 100) != 0)
        r = 1;

    if (r == 1)
        printf("O ano eh bissexto");
    else
        printf("O ano nao eh bissexto");

    return 0;
}