#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c = 1.5, z = 1.1;
    int year = 0;

    while (c >= z)
    {
        c += 0.02;
        z += 0.03;
        year++;
    }
    printf("Sao necessarios %d anos!\n\n", year);
}