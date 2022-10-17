#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float v, p1, p2, p3, t;
    printf("Digite o valor do premio: ");
    scanf("%f", &v);
    printf("Digite o valor investido pelo jogador 1: ");
    scanf("%f", &p1);
    printf("Digite o valor investido pelo jogador 2: ");
    scanf("%f", &p2);
    printf("Digite o valor investido pelo jogador 3: ");
    scanf("%f", &p3);
    t = (p1 + p2) + p3;
    printf("O jogador 1 receberia: %f\n"
           "O jogador 2 receberia: %f\n"
           "O jogador 3 receberia: %f",
           p1 / t * v, p2 / t * v, p3 / t * v);

    return 0;
}