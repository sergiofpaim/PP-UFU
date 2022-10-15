#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, n1, n2, n3, n4;
    printf("Digite um numero inteiro de 4 digitos: \n");
    scanf("%d", &num);
    n1 = num / 1000;
    n2 = (num % 1000) / 100;
    n3 = ((num % 1000) % 100) / 10;
    n4 = ((num % 1000) % 100) % 10;
    printf("O numero digitado foi: \n %d \n %d \n %d \n %d \n", n1, n2, n3, n4);

    return 0;
}