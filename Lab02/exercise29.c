#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num, c, s, m;
    c = 1;
    s = 0;
    while (c <= 4)
    {
        printf("Digite a %1.fa nota: ", c);
        scanf("%f", &num);
        s = s + num;
        c = c + 1;
    }
    m = s / 4;
    printf("A media eh: %f", m);

    return 0;
}