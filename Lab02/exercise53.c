#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float c, l, p, c;
    printf("Digite a largura do terreno: \n");
    scanf("%f", &l);
    printf("Digite o comprimento do terreno: \n");
    scanf("%f", &c);
    printf("Digite o valor do metro da tela: \n");
    scanf("%f", &p);
    c = (2 * l + 2 * c) * p;
    printf("O valor gasto para cerca o terreno sera %2.f", c);

    return 0;
}