#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float v, h, s;
    printf("Digite o valor da hora de trabalho em reais: \n");
    scanf("%f", &v);
    printf("Digite o numero de horas trabalhadas no mes: \n");
    scanf("%f", &h);
    s = (v * h) * 1.1;
    printf("O valor que voce vai receber eh: %2.f", s);

    return 0;
}