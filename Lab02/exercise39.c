#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float winner1, winner2, winner3;
    const int value = 780.000;
    winner1 = value * 0.46;
    winner2 = value * 0.32;
    winner3 = value - (winner1 + winner2);
    printf("O primeiro ganhador recebera: %f\n"
           "O segundo ganhador recebera: %f\n"
           "O terceiro ganhador recebera: %f",
           winner1, winner2, winner3);

    return 0;
}