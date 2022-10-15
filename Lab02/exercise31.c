#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, suc, ant;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    ant = num - 1;
    suc = num + 1;
    printf("O antecessor e o sucessor respectivamente sao: %d %d", ant, suc);

    return 0;
}