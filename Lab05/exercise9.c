#include <stdio.h>
#include <math.h>

float calculateVol(float radius, float height);
const double pi = 3.141592;

int main()
{
    float h, r;

    printf("Digite a altura de um cilindro circular: ");
    scanf("%f", &h);
    printf("Digite o raio de um cilindro circular: ");
    scanf("%f", &r);

    printf("O volume eh %f", calculateVol(r, h));

    return 0;
}
float calculateVol(float radius, float height)
{
    float volume;

    volume = pi * pow(radius, 2) * height;

    return volume;
}