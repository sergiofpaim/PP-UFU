#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k, l;
    printf("Digite uma massa em quilogramas: \n");
    scanf("%f", &k);
    l = k / 0.45;
    printf("A massa em libras eh: %2.f", l);

    return 0;
}