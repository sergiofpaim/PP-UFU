#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, n2, n3;

    printf("Escolha 3 numeros\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    if (n1 > n3)
    {
        int tmp = n3;
        n3 = n1;
        n1 = tmp;
    }
    if (n1 > n2)
    {
        int tmp = n2;
        n2 = n1;
        n1 = tmp;
    }
    if (n2 > n3)
    {
        int tmp = n3;
        n3 = n2;
        n2 = tmp;
    }
    printf("%f\n%f\n%f\n", n1, n2, n3);

    return 0;
}