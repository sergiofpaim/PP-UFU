#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float base, final;
    printf("Digite o salario-base de um funcionario: ");
    scanf("%f", &base);
    final = base + (base * 0.05) - (base * 0.07);
    printf("O funcionario recebera: %f", final);

    return 0;
}