#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, m;
    printf("Digite um valor de area em acres: ");
    scanf("%f", &a);
    m = a * 4048.58;
    printf("O comprimento em metros quadrados eh: %f", m);
    return 0;
}