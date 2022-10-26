#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bB, sB, h, a;
    printf("A altura de um trapezio: ");
    scanf("%f", &h);

    printf("Digite sua base menor : ");
    scanf("%f", &sB);
    if (sB <= 0)
        printf("O valor deve ser maior que zero");

    printf("Digite sua base maior: ");
    scanf("%f", &bB);
    if (bB <= 0)
        printf("O valor deve ser maior que zero");

    a = ((bB + sB) * h) / 2;

    printf("A area eh: %f \n", a);

    return 0;
}