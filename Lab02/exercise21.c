#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float l, k;
    printf("Digite uma massa em libras: ");
    scanf("%f", &l);
    k = l * 0.45;
    printf("A massa em Kg e: %f", k);

    return 0;
}