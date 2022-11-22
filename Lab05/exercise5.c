#include <stdio.h>
#include <math.h>

float calculateVol(float radius);
const double pi = 3.141592;

int main()
{
    float r = 0;

    printf("Digite o raio de uma esfera: ");
    scanf("%f", &r);

    printf("O volume eh %f", calculateVol(r));

    return 0;
}
float calculateVol(float radius)
{
    float volume;

    volume = (4 * pi * pow(radius, 3) / 3);

    return volume;
}