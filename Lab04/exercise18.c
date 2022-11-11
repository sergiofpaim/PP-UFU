#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    const currentYear = 2022;
    float s = 2000, initialYear = 1995, bonus;

    while (initialYear <= currentYear)
    {
        bonus = (s * 0.015);
        s += bonus;
        bonus *= 2;

        initialYear++;
    }

    printf("O salario atual eh: %f", s);

    return 0;
}