#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um numero para ver o seu equivalente em dia semanal: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda");
        break;
    case 3:
        printf("Terca");
        break;
    case 4:
        printf("Quarta");
        break;
    case 5:
        printf("Quinta");
        break;
    case 6:
        printf("Sexta");
        break;
    case 7:
        printf("Sabado");
        break;

    default:
        break;
    }

    return 0;
}