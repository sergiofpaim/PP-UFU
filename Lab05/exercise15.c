#include <stdio.h>
#include <stdlib.h>

void determineTriangle(float n1, float n2, float n3);

int main()
{
    float n1, n2, n3;

    printf("Escolha 3 valores dos lados de um triangulo\n");

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);

    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &n3);

    determineTriangle(n1, n2, n3);

    return 0;
}

void determineTriangle(float n1, float n2, float n3)
{
    if (n3 < (n1 + n2) && n2 < (n3 + n1) && n1 < (n3 + n2))
    {
        printf("Os lados fazem um triangulo ");

        if (n1 == n2 && n1 == n3)
            printf("equilatero");
        else if (n1 == n2 || n1 == n3 || n2 == n3)
            printf("isoceles");
        else
            printf("escaleno");
    }
    else
        printf("Os lados nao fazem um triangulo");
}