#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int tIS, tIM, tIH, dS, dM, dH, tFS, tFM, tFH;
    printf("Digite o horario atual em hora, minuto e segundo, entre virgulas e espaços: \n");
    scanf("%d, %d, %d", &tIH, &tIM, &tIS);
    printf("Digite  a duracao do experimento em hora, minuto e segundo, entre virgulas e espaços: \n");
    scanf("%d, %d, %d", &dH, &dM, &dS);

    tFS = (tIS + dS) % 60;
    tFM = (tIM + dM) % 60;
    tFH = tIH + dH;
    if (tIS + dS >= 60)
        tFM++;
    if (tIM + dM >= 60)
        tFH++;
    if (tFH >= 24)
        tFH = tFH % 24;

    printf("O experimento terminou as: %d horas, %d minutos e %d segundos", tFH, tFM, tFS);

    return 0;
}