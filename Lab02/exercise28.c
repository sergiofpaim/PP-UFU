#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float v1, v2, v3, s;
    printf("Digite 3 valores: ");
    scanf("%f %f %f", &v1, &v2, &v3);
    s = (v1 * v1) + (v2 * v2) + (v3 * v3);
    printf("A soma dos quadrados eh: %f", s);

    return 0;
}