#include <stdio.h>
#include <math.h>

float calculateH(float c1, float c2);

int main()
{
    float c1, c2;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &c1);
    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &c2);

    printf("O valor da hipotenusa eh: %f", calculateH(c1, c2));

    return 0;
}

float calculateH(float c1, float c2)
{
    float h;

    h = sqrt(pow(c1, 2) + pow(c2, 2));

    return h;
}