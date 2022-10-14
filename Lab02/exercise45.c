#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char mI, mF;
    printf("Digite uma letra maiuscula: ");
    mI = getchar();
    mF = mI + 32;
    printf("A letra convertida para minuscula eh: %c", mF);

    return 0;
}