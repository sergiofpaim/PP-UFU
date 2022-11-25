#include <stdio.h>
#include <math.h>

void main()
{
    int x, y;
    int vector[] = {1, 0, 5, -2, -5, 7, 12, 3};

    printf("Escolha X e Y de 0 a 7\n");
    printf("Escolha o valor X: ");
    scanf("%d", &x);
    printf("Escolha o valor Y: ");
    scanf("%d", &y);

    printf("Os valores escolhidos sao: %d e %d\n", vector[x], vector[y]);
    printf("A soma dos valores eh: %d", (vector[x] + vector[y]));
}