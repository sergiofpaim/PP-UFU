#include <stdio.h>
#include <math.h>

float compareNum(float n1, float n2);

int main()
{
    float n1, n2;

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite outro numero: ");
    scanf("%f", &n2);

    printf("O maior numero eh %.2f", compareNum(n1, n2));

    return 0;
}
float compareNum(float n1, float n2)
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}