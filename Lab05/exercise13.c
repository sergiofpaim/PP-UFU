#include <stdio.h>
#include <math.h>

float convertOperation(float n1, float n2, char op);

int main()
{
    float n1, n2;
    char op;

    printf("Digite o simbolo da operacao desejada: ");
    scanf("%c", &op);
    printf("Digite um valor: ");
    scanf("%f", &n1);
    printf("Digite outro valor: ");
    scanf("%f", &n2);

    printf("O resultado eh eh %.2f", convertOperation(n1, n2, op));

    return 0;
}

float convertOperation(float n1, float n2, char op)
{
    if (op == '+')
        return (n1 + n2);
    else if (op == '-')
        return (n1 - n2);
    else if (op == '*')
        return (n1 * n2);
    else if (op == '/')
        return (n1 / n2);
    else
        printf("Erro.");

    return 0;
}