#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float hI, mI, hF, mF, dM, dH, dDay, value;

    printf("Digite um minuto de chegada: ");
    scanf("%f", &mI);
    printf("Digite uma hora de chegada: ");
    scanf("%f", &hI);

    printf("Digite um minuto de saida: ");
    scanf("%f", &mF);
    printf("Digite uma hora de saida: ");
    scanf("%f", &hF);

    dM = (mF - mI);
    dH = (hF - hI);

    if (dM < 0)
        dM += 60;
    if (dH < 0)
        dH += 24;

    // Calcula a duracao

    if (dM > 0)
        dH++;

    if (dH <= 2)
        value = (dH);
    else if (dH <= 4)
        value = (dH * 1.4);
    else
        value = (dH * 2);

    printf("O valor a pagar eh: %f", value);
}