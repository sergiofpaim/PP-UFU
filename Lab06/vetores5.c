#include <stdio.h>

void main()
{
    int vector[50];

    for (int i = 0; i < 50; ++i)
    {
        vector[i] = (i + (5 * i));
        printf("%d\n", vector[i]);
    }
}
