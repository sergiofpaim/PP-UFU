#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int s, one = 0, two = 0, five = 0, ten = 0, twenty = 0, fifty = 0, oH = 0;
    printf("Digite um numero: ");
    scanf("%d", &s);
    if ((s / 100) >= 1)
    {
        oH++;
        oH *= (s / 100);
    }
    if (((s % 100) / 50) >= 1)
    {
        fifty++;
        fifty *= (s % 100) / 50;
    }
    if (((s % 100) % 50) / 20 >= 1)
    {
        twenty++;
        twenty *= ((s % 100) % 50) / 20;
    }
    if ((((s % 100) % 50) % 20) / 10 >= 1)
    {
        ten++;
        ten *= (((s % 100) % 50) % 20) / 10;
    }
    if (((((s % 100) % 50) % 20) % 10) / 5 >= 1)
    {
        five++;
        five *= ((((s % 100) % 50) % 20) % 10) / 5;
    }
    if ((((((s % 100) % 50) % 20) % 10) % 5) / 2 >= 1)
    {
        two++;
        two *= (((((s % 100) % 50) % 20) % 10) % 5) / 2;
    }
    if (((((((s % 100) % 50) % 20) % 10) % 5) % 2) / 1 >= 1)
    {
        one++;
        one *= ((((((s % 100) % 50) % 20) % 10) % 5) % 2) / 1;
    }

    printf("Serao %d notas de 1\n%d notas de 2\n%d notas de 5\n%d notas de 10\n%d notas de 20\n%d notas de 50\n%d notas de 100", one, two, five, ten, twenty, fifty, oH);

    return 0;
}