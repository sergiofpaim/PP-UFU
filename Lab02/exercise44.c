#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float d, h;
    int n;
    printf("Digite a altura em cm do degrau: ");
    scanf("%f", &d);
    printf("Digite a altura em cm que deseja subir: ");
    scanf("%f", &h);
    n = ceil(h / d);
    printf("O usuario deve subir no minimo %d degraus", n);

    return 0;
}