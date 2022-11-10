#include <stdio.h>

int main()
{
    int n = 0;

    while (n <= 100000)
    {
        printf("%d\n", n);
        n += 1000;
    }

    return 0;
}