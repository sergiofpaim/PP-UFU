#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int seg, h, m, s, rest;
    printf("Digite um tempo em segundos e vamos mostra-lo em horas, minutos e segundos: \n");
    scanf("%d", &seg);
    h = seg / 3600;
    rest = seg % 3600;
    m = rest / 60;
    s = rest % 60;
    printf("O tempo em horas, minutos e segundos eh: %dh %dm %ds \n", h, m, s);

    return 0;
}