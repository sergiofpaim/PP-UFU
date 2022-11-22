#include <stdio.h>
#include <math.h>

float calculateM(float n1, float n2, float n3, char op);

int main()
{
    float n1, n2, n3;
    char op;

    printf("Digite letra 'A' para media aritmetica e 'P' para ponderada: ");
    scanf("%c", &op);
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("A media eh %.2f", calculateM(n1, n2, n3, op));

    return 0;
}
float calculateM(float n1, float n2, float n3, char op)
{
    if (op == 'A')
        return (n1 + n2 + n3) / 3;
    else
        return ((n1 * 5) + (n2 * 3) + (n1 * 2)) / 10;
}