#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float c1, c2, h;
    printf("Digite o valor do 1o e do 2o cateto: \n");
    scanf("%f%f", &c1, &c2);
    h = sqrt((pow(c1, 2) + pow(c2, 2)));
    printf("O valor da hipotenusa eh: %f", h);
    return 0;
}